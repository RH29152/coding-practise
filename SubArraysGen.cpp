#include<iostream>
#include<vector> 
using namespace std;
void print(vector<int>& v){
    if(v.empty()) return;
    cout<<"[ ";
    for(auto& i:v){
        cout<<i<<" ";
    }
    cout<<"], ";
}

//Recursively Generating Subarrays
void Subarrays(vector<int> &v,vector<int>& ans,int n,int i=0){
    if(i>=n){print(ans); return;}

if(ans.empty()){   
    ans.push_back(v[i]);
    Subarrays(v,ans,n,i+1);
    ans.pop_back();
     Subarrays(v,ans,n,i+1);}
 else {
        ans.push_back(v[i]);
       Subarrays(v,ans,n,i+1);
       ans.pop_back();
       Subarrays(v,ans,n,i+n); //when we skiped an element after having element 12 and skiped 3 then it will pick 124 which is not subaaray so i am adding +n so that 12 should be printed and this call should be ended

     }
} 


//Itteratively generating subaarays

void print2(vector<int>& v,int i,int j){
    if(v.empty()) return;
    cout<<"[ ";
    for(int k=i;k<=j;k++){
        cout<<v[k]<<" ";
    }
    cout<<"], ";
}
void Subarrays2(vector<int> &v,vector<int>& ans,int n,int i=0){

for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        print2(v,i,j);
    }
}
}
int main() {
     vector<int> v={1,2,3,4};
     vector<int> ans;
     Subarrays2(v,ans,4,0);
    return 0;
}
