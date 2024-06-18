#include<iostream>
using namespace std;


//add  10% to each salary of array
void TaxAdd(double *arr,int size){
if(size<0) return;
arr[size-1]+=(arr[size-1]*0.10);
TaxAdd(arr,size-1);
}

int main() {
    double salaries[3]= {1000.0, 2000.0, 3000.0};
    TaxAdd(salaries,3);

    for(int i=0;i<3;i++){
        cout<<salaries[i]<<" ";
    }


    return 0;
}