#include <rules.h>

float output_calculator(Fuzzy* csillag, uint8_t output_index, uint8_t start_index, uint8_t end_index)
{
  float sum = 0;
  float multi_sum = 0;
  for(float sum_cnt = csillag[output_index].F[start_index].start; sum_cnt < csillag[output_index].F[end_index].end; sum_cnt += ((csillag[output_index].F[end_index].end - csillag[output_index].F[start_index].start) / 100)) {
    csillag[output_index].putInputData(sum_cnt);
    sum = sum + max(csillag[output_index].F[start_index].w, csillag[output_index].F[end_index].w);
    multi_sum = multi_sum + (max(csillag[output_index].F[start_index].w, csillag[output_index].F[end_index].w) * sum_cnt);
  }
  float out = multi_sum / sum;
  return out;
}

float multimax(Fuzzy* halmaz, uint8_t halmaz_szam, uint8_t f_szam) 
{
  float maxi = 0;
  for(uint8_t hi = 0; hi < halmaz_szam; hi++) {
    for(uint8_t fi = 0; fi < f_szam; fi++) {
      maxi = max(maxi, halmaz[hi].F[fi].w);
    }
  }
  return maxi;
}
float finale_output_calculator(Fuzzy* csillag, uint8_t csillag_szam)
{
  float sum = 0;
  float multi_sum = 0;
  for(float sum_cnt = csillag[0].F[0].start; sum_cnt < csillag[0].F[3].end; sum_cnt += ((csillag[0].F[3].end - csillag[0].F[0].start) / 100)) {
    for(int idx = 0; idx < csillag_szam; idx++)
      csillag[idx].putInputData(sum_cnt);
    sum = sum + multimax(csillag, csillag_szam, 4);
    multi_sum = multi_sum + (multimax(csillag, csillag_szam, 4) * sum_cnt);
  }
  float out = multi_sum / sum;
  return out;
}