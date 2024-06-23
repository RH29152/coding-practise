#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;


int MinCost(int *arr,int n,int i){
    
if(i==n-1){ return 0;}   // if frog is at last stone so it can't jump any more so its cost 0
if(i==n-2){ return MinCost(arr,n,i+1)+abs(arr[i]-arr[i+1]);}    //if frog is at 2nd last stone then it can move one step ahead
return min((MinCost(arr,n,i+1)+abs(arr[i]-arr[i+1])),(MinCost(arr,n,i+2)+abs(arr[i]-arr[i+2])));    //we need minimum cost we can also use below logic 
// int cost1=MinCost(arr,n,i+1)+abs(arr[i]-arr[i+1]);
// int cost2=MinCost(arr,n,i+2)+abs(arr[i]-arr[i+2]);
// return (cost1>cost2)?cost2:cost1;
} 

int main() {
    const int n=4;
    int arr[n]={10,30,40,20};
    cout<<MinCost(arr,n,0);
    return 0;
}