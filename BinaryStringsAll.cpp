#include<iostream>
using namespace std;


void strings(int i,int n,string ans=""){
    if(i==n){ cout<<ans<<" "; return;}

    strings(i+1,n,ans+"1");
    strings(i+1,n,ans+"0");
}

int main() {
    strings(0,3);
    return 0;
}