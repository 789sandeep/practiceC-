#include<iostream>
#include<vector>
using namespace std;
int maximumOneInRow(vector<vector<int>> &v){
    int maximum=-1;
    int rowindex=-1;
    int column=v[0].size();
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            if(v[i][j]==1){
                int onesInMaximum=column-j;
                if(onesInMaximum>maximum){
                       rowindex=i;
                }
            }
        }
    }
    return rowindex;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }
    int result=maximumOneInRow(v);
    cout<<result;
}