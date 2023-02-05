#include<iostream>
using namespace std;
int main(){
    int array[]={1,3,4,2,2,0,6,7,5};
    int b=9;
    int user;
    cin>>user;
    int pair=0;
    for(int i=0; i<b; i++){
        for(int j=i+1; j<b; j++){
            for(int k=j+1; k<b; k++){
                 if(array[i]+array[j]+array[k]==user){
                       pair++;
                 }
            }
        }
    }
    cout<<pair;
    return 0;

}