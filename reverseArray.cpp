#include <iostream>
using namespace std;


//**************Sol with O(N*N) TC *********/

// void Reverse1(int *arr,int size){
// 	for(int i=0;i<size;i++){
// 		for(int j=0;j<size-i-1;j++){
// 			swap(arr[j],arr[j+1]);
// 		}
// 	}
// }

//********************Sol with O(N) TC********************* */

void Reverse2(int *arr,int size){
    int left=0;
    int right=size-1;

    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}


//*************Recursive solution*************** */
void Reverse3(int *arr,int size,int i=0){
    if(i>=size-1) return;
    swap(arr[i],arr[size-1]);
    Reverse3(arr,size-1,i+1);

}

// 1 2 3 4 5  i=0, size=5
//5 2 3 4 1   i=1, size 4
//5 4 3 2 1   i=2, size 3


// 1 2 3 4 5 6 i=0, size=6
// 6 2 3 4 5 1  i=1, size=5
//6 5 3 4 2 1   i=2   size=4
// 6 5 4 3 2 1  i=3  size=3
int main() {
	// your code goes here
	int arr[5]={1,2,3,4,5};
	// Reverse1(arr,5);
	Reverse3(arr,5);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}