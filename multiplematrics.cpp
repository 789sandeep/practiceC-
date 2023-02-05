#include<iostream>
using namespace std;
int main(){
    int r1,col1;
    cin>>r1>>col1;
    int array1[r1][col1];
    for(int i=0; i<r1; i++){
        for(int j=0; j<col1; j++){
            cin>>array1[i][j];
        }
    }
     int r2,col2;
    cin>>r2>>col2;
    int array2[r2][col2];
    for(int k=0; k<r2; k++){
        for(int l=0; l<col2; l++){
            cin>>array2[k][l];
        }
    }
   if(col1!=r2){
    cout<<"multiplication is not possible";
   }
   int C[r1][col2];
   for(int i=0; i<r1; i++){
    for(int j=0; j<col2; j++){
        int value=0;
        for(int k=0; k<r2; k++){
            value=value+array1[i][k]*array2[k][j];
        }  
     C[i][j]=value;
    }
   }
   for(int i=0; i<r1; i++){
    for(int j=0; j<r2; j++){
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}