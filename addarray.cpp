#include<iostream>
using namespace std;
int main(){
    int a[]={2,4,3};
    int size=sizeof(a)/sizeof(a[0]);//3
    int b[]={5,6,4};
    int size1=sizeof(b)/sizeof(b[0]);
    int temp;
    int a1[size+size1];
    int k=size-1;
    for(int i = 0; i<size1/2; i++){//i=2
        temp = b[i];//2
        b[i] = b[size1-i-1];//2
        b[size1-i-1] = temp;//2
    }  
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";//2 4 3
    }
    cout<<endl;
    for(int i=0; i<size1; i++){
        cout<<b[i]<<" ";//4 6 5
    }
    cout<<endl;
int i=size-1;
int j=size1-1;
 while (i>=0 && j>=0)
 {
     a1[k]=a[i]+b[j];
     k--;
     i--;
     j--;  
 }
 for(int i=0; i<size; i++){
    cout<<a1[i]<<" ";
 }
    return 0;

}