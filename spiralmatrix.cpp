#include <iostream>
#include <vector>
using namespace std;
// input
//1 2 3
//4 5 6
//7 8 9

// first
//         l   r
// top->   1 2 3
//         4 5 6
// bottom->7 8 9

// top=0 row=2
// right=2
// ans=1 2 3

// second
//         l   r
// top->   4 5 6
// bottom->7 8 9
// ans=6 9

// third
//         l  r
// top->   4 5
// bottom->7 8
// r=0 top=1 bottom=1
void spiralMatrix(vector<vector<int>> &vec)
{
    int left = 0; // 1
    int right = vec[0].size() - 1;//1
    int top = 0; // 1
    int bottom = vec.size() - 1;//1
    int direction = 0; // 1 2 3 4
    while (left <= right && top <= bottom)
    {
        if (direction == 0)
        {
            for (int col = left; col <= right; col++)
            {
                cout << vec[top][col] << " "; //1 2 3
            }
             cout<<endl;
            top++;
        }
        else if (direction == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
                cout << vec[row][right] << " "; // 6 9
            }
            cout<<endl;
            right--;
        }
        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                cout << vec[bottom][col] << " "; // 8 7
            }
             cout<<endl;
            bottom--;
        }
        else
        {
            for (int row = bottom; row >= top; row--)
            {
                cout << vec[row][left] << " ";// 4 5
            }
             cout<<endl;
            left++;
        }
        direction = (direction + 1) % 4;
    }
    
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }
      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    spiralMatrix(vec);
   
}