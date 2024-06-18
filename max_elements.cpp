#include<iostream>
#include<vector>
using namespace std;
int printMax(int *arr,int i,int n){
    if(i==n-1) return arr[i];
    // int ans=printMax(arr,i+1,n);
    // return ((arr[i]<ans)?arr[i]:ans);
    return max(arr[i],printMax(arr,i+1,n));
}
//2nd method without index:
int printMax(int *arr,int n){
    if(i==1) return arr[0];
    return max(arr[n-1],printMax(arr,n-2));
}

int main()
{   int arr[5]={1,2,3,4,5};
cout<<printMax(arr,0,5);
    
    return 0;
}
