#include <math.h>
#include <iostream>
#include <windows.h>
using namespace std;
namespace Triangle
{
  bool isTriangle(double a, double b, double c)
  {
    
    if((a > 0) && (b > 0) && (c > 0)){
      if(a == b && b == c){
        
        return true;
      }
      
     else if((a + b) <= c || (a + c) <= b || (b + c) <= a){
       return false;
      }
      else{
        
        return true;
      }
    }
    else{
      return false;
    }
    
  }
  int main(){
    int h1, h2, h3;
    bool pointed;
    std::cout << "Enter three heights\n";
    cin>>h1;
    std::cout<<"\n";
    cin>>h2;
    std::cout<<"\n";
    cin>>h3;
    std::cout<<"\n";
    pointed = isTriangle(h1, h2, h3);
    std::cout << pointed<< "The triangle is, " <<" a triangle" || "not a triangle ";
}

};