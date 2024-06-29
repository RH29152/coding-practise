#include<iostream>
#include<string>
#include<vector>
using namespace std;

void print(vector<string> ans){
    for(auto i:ans){
        cout<<i<<" ";
    }
}
void Solve(string s,vector<vector<string>> result,vector<string> ans,int n,int i=0){
    if(i==n){  print(ans); cout<<endl; return;}
    if(i>n){ return;}

    for(int j=0;j<n-i;j++){
         ans.push_back(s.substr(i,j+1));
         Solve(s,result,ans,n,i+(j+1));
         ans.pop_back();
    }
}


int main() {
    vector<vector<string>> result;
    vector<string> ans;

    Solve("abcdefgh",result,ans,8);
    return 0;
}