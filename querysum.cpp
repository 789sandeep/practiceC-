#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int user;
    cin >> user;                    // 5
    vector<int> v(user + 1, 0);     // 6
    for (int i = 1; i <= user; i++) // 1,2,3,4,5
    {
        // 1 2  3  4  5  6
        // 0 1  2  3  4  5
        // 0 5  3  2  1  4
        cin >> v[i];
    }

    // int prefix_sum = 0;
    for (int i = 1; i <= user; i++)
    {
        // 0 1 2  3  4  5
        // 0 5,8,10,11,15
        v[i] = v[i] + v[i-1]; 
    }
    int ans = 0;
    int q;
    cin >> q; //
    while (q--)
    {
        int user1; // 4
        cout << "enter first number";
        cin >> user1;
        int user2; // 2
        cout << "enter second number";
        cin >> user2;
        // 0 1  2  3  4  5
        // 0 5  8  10 11 15
        ans = v[user1] - v[user2 - 1]; // ans=11-5=6
        cout << ans;//=6
    }
   

    return 0;
}