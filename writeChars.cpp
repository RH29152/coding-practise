#include<iostream>
#include<cmath>
using namespace std;



//****************itterative efficient solution with O(N) TC ********
string WriteChars(int n){
    //things to note: there are same number of > and < signs
    string ans;
int mid = (n%2==0)? n/2:n/2+1;

       for(int i=1;i<mid;i++){
        ans+="<";
       }

       if(n%2==0){
        cout<<"**";
       }
       else {
        ans+="*";
       }

       for(int i=1;i<mid;i++){
        ans+=">";
       }
       return ans;
}


//****************Recursive efficient solution with O(N) TC ********
string WriteChars2(int n){
    if(n==1) return "*";
    if(n==2) return "**";

     return "<"+WriteChars2(n-2)+">";
}

int main() {
    cout<<WriteChars(7)<<endl;
    cout<<WriteChars2(7)<<endl;

    return 0;
}