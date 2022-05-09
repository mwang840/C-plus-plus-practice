#include <iostream>
#include <math.h>
using namespace std;
int totalDigits(int value){
  if(value == 0){
    return 0;
  }
  else{
    return 1 + totalDigits(value / 10);
  }
}

bool narcissistic( int value ){
  int l = totalDigits(value);
  int duplicate = value;
  int sum = 0;
  
  
  while(duplicate){
    sum+=pow(duplicate % 10, l);
    duplicate /= 10;
  }
  
  return (value == sum);
}
