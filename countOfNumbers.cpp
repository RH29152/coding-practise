#include<iostream>
using namespace std;

void SortArray(int* arr, int size, int &neg, int &odd){
       if(size==0) return;
       if(arr[size-1]<0){neg++;}
       if(arr[size-1]%2!=0){ odd++;}
       SortArray(arr,size-1,neg,odd);
}

int main() {
    int arr1[8]={1, -2, 3, -4, 5,7,-1000,-3};
    int neg=0;
    int odd=0;
    SortArray(arr1,8,neg,odd);

cout<<"Negative: "<<neg<<" Odd: "<<odd<<endl;
    return 0;
}