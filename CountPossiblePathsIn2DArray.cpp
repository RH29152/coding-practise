#include<iostream>
using namespace std;


//*************************Mysoultion****************** */
int count=0;
int PrintPathCount1(int m,int n,int i=1,int j=1){
    if(i==m and j==n){ count++; return 0;}    // we returned zero beacaue at target it can move no where so count is zero
    if(i==m){ return PrintPathCount1(m,n,i,++j);} //if it reaches at then end of rows then it should move only rightward
    if(j==n){ return PrintPathCount1(m,n,++i,j);} //if it reaches at then end of columns then it should move only downward
    
    PrintPathCount1(m,n,i+1,j);   // at start we know it has two choices here we are taking right moving choice
    PrintPathCount1(m,n,i,j+1);   // at start we know it has two choices here we are taking down moving choice

    return count;                //at the last we are returning count
}


//******************Video Solution best one *************************** */

int PrintPathCount2(int m,int n,int i=1,int j=1){
    if(i==m and j==n){ return 1;}   //if we reached target then count is 1
    if(i>m || j>n) return 0;        //if we moved out of grid then we can't come back to grid so return 0
    return (PrintPathCount2(m,n,i+1,j)+PrintPathCount2(m,n,i,j+1));   // adding ways of reaching to target from right move and from downward move we get total ways 
}
int main() {
   cout<<PrintPathCount2(3,3); 
    return 0;
}