#include<iostream>
using namespace std;


//**********Effiecient itterative sol with TC=logN******** */

int count1(int n){
    int count=0;

    while(n!=0){
        if(n%10==7) count++;
        n/=10;
    }
    return count;
}

//**********Effiecient recursive sol with TC=logN******** */

int count2(int n,int count=0){
    if(n==0) return count;
    if(n%10==7) count++;
    return count2(n/10,count); 
} 
int main() {
    cout<<count2(1272737)<<endl;
    return 0;
}