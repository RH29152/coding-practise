#include<iostream>
using namespace std;

//e^x
//Memoization recursive solution solution with O(n)

double e1(double x,int n,int i=1 ,double fac=1,double p=1){
    if(i>n){ return 0.0;}

    return ((double)p/fac)+(e1(x,n,i+1,fac*i,p*x));
}

//Memorization Itterative solution solution with O(n)

double e2(double x,int n){
    double result=0.0;
    int i=1;
    double fac=1;
    double p=1;

    while(i<=n){
     result+=(p/fac);
     p*=x;
     fac*=i;
     i++;
    }

    return result; 
}



//Itterating Solution Using Horners RUle

double e3(double x,int n){
    double r=1;
    while(n>0){
      r=(1+(((double)x/n)*r));
      n--;
    }

    return r;
}

//Recursive Solution Using Horners RUle

double e4(double x,int n,double r=1){
    if(n==0){ return r;}

      r=(1+(((double)x/n)*r));
      
      return e4(x,n-1,r);
    }

int main() {
    
    cout<<e1(2,10)<<endl;
    // cout<<e1(-2,15)<<endl;
    cout<<e2(2,10)<<endl;
    cout<<e3(2,10)<<endl;
    cout<<e4(2,10)<<endl;
    return 0;
}