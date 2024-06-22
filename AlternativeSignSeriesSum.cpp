#include<iostream>
#include<cmath>
using namespace std;

//1-2+3-4+5-6+7-8+......+n
int Sum1(int n){
int sum=0;
    // for(int i=1;i<=n;i++){
    //   sum+=(pow(-1,i+1)*i);
    // }
    if(n%2==0){
        sum=(-n/2);
    }
    else {
        sum=(n+1)/2;
    }

    return sum;
}

int Sum2(int n){
    if(n==1) return 1;
    // if(n%2==0){
    //     return (-n)+Sum2(n-1);
    // }
    // else {
    //       return (n)+Sum2(n-1);
    // }
    return ((n%2==0)?-n:n)+Sum2(n-1);
}

int main() {
    cout<<Sum2(10)<<endl;
    return 0;
}