#include<iostream>
#include<vector>
using namespace std; 
void prefixSumArray(vector<int>v){
          int previous_value=0;
          int size=v.size();
          for(int i=0; i<size; i++){
                  previous_value=v[i]+previous_value;
                  cout<<previous_value<<" ";
          }
          return;
}
int main(){
    int user;
    cin>>user;
    vector<int>v;
    for(int i=0; i<user; i++){
        int elem;
        cout<<"enter the element:";
        cin>>elem;
        v.push_back(elem);
    }
    prefixSumArray(v);
}
