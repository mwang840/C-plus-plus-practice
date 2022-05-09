#include <math.h>
#include <iostream>
using namespace std;

bool isPrime(int num) {
  if(num == 1){
   return false;
  }
  int i = 2;
  //Loops from i = 2
  while(i*i <= num){
      if(num % i == 0){
          //N has a factor between 2 and sqrt n
          return false;
      }
      i++;
  }
    return true;
}