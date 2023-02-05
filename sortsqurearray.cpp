#include <iostream>
#include <vector>
using namespace std;
void sortSquareArray(vector<int> &v)
{
    vector<int> ans;
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    while (left_ptr <= right_ptr)
    {
        if (abs(v[left_ptr]) > abs(v[right_ptr]))
        {
            ans.push_back(v[left_ptr] * v[left_ptr]);
            left_ptr++;
        }
        else
        {
             ans.push_back(v[right_ptr] * v[right_ptr]);
            right_ptr--;
        }
    }
   
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<" ";
    }
    cout << endl;
    return;
}
int main()
{
    int user;
    cin >> user; //-10,-3,2,4
    vector<int> v;
    for (int i = 0; i < user; i++)
    {
        int elem;
        cout << "enter the value:";
        cin >> elem;
        v.push_back(elem);
    }
    sortSquareArray(v);
    return 0;
}