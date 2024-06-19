#include<iostream>
using namespace std;


int evenDigits(int n){
    int result=0;
    int multi=1;

    while(n!=0){
        if((n%10)%2==0){
           result+=(n%10)*multi;  //imp math trick
           multi*=10;
        }
        n/=10;
    }
    return result;
}

int main() {
    cout<<evenDigits(8342116)<<endl;
    return 0;
}