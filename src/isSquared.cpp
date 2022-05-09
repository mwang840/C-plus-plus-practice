#include <math.h>
bool is_square(int n)
{
  int squared = sqrt(n);
  return squared * squared == n;
}
