
#include <Variables.h>


void first_rules()  //  ROLL
{
  B_Star[0] = B_MOTOR;
  B_Star[1] = B_MOTOR;
  B_Star[2] = B_MOTOR;
  B_Star[3] = B_MOTOR;
  if(!negative) {
    if(A_ANGEL.small) {
      e_index = 1;
      s_index = 1;
      B_Star[0].F[1].limit = A_ANGEL.F[0].w;
      B_Star[1].F[1].limit = A_ANGEL.F[0].w;
    }
    else {
      B_Star[0].F[1].limit = 0;
      B_Star[1].F[1].limit = 0;
    }
    if(A_ANGEL.medium) {
      e_index = 2;
      if(s_index == 0)
        s_index = 2;
      B_Star[0].F[2].limit = A_ANGEL.F[1].w;
      B_Star[1].F[2].limit = A_ANGEL.F[1].w;
    }
    else {
      B_Star[0].F[2].limit = 0;
      B_Star[1].F[2].limit = 0;
    }
    if(A_ANGEL.big) {
      e_index = 3;
      if(s_index == 0)
        s_index = 3;
      B_Star[0].F[3].limit = A_ANGEL.F[2].w;
      B_Star[1].F[3].limit = A_ANGEL.F[2].w;
    }
    else {
      B_Star[0].F[3].limit = 0;
      B_Star[1].F[3].limit = 0;
    }
    if(A_ANGEL.huge) {
      e_index = 4;
      if(s_index == 0)
        s_index = 4;
      B_Star[0].F[4].limit = A_ANGEL.F[3].w;
      B_Star[1].F[4].limit = A_ANGEL.F[3].w;
    }
    else {
      B_Star[0].F[4].limit = 0;
      B_Star[1].F[4].limit = 0;
    }
  }
  else {
    if(A_ANGEL.small) {
      e_index = 1;
      s_index = 1;
      B_Star[2].F[1].limit = A_ANGEL.F[0].w;
      B_Star[3].F[1].limit = A_ANGEL.F[0].w;
    }
    else {
      B_Star[2].F[1].limit = 0;
      B_Star[3].F[1].limit = 0;
    }
    if(A_ANGEL.medium) {
      e_index = 2;
      if(s_index == 0)
        s_index = 2;
      B_Star[2].F[2].limit = A_ANGEL.F[1].w;
      B_Star[3].F[2].limit = A_ANGEL.F[1].w;
    }
    else {
      B_Star[2].F[2].limit = 0;
      B_Star[3].F[2].limit = 0;
    }
    if(A_ANGEL.big) {
      e_index = 3;
      if(s_index == 0)
        s_index = 3;
      B_Star[2].F[3].limit = A_ANGEL.F[2].w;
      B_Star[3].F[3].limit = A_ANGEL.F[2].w;
    }
    else {
      B_Star[2].F[3].limit = 0;
      B_Star[3].F[3].limit = 0;
    }
    if(A_ANGEL.huge) {
      e_index = 4;
      if(s_index == 0)
        s_index = 4;
      B_Star[2].F[4].limit = A_ANGEL.F[3].w;
      B_Star[3].F[4].limit = A_ANGEL.F[3].w;
    }
    else {
      B_Star[2].F[4].limit = 0;
      B_Star[3].F[4].limit = 0;
    }
  }
}
void second_rules() //  PITCH
{
    B_Star[0] = B_MOTOR;
    B_Star[1] = B_MOTOR;
    B_Star[2] = B_MOTOR;
    B_Star[3] = B_MOTOR;
  if(!negative) {
    if(A_ANGEL.small) {
      e_index = 1;
      s_index = 1;
      B_Star[3].F[1].limit = A_ANGEL.F[0].w;
      B_Star[1].F[1].limit = A_ANGEL.F[0].w;
    }
    else {
      B_Star[3].F[1].limit = 0;
      B_Star[1].F[1].limit = 0;
    }
    if(A_ANGEL.medium) {
      e_index = 2;
      if(s_index == 0)
        s_index = 2;
      B_Star[3].F[2].limit = A_ANGEL.F[1].w;
      B_Star[1].F[2].limit = A_ANGEL.F[1].w;
    }
    else {
      B_Star[3].F[2].limit = 0;
      B_Star[1].F[2].limit = 0;
    }
    if(A_ANGEL.big) {
      e_index = 3;
      if(s_index == 0)
        s_index = 3;
      B_Star[3].F[3].limit = A_ANGEL.F[2].w;
      B_Star[1].F[3].limit = A_ANGEL.F[2].w;
    }
    else {
      B_Star[3].F[3].limit = 0;
      B_Star[1].F[3].limit = 0;
    }
    if(A_ANGEL.huge) {
      e_index = 4;
      if(s_index == 0)
        s_index = 4;
      B_Star[3].F[4].limit = A_ANGEL.F[3].w;
      B_Star[1].F[4].limit = A_ANGEL.F[3].w;
    }
    else {
      B_Star[3].F[4].limit = 0;
      B_Star[1].F[4].limit = 0;
    }
  }
  else {
      if(A_ANGEL.small) {
      e_index = 1;
      s_index = 1;
      B_Star[0].F[1].limit = A_ANGEL.F[0].w;
      B_Star[2].F[1].limit = A_ANGEL.F[0].w;
    }
    else {
      B_Star[0].F[1].limit = 0;
      B_Star[2].F[1].limit = 0;
    }
    if(A_ANGEL.medium) {
      e_index = 2;
      if(s_index == 0)
        s_index = 2;
      B_Star[0].F[2].limit = A_ANGEL.F[1].w;
      B_Star[2].F[2].limit = A_ANGEL.F[1].w;
    }
    else {
      B_Star[0].F[2].limit = 0;
      B_Star[2].F[2].limit = 0;
    }
    if(A_ANGEL.big) {
      e_index = 3;
      if(s_index == 0)
        s_index = 3;
      B_Star[0].F[3].limit = A_ANGEL.F[2].w;
      B_Star[2].F[3].limit = A_ANGEL.F[2].w;
    }
    else {
      B_Star[0].F[3].limit = 0;
      B_Star[2].F[3].limit = 0;
    }
    if(A_ANGEL.huge) {
      e_index = 4;
      if(s_index == 0)
        s_index = 4;
      B_Star[0].F[4].limit = A_ANGEL.F[3].w;
      B_Star[2].F[4].limit = A_ANGEL.F[3].w;
    }
    else {
      B_Star[0].F[4].limit = 0;
      B_Star[2].F[4].limit = 0;
    }
  }
}
void third_rules()  //  YAW
{
    B_Star[0] = B_MOTOR;
    B_Star[1] = B_MOTOR;
    B_Star[2] = B_MOTOR;
    B_Star[3] = B_MOTOR;
  if(!negative) {
    if(A_ANGEL.small) {
      e_index = 1;
      s_index = 1;
      B_Star[2].F[1].limit = A_ANGEL.F[0].w;
      B_Star[1].F[1].limit = A_ANGEL.F[0].w;
    }
    else {
      B_Star[2].F[1].limit = 0;
      B_Star[1].F[1].limit = 0;
    }
    if(A_ANGEL.medium) {
      e_index = 2;
      if(s_index == 0)
        s_index = 2;
      B_Star[2].F[2].limit = A_ANGEL.F[1].w;
      B_Star[1].F[2].limit = A_ANGEL.F[1].w;
    }
    else {
      B_Star[2].F[2].limit = 0;
      B_Star[1].F[2].limit = 0;
    }
    if(A_ANGEL.big) {
      e_index = 3;
      if(s_index == 0)
        s_index = 3;
      B_Star[2].F[3].limit = A_ANGEL.F[2].w;
      B_Star[1].F[3].limit = A_ANGEL.F[2].w;
    }
    else {
      B_Star[2].F[3].limit = 0;
      B_Star[1].F[3].limit = 0;
    }
    if(A_ANGEL.huge) {
      e_index = 4;
      if(s_index == 0)
        s_index = 4;
      B_Star[2].F[4].limit = A_ANGEL.F[3].w;
      B_Star[1].F[4].limit = A_ANGEL.F[3].w;
    }
    else {
      B_Star[2].F[4].limit = 0;
      B_Star[1].F[4].limit = 0;
    }
  }
  else {
    if(A_ANGEL.small) {
      e_index = 1;
      s_index = 1;
      B_Star[0].F[1].limit = A_ANGEL.F[0].w;
      B_Star[3].F[1].limit = A_ANGEL.F[0].w;
    }
    else {
      B_Star[0].F[1].limit = 0;
      B_Star[3].F[1].limit = 0;
    }
    if(A_ANGEL.medium) {
      e_index = 2;
      if(s_index == 0)
        s_index = 2;
      B_Star[0].F[2].limit = A_ANGEL.F[1].w;
      B_Star[3].F[2].limit = A_ANGEL.F[1].w;
    }
    else {
      B_Star[0].F[2].limit = 0;
      B_Star[3].F[2].limit = 0;
    }
    if(A_ANGEL.big) {
      e_index = 3;
      if(s_index == 0)
        s_index = 3;
      B_Star[0].F[3].limit = A_ANGEL.F[2].w;
      B_Star[3].F[3].limit = A_ANGEL.F[2].w;
    }
    else {
      B_Star[0].F[3].limit = 0;
      B_Star[3].F[3].limit = 0;
    }
    if(A_ANGEL.huge) {
      e_index = 4;
      if(s_index == 0)
        s_index = 4;
      B_Star[0].F[4].limit = A_ANGEL.F[3].w;
      B_Star[3].F[4].limit = A_ANGEL.F[3].w;
    }
    else {
      B_Star[0].F[4].limit = 0;
      B_Star[3].F[4].limit = 0;
    }
  }
}
void final_rules()
{
  if(AB[0].small && AB[1].small && AB[2].small){
    // OUTPUT SMALL
    B_FinalStar[0].F[0].w = min(min(AB[0].F[0].w, AB[1].F[0].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[0].F[dlt].limit = 0;
    }
  }
  if(AB[0].small && AB[1].small && AB[2].medium){
    // OUTPUT MEDIUM
    B_FinalStar[1].F[1].w = min(min(AB[0].F[0].w, AB[1].F[0].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[1].F[dlt].limit = 0;
    }
  }
  if(AB[0].small && AB[1].small && AB[2].big){
    // OUTPUT MEDIUM
    B_FinalStar[2].F[1].w = min(min(AB[0].F[0].w, AB[1].F[0].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[2].F[dlt].limit = 0;
    }
  }
  if(AB[0].small && AB[1].small && AB[2].huge){
    // OUTPUT BIG
    B_FinalStar[3].F[2].w = min(min(AB[0].F[0].w, AB[1].F[0].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[3].F[dlt].limit = 0;
    }
  }
  /////////////////////////////////////////////////////
  if(AB[0].small && AB[1].medium && AB[2].small){
    // OUTPUT MEDIUM
    B_FinalStar[4].F[1].w = min(min(AB[0].F[0].w, AB[1].F[1].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[4].F[dlt].limit = 0;
    }
  }
  if(AB[0].small && AB[1].medium && AB[2].medium){
    // OUTPUT MEDIUM
    B_FinalStar[5].F[1].w = min(min(AB[0].F[0].w, AB[1].F[1].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[5].F[dlt].limit = 0;
    }
  }
  if(AB[0].small && AB[1].medium && AB[2].big){
    // OUTPUT BIG
    B_FinalStar[6].F[2].w = min(min(AB[0].F[0].w, AB[1].F[1].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[6].F[dlt].limit = 0;
    }
  }
  if(AB[0].small && AB[1].medium && AB[2].huge){
    // OUTPUT BIG
    B_FinalStar[7].F[2].w = min(min(AB[0].F[0].w, AB[1].F[1].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[7].F[dlt].limit = 0;
    }
  }
  ////////////////////////////////////////////////////////
  if(AB[0].small && AB[1].big && AB[2].small){
    // OUTPUT MEDIUM
    B_FinalStar[8].F[1].w = min(min(AB[0].F[0].w, AB[1].F[2].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[8].F[dlt].limit = 0;
    }
  }
  if(AB[0].small && AB[1].big && AB[2].medium){
    // OUTPUT BIG
    B_FinalStar[9].F[2].w = min(min(AB[0].F[0].w, AB[1].F[2].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[9].F[dlt].limit = 0;
    }
  }
  if(AB[0].small && AB[1].big && AB[2].big){
    // OUTPUT BIG
    B_FinalStar[10].F[2].w = min(min(AB[0].F[0].w, AB[1].F[2].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[10].F[dlt].limit = 0;
    }
  }
  if(AB[0].small && AB[1].big && AB[2].huge){
    //OUTPUT BIG
    B_FinalStar[11].F[2].w = min(min(AB[0].F[0].w, AB[1].F[2].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[11].F[dlt].limit = 0;
    }
  }
  //////////////////////////////////////////////////////////
  if(AB[0].small && AB[1].huge && AB[2].small){
    // OUTPUT BIG
    B_FinalStar[12].F[2].w = min(min(AB[0].F[0].w, AB[1].F[3].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[12].F[dlt].limit = 0;
    }
  }
  if(AB[0].small && AB[1].huge && AB[2].medium){
    // OUTPUT HUGE
    B_FinalStar[13].F[3].w = min(min(AB[0].F[0].w, AB[1].F[3].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[13].F[dlt].limit = 0;
    }
  }
  if(AB[0].small && AB[1].huge && AB[2].big){
    // OUTPUT HUGE
    B_FinalStar[14].F[3].w = min(min(AB[0].F[0].w, AB[1].F[3].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[14].F[dlt].limit = 0;
    }
  }
  if(AB[0].small && AB[1].huge && AB[2].huge){
    // OUTPUT HUGE
    B_FinalStar[15].F[3].w = min(min(AB[0].F[0].w, AB[1].F[3].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[15].F[dlt].limit = 0;
    }
  }
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if(AB[0].medium && AB[1].small && AB[2].small){
    // OUTPUT MEDIUM
    B_FinalStar[16].F[1].w = min(min(AB[0].F[1].w, AB[1].F[0].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[16].F[dlt].limit = 0;
    }
  }
  if(AB[0].medium && AB[1].small && AB[2].medium){
    // OUTPUT MEDIUM
    B_FinalStar[17].F[1].w = min(min(AB[0].F[1].w, AB[1].F[0].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[17].F[dlt].limit = 0;
    }
  }
  if(AB[0].medium && AB[1].small && AB[2].big){
    // OUTPUT MEDIUM
    B_FinalStar[18].F[1].w = min(min(AB[0].F[1].w, AB[1].F[0].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[18].F[dlt].limit = 0;
    }
  }
  if(AB[0].medium && AB[1].small && AB[2].huge){
    // OUTPUT BIG
    B_FinalStar[19].F[2].w = min(min(AB[0].F[1].w, AB[1].F[0].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[19].F[dlt].limit = 0;
    }
  }
  /////////////////////////////////////////////////////
  if(AB[0].medium && AB[1].medium && AB[2].small){
    // OUTPUT MEDIUM
    B_FinalStar[20].F[1].w = min(min(AB[0].F[1].w, AB[1].F[1].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[20].F[dlt].limit = 0;
    }
  }
  if(AB[0].medium && AB[1].medium && AB[2].medium){
    // OUTPUT MEDIUM
    B_FinalStar[21].F[1].w = min(min(AB[0].F[1].w, AB[1].F[1].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[21].F[dlt].limit = 0;
    }
  }
  if(AB[0].medium && AB[1].medium && AB[2].big){
   // OUTPUT MEDIUM 
   B_FinalStar[63].F[1].w = min(min(AB[0].F[1].w, AB[1].F[1].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[63].F[dlt].limit = 0;
    }
  }
  if(AB[0].medium && AB[1].medium && AB[2].huge){
    // OUTPUT BIG
    B_FinalStar[22].F[2].w = min(min(AB[0].F[1].w, AB[1].F[1].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[22].F[dlt].limit = 0;
    }
  }
  ////////////////////////////////////////////////////////
  if(AB[0].medium && AB[1].big && AB[2].small){
    // OUTPUT MEDIUM
    B_FinalStar[23].F[1].w = min(min(AB[0].F[1].w, AB[1].F[2].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[23].F[dlt].limit = 0;
    }
  }
  if(AB[0].medium && AB[1].big && AB[2].medium){
    // OUTPUT MEDIUM
    B_FinalStar[24].F[1].w = min(min(AB[0].F[1].w, AB[1].F[2].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[24].F[dlt].limit = 0;
    }
  }
  if(AB[0].medium && AB[1].big && AB[2].big){
    // OUTPUT BIG
    B_FinalStar[25].F[2].w = min(min(AB[0].F[1].w, AB[1].F[2].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[25].F[dlt].limit = 0;
    }
  }
  if(AB[0].medium && AB[1].big && AB[2].huge){
    // OUTPUT BIG
    B_FinalStar[26].F[2].w = min(min(AB[0].F[1].w, AB[1].F[1].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[26].F[dlt].limit = 0;
    }
  }
  //////////////////////////////////////////////////////////
  if(AB[0].medium && AB[1].huge && AB[2].small){
    // OUTPUT BIG
    B_FinalStar[27].F[2].w = min(min(AB[0].F[1].w, AB[1].F[3].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[27].F[dlt].limit = 0;
    }
  }
  if(AB[0].medium && AB[1].huge && AB[2].medium){
    // OUTPUT BIG
    B_FinalStar[28].F[2].w = min(min(AB[0].F[1].w, AB[1].F[3].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[28].F[dlt].limit = 0;
    }
  }
  if(AB[0].medium && AB[1].huge && AB[2].big){
    // OUTPUT HUGE
    B_FinalStar[29].F[3].w = min(min(AB[0].F[1].w, AB[1].F[3].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[29].F[dlt].limit = 0;
    }
  }
  if(AB[0].medium && AB[1].huge && AB[2].huge){
      // OUTPUT HUGE
      B_FinalStar[30].F[3].w = min(min(AB[0].F[1].w, AB[1].F[3].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[30].F[dlt].limit = 0;
    }
  }
  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if(AB[0].big && AB[1].small && AB[2].small){
    // OUTPUT BIG
    B_FinalStar[31].F[2].w = min(min(AB[0].F[1].w, AB[1].F[0].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[31].F[dlt].limit = 0;
    }
  }
  if(AB[0].big && AB[1].small && AB[2].medium){
    // OUTPUT BIG
    B_FinalStar[32].F[2].w = min(min(AB[0].F[2].w, AB[1].F[0].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[32].F[dlt].limit = 0;
    }
  }
  if(AB[0].big && AB[1].small && AB[2].big){
      // OUTPUT BIG
      B_FinalStar[33].F[2].w = min(min(AB[0].F[2].w, AB[1].F[0].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[33].F[dlt].limit = 0;
    }
  }
  if(AB[0].big && AB[1].small && AB[2].huge){
    // OUTPUT BIG
    B_FinalStar[34].F[2].w = min(min(AB[0].F[2].w, AB[1].F[0].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[34].F[dlt].limit = 0;
    }
  }
  /////////////////////////////////////////////////////
  if(AB[0].big && AB[1].medium && AB[2].small){
    // OUTPUT BIG
    B_FinalStar[35].F[2].w = min(min(AB[0].F[2].w, AB[1].F[1].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[35].F[dlt].limit = 0;
    }
  }
  if(AB[0].big && AB[1].medium && AB[2].medium){
    // OUTPUT BIG
    B_FinalStar[36].F[2].w = min(min(AB[0].F[2].w, AB[1].F[1].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[36].F[dlt].limit = 0;
    }
  }
  if(AB[0].big && AB[1].medium && AB[2].big){
    // OUTPUT BIG
    B_FinalStar[37].F[2].w = min(min(AB[0].F[2].w, AB[1].F[1].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[37].F[dlt].limit = 0;
    }
  }
  if(AB[0].big && AB[1].medium && AB[2].huge){
    // OUTPUT BIG
    B_FinalStar[38].F[2].w = min(min(AB[0].F[2].w, AB[1].F[1].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[38].F[dlt].limit = 0;
    }
  }
  ////////////////////////////////////////////////////////
  if(AB[0].big && AB[1].big && AB[2].small){
    // OUTPUT BIG
    B_FinalStar[39].F[2].w = min(min(AB[0].F[2].w, AB[1].F[2].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[39].F[dlt].limit = 0;
    }
  }
  if(AB[0].big && AB[1].big && AB[2].medium){
    // OUTPUT BIG
    B_FinalStar[40].F[2].w = min(min(AB[0].F[2].w, AB[1].F[2].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[40].F[dlt].limit = 0;
    }
  }
  if(AB[0].big && AB[1].big && AB[2].big){
    // OUTPUT BIG
    B_FinalStar[41].F[2].w = min(min(AB[0].F[2].w, AB[1].F[2].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[41].F[dlt].limit = 0;
    }
  }
  if(AB[0].big && AB[1].big && AB[2].huge){
    // OUTPUT BIG
    B_FinalStar[42].F[2].w = min(min(AB[0].F[2].w, AB[1].F[2].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[42].F[dlt].limit = 0;
    }
  }
  //////////////////////////////////////////////////////////
  if(AB[0].big && AB[1].huge && AB[2].small){
    // OUTPUT BIG
    B_FinalStar[43].F[2].w = min(min(AB[0].F[2].w, AB[1].F[3].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[43].F[dlt].limit = 0;
    }
  }
  if(AB[0].big && AB[1].huge && AB[2].medium){
    // OUTPUT BIG
    B_FinalStar[44].F[2].w = min(min(AB[0].F[2].w, AB[1].F[3].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[44].F[dlt].limit = 0;
    }
  }
  if(AB[0].big && AB[1].huge && AB[2].big){
    // OUTPUT BIG
    B_FinalStar[45].F[2].w = min(min(AB[0].F[2].w, AB[1].F[3].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[45].F[dlt].limit = 0;
    }
  }
  if(AB[0].big && AB[1].huge && AB[2].huge){
    // OUTPUT HUGE
    B_FinalStar[46].F[3].w = min(min(AB[0].F[2].w, AB[1].F[3].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[46].F[dlt].limit = 0;
    }
  }
  //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if(AB[0].huge && AB[1].small && AB[2].small){
    // OUTPUT BIG
    B_FinalStar[47].F[2].w = min(min(AB[0].F[3].w, AB[1].F[0].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[47].F[dlt].limit = 0;
    }
  }
  if(AB[0].huge && AB[1].small && AB[2].medium){
    // OUTPUT BIG
    B_FinalStar[48].F[2].w = min(min(AB[0].F[3].w, AB[1].F[0].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[48].F[dlt].limit = 0;
    }
  }
  if(AB[0].huge && AB[1].small && AB[2].big){
    // OUTPUT HUGE
    B_FinalStar[49].F[3].w = min(min(AB[0].F[3].w, AB[1].F[0].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[49].F[dlt].limit = 0;
    }
  }
  if(AB[0].huge && AB[1].small && AB[2].huge){
    // OUTPUT HUGE
    B_FinalStar[50].F[3].w = min(min(AB[0].F[3].w, AB[1].F[0].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[50].F[dlt].limit = 0;
    }
  }
  /////////////////////////////////////////////////////
  if(AB[0].huge && AB[1].medium && AB[2].small){
    // OUTPUT HUGE
    B_FinalStar[51].F[3].w = min(min(AB[0].F[3].w, AB[1].F[1].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[51].F[dlt].limit = 0;
    }
  }
  if(AB[0].huge && AB[1].medium && AB[2].medium){
    // OUTPUT HUGE
    B_FinalStar[52].F[3].w = min(min(AB[0].F[3].w, AB[1].F[1].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[52].F[dlt].limit = 0;
    }
  }
  if(AB[0].huge && AB[1].medium && AB[2].big){
      // OUTPUT HUGE  
      B_FinalStar[53].F[3].w = min(min(AB[0].F[3].w, AB[1].F[1].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[53].F[dlt].limit = 0;
    }
  }
  if(AB[0].huge && AB[1].medium && AB[2].huge){
     // OUTPUT HUGE   
     B_FinalStar[54].F[3].w = min(min(AB[0].F[3].w, AB[1].F[1].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[54].F[dlt].limit = 0;
    }
  }
  ////////////////////////////////////////////////////////
  if(AB[0].huge && AB[1].big && AB[2].small){
    // OUTPUT HUGE
    B_FinalStar[55].F[3].w = min(min(AB[0].F[3].w, AB[1].F[2].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[55].F[dlt].limit = 0;
    }
  }
  if(AB[0].huge && AB[1].big && AB[2].medium){
    // OUTPUT HUGE
    B_FinalStar[56].F[3].w = min(min(AB[0].F[3].w, AB[1].F[2].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[56].F[dlt].limit = 0;
    }
  }
  if(AB[0].huge && AB[1].big && AB[2].big){
  // OUTPUT HUGE  
  B_FinalStar[57].F[3].w = min(min(AB[0].F[3].w, AB[1].F[2].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[57].F[dlt].limit = 0;
    }
  }
  if(AB[0].huge && AB[1].big && AB[2].huge){
    // OUTPUT HUGE
    B_FinalStar[58].F[3].w = min(min(AB[0].F[3].w, AB[1].F[2].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[58].F[dlt].limit = 0;
    }
  }
  //////////////////////////////////////////////////////////
  if(AB[0].huge && AB[1].huge && AB[2].small){
    // OUTPUT HUGE
    B_FinalStar[59].F[3].w = min(min(AB[0].F[3].w, AB[1].F[3].w), AB[2].F[0].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[59].F[dlt].limit = 0;
    }
  }
  if(AB[0].huge && AB[1].huge && AB[2].medium){
    // OUTPUT HUGE
    B_FinalStar[60].F[3].w = min(min(AB[0].F[3].w, AB[1].F[3].w), AB[2].F[1].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[60].F[dlt].limit = 0;
    }
  }
  if(AB[0].huge && AB[1].huge && AB[2].big){
    // OUTPUT HUGE 
    B_FinalStar[61].F[3].w = min(min(AB[0].F[3].w, AB[1].F[3].w), AB[2].F[2].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[61].F[dlt].limit = 0;
    }
  }
  if(AB[0].huge && AB[1].huge && AB[2].huge){
    // OUTPUT HUGE
    B_FinalStar[62].F[3].w = min(min(AB[0].F[3].w, AB[1].F[3].w), AB[2].F[3].w);
  }
  else {
    for(int dlt = 0; dlt < 4; dlt++) {
      B_FinalStar[62].F[dlt].limit = 0;
    }
  }
}