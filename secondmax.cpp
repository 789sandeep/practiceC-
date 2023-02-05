#include<iostream>
using namespace std;
int largestElement(int array[],int size){
    int max=INT16_MIN;
    int maxindex=0;
    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}  
int main(){
    int array[]={1,2,3,4,5,14,6,7,7};
    int size=8;
    int largestElementIndex=largestElement(array,size);
    cout<<array[largestElementIndex]<<endl;
    // array[largestElementIndex]=-1;
    int element=array[largestElementIndex];
    for(int i=0; i<size; i++){
        if(array[i]==element){
            array[i]=-1;
        }
    }
    int secondLargestElementIndex=largestElement(array,size);
    cout<<array[secondLargestElementIndex];
    
}