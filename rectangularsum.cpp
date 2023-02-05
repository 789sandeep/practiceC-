#include<iostream>
#include<vector>
using namespace std;
int sumOfRectangleInMatrix(vector<vector<int>>&mat,int c1, int c2, int r1, int r2){
    int sum=0;
    for(int i=r1; i<=r2; i++){
        for(int j=c1; j<=c2; j++)
        sum+=mat[i][j];
    }
    return sum;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    int c1,c2,r1,r2;
    cin>>r1>>r2>>c1>>c2;
    int sum=sumOfRectangleInMatrix(mat,c1,c2,r1,r2);
    cout<<sum;
}