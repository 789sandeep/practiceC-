#include <iostream>
#include <vector>
using namespace std;
int rectangle(vector<vector<int>> &mat, int r1, int r2, int c1, int c2)
{
    int sum = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 1; j < mat[0].size(); j++)
        {
            mat[i][j] = mat[i][j - 1] + mat[i][j];
        }
    }
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 1; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    //     for(int i=r1; i<=r2; i++){
    //         if(c1!=0){
    //             sum=sum+mat[i][c2]-mat[i][c1-1];
    //         }
    //         else{
    //             sum=sum+mat[i][c2];
    //         }

    //     }
    //     cout<<sum;
    for (int i = 1; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            mat[i][j] = mat[i - 1][j] + mat[i][j];
        }
    }
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 1; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    int top_sum, bottom_sum, top_0 = 0;
    if (r1 != 0)
    {
        top_sum = mat[r1 - 1][c2];
    }
    if (c1 != 0)
    {
        bottom_sum = mat[r2][c1 - 1];
    }
    if (r1 != 0 && c1!=0)
    {
        top_0 = mat[r1 - 1][c1 - 1];
    }
    sum = mat[r2][c2] -top_sum -bottom_sum + top_0;
    cout << sum;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    int r1, r2, c1, c2;
    cin >> r1 >> r2 >> c1 >> c2;
    // int sum=0;
    // for(int i=0; i<n; i++){
    //     for(int j=1; j<m; j++){
    //             mat[i][j]=mat[i][j-1]+mat[i][j];
    // }
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=1; j<m; j++){
    //       cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=r1; i<=r2; i++){
    //     if(c1!=0){
    //         sum=sum+mat[i][c2]-mat[i][c1-1];
    //     }
    //     else{
    //         sum=sum+mat[i][c2];
    //     }

    // }

    // for(int i=0; i<n; i++){
    //         for(int j=1; j<m; j++){
    //                 mat[i][j]=mat[j][i]+mat[i][j-1];
    //     }
    //     }
    //     for(int i=0; i<n; i++){
    //         for(int j=1; j<m; j++){
    //           cout<<mat[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }

    // cout<<sum;
    rectangle(mat, r1, r2, c1, c2);
}