#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
string likes(vector<string> names)
{
    string liked = " ";
    if(names.size() == 0){
      liked = "no one likes this";
    }
  else if(names.size() == 1){
    liked = names [0] + " likes this";
  }
  else if(names.size()== 2){
    liked = names[0] + " and " + names[1] + " like this";
  }
  else if(names.size() == 3){
    liked = names[0] + ", " + names[1] + " and " + names[2] + " like this";
  }
  else if(names.size() > 3){
    liked = names[0] + ", " + names[1] + " and " +  to_string((int)names.size() - 2) + " others like this";
  }
  return liked;
}

