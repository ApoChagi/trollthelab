#include <iostream>
#include "processor.hpp"

processor::processor(){
  for(int i=0; i<10; i++){info[i]=0;}
  mean=0; count=0;dthres=60;
}
void processor::newinfo(int x){
  if(count>=10){
    for(int i=0; i<10; i++){info[i]=info[i+1];}
  }
  info[count++]=x;
  mean=((mean*(count-1)+x))/count;
  return;
}
double processor::getmean(){
  //double res=0;
  //for(int i=0; i<count; i++)res+=info[i];
  //return res/count;
  return mean;
}
bool processor::danger(){
  if(mean>dthres)return true;
  return false;
}
