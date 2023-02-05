#include <iostream>
using namespace std;
int main()
{
    int r1=2, c1=3;
    // cin >> r1 >> c1;
    int array[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    int transpos[c1][r1];
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            transpos[i][j] = array[j][i];
        }
    }
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            cout << transpos[i][j] << " ";
        }
        cout << endl;
    }
}