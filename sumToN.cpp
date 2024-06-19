#include<iostream>
#include<cmath>
using namespace std;


//************Itterative solution****************** */
double Sumto(int n){
     double ans=0.0;

     for(int i=1;i<=n;i++){
        ans+=(1.0/i);
     }

     return ans;
}   
//************recursive  solution****************** */
double Sumto3(int n){
    if(n==1) return 1.0;
    return (1.0/n+Sumto3(n-1));
}     
int main() {
     
     cout<<Sumto3(3)<<endl;
    return 0;
}