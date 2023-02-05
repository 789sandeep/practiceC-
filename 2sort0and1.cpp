// Sort an Array consisting of only 0s and 1s.
#include <iostream>
#include <vector>
using namespace std;
void sortElement(vector<int>&v){
    int size=v.size();
    int l = 0;
    int r = size - 1;
    // while (l < r)
    // { 
    //     if (v[l] == 1 && v[r] == 0)
    //     { 
    //         v[l++] = 0;
    //         v[r--] = 1;
    //     }
    //     if(v[l]==0){
    //         l++;
    //     }
    //     if(v[r]==1){
    //         r--;
    //     }
    // }
        while (l < r)
    { 
        if (v[l]%2 == 1 && v[r]%2 == 1)
        { 
            r--;
        }
        if(v[l]%2==1 && v[r]%2 == 0){
           swap( v[l++], v[r++]);
        }
        if(v[l]%2==0){
             l++;
        }
        if(v[r]%2==1){
            r--;
        }
    }
 return;
}
int main()
{
    int user;
    cin>>user;
    vector<int>v;
    for(int i=0; i<user; i++){
        int elem;
        cout<<"enter element:";
        cin>>elem;
        v.push_back(elem);
    }
    sortElement(v);
    for(int i=0 ;i<v.size(); i++){
        cout<<v[i];
    }
    cout<<endl;
    return 0;
}
