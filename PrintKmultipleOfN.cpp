#include<iostream>
using namespace std;

void printMultiple(int n,int k){
    if(k==0){ return;}
    printMultiple(n,k-1);
    cout<<n*k<<" ";
}

int main() {
    printMultiple(3,8);
    return 0;
}