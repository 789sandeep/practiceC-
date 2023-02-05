#include <iostream>
using namespace std;
int main()
{

  for (int i = 1; i <= 4; i++)
  {
    for (int s = i; s <= 4 - 1; s++)
    {
      cout<<" ";
    }
    for (int j = 1; j <= i ; j++)
    {
      cout<<j;
    }
     for(int s=i-1; s>0; s--){
         cout<<s;
  }
    cout << endl;
  }

  return 0;
}