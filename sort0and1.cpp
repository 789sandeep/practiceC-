#include <iostream>
#include <vector>
using namespace std;
void sortElement(vector<int> &v)
{
    int zeros_count = 0;
    for (int ele : v)
    {
        if (ele == 0)
        {
            zeros_count++;
        }
    }
    // int a=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i < zeros_count)
        {
              v[i] = 0;
        }
        else
        {
              v[i] = 1;
        }
    }
}
int main()
{
    int user;
    cin >> user;
    vector<int> v;
    for (int i = 0; i < user; i++)
    {
        int elem;
        cout << "enter 0 and :" << endl;
        cin >> elem;
        v.push_back(elem);
    }
   sortElement(v);
    for(int i=0; i<v.size(); i++){
               cout<<v[i];
    } 
    cout<<endl;
     
    return 0;
}