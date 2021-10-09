#include <iostream>
#include <string.h>
using namespace std;

main()
{
  int i,n,j,index;
  string userstr,alphabets;
  char temp = '\u0000';

  cout <<"";
  cin >> n; // Enter 6;
  cin >> userstr; // Enter BYE;
  int l = userstr.length();

  for(i=65;i<=90;i++) // Using a loop to initialize string with 26 alphabets.
  {
    temp = i;
    alphabets += temp;
  }

  for(i=1;i<=l;i++) // Involves string BYE;
  {
      temp = userstr[i-1]; // B,Y,E;
      for(j=1;j<=i;j++)
      {
        if(temp == 'Z')
        {
          temp = 'A';
        }
        else
        {
          temp++;
        }
        userstr[i-1] = temp;
      }
  }
  cout << userstr << endl;

  for(i=0;i<l;i++) // Try for CAH;
  {
    temp = userstr[i]; //C,A,H;
    index = alphabets.find(temp) + 1; // 3,1,8;
    index *= n; // 3*6 = 18, 1*6 = 6, 8*6 = 48;

    if(index > 26) // Only evaluates when index = 48;
    {
      index -=26; // 48-26 = 22;
    }

    temp = alphabets[index - 1]; //
    userstr[i] = temp;
  }
  cout << userstr; // Will return RFV;
}
