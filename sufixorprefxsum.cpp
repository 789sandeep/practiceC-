#include<iostream>
#include<vector>
using namespace std;
//6 2 4 3 1
//i=1
//total_sum=16
//suufix_sum=8
//prefix_sum=8
bool sufixSumOrPrefixSum(vector<int> &v){
 int total_sum=0;
 for(int i=0; i<v.size(); i++){
    total_sum=v[i]+total_sum;
   
 }
  cout<<total_sum<<endl;
 int prefix_sum=0;
 for(int i=0; i<v.size(); i++){
        prefix_sum=v[i]+prefix_sum;
        cout<<prefix_sum<<" ";  
        int sufix_sum=total_sum-prefix_sum;
        if(sufix_sum==prefix_sum){
            return true;
        } 
 }
 cout<<endl; 
 return false;
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
    cout<<sufixSumOrPrefixSum(v);
}