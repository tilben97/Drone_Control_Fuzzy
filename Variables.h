#include <Arduino.h>


float a[4], b[4], c[4];
float y[4];
long s_index = 0, e_index = 300;
unsigned long timer = 0;
bool toogle = false;
bool negative = false;
//mtx_type A[3][4];

class Fuzzy
{
private:
  /* data */
  //float w;
  uint8_t step = 0;
  struct element
{
  uint32_t start;
  uint32_t middle;
  uint32_t middle2;
  uint32_t end;
  float w;
  float limit;
};  
public:
  element F[10];
  bool small = false;
  bool medium = false;
  bool big = false;
  bool huge = false;
  void addNewElement(uint32_t start_point, uint32_t middle_point, uint32_t sec_middle_point, uint32_t end_point);
  void putInputData(float x);
  Fuzzy(/* args */);
  ~Fuzzy();
};

Fuzzy::Fuzzy(/* args */){
}

Fuzzy::~Fuzzy(){
}

void Fuzzy::addNewElement(uint32_t start_point, uint32_t middle_point, uint32_t sec_middle_point, uint32_t end_point){
  F[step].start = start_point;
  F[step].middle = middle_point;
  F[step].middle2 = sec_middle_point;
  F[step].end = end_point;
  F[step].w = 0;
  F[step].limit = 1;
  step++;
}

void Fuzzy::putInputData(float x){
  if(x <= F[0].middle) {
    small = true;
    F[0].w = min((const float)(x - F[0].start) / (F[0].middle - F[0].start), F[0].limit);
    F[1].w = 0;
    F[2].w = 0;
    F[3].w = 0;
  }
  else if(x <= F[1].middle) {
    small = true;
    medium = true;
    F[0].w = min((const float)(F[0].end - x) / (F[0].end - F[0].middle), F[0].limit);
    F[1].w = min((const float)(x - F[1].middle) / (F[1].middle - F[1].start), F[1].limit);
    F[2].w = 0;
    F[3].w = 0;
  }
  else if(x <= F[2].middle) {
    medium = true;
    big = true;
    F[0].w = 0;
    F[1].w = min((const float)(F[1].end - x) / (F[1].end - F[1].middle), F[1].limit);
    F[2].w = min((const float)(x - F[2].start) / (F[2].middle - F[2].start), F[2].limit);
    F[3].w = 0;
  }
  else if(x <= F[3].middle) {
    big = true;
    huge = true;
    F[0].w = 0;
    F[1].w = 0;
    F[2].w = min((const float)(F[2].end - x) / (F[2].end - F[2].middle), F[2].limit);
    F[3].w = min((const float)(x - F[3].start) / (F[3].middle - F[3].start), F[3].limit);
  }
  else if(x > F[3].middle) {
    huge = true;
    F[0].w = 0;
    F[1].w = 0;
    F[2].w = 0;
    F[3].w =  F[3].limit;
  }
}

//  A halmazok  ///////////////////////////////////////
// Bemenet Alap Fuzzy Halmaz - SZOG//
Fuzzy A_ANGEL = Fuzzy();
//Bemenet Alap Fuzzy Halmazok - SEBESSEG//
Fuzzy AB[3] = Fuzzy();
//  B halmazok  ///////////////////////////////////////
// Kimenet Alap Fuzzy Halmaz //
Fuzzy B_MOTOR = Fuzzy();
// B* kimeneti halmazok //
Fuzzy B_Star[4] = Fuzzy();
// B* kimeneti halmazok - vegso PWM ertekre //
Fuzzy B_FinalStar[100] = Fuzzy();
/////////////////////////////////////////////////////////////////////////////////////////