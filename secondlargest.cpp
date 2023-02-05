#include<iostream>
using namespace std;
int main(){
    int array[]={2,3,4,7,6,1,7};
    int size=7;
    int max=7;
    int secondMax=INT8_MIN;
    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
        }
        else if(array[i]>secondMax && array[i]!=max){
            secondMax=array[i];
        }
    }
    cout<<max<<endl;
    cout<<secondMax<<endl;
}