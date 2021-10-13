#include <iostream>
// Divisor of two numbers/=.
#include <cstdlib>
using namespace std;
int main()
{
  int a,b,i,d;
  cout << "";
  cin >> a >> b;
  if(a % 2 == 0 && b % 2 != 0)
  {
    cout << 2;
  }
  else if(a % 3 == 0 && b % 3 != 0)
  {
    cout << 3;
  }
  else
  {
    for(i=4;i<max(a,b);i++)
    {
      if(i == 4)
      {
        d = a;
      }
      else if(a % i == 0 && b % i != 0)
      {
        if(i<d)
        {
          d = i;
        }
      }
    }
    cout << d;
  }
}
