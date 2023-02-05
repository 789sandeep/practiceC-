#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=6-i; j++){
            cout<<j;
        }
        for(int str=i-1; str>0; str--){
            cout<<'*';
        }
         for(int str=i-1; str>0; str--){
            cout<<'*';
        }
        for(int f=5-i+1; f>0; f--){
            cout<<f;
        }
        cout<<endl;
    }
}