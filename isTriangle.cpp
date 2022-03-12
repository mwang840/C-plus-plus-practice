#include <math.h>
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
};
