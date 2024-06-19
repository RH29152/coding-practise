#include<iostream>
using namespace std;

//This is not possible without variables
int evenDigits2(int n, int multi=1,int result=0){
    if(n==0) return result;
    if((n%10)%2==0){
           result+=(n%10)*multi;  //imp math trick
           multi*=10;
        }
    return evenDigits2(n/10,multi,result);
}

int main() {
    cout<<evenDigits2(834211621)<<endl;
    return 0;
}