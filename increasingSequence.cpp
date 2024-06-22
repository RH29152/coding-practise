#include<iostream>
using namespace std;

void Sequence(long long n){
    if(n==0) return;
    Sequence(n-1);
    cout<<n<<" ";
}

int main() {
    Sequence(10000);
    return 0;
}