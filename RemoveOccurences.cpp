#include<iostream>
#include<string>
using namespace std;


//***********itterative sol with O(N)********
string Remove(string s){
    string result="";

    for(auto i:s){
        if(i!='a'){
            result+=i;
        }
    }
    return result;
    //alternative:
    // s.erase(remove(s.begin(), s.end(), 'a'), s.end());
}


//**********Recursive sol-1*************88 */

string Remove2(string s,int idx,string result=""){
int index=s.length();
if(idx==s.length()) return result;
if(s[idx]!='a'){ result+=s[idx];}

return Remove2(s,idx+1,result);
}

//**********Recursive sol- 2*************88 */

string Remove3(string s,int idx){
if(idx==s.length()) return "";                         //length function takes O(N) so we can take size as parameter also to increase efficiency
// if(s[idx]!='a'){ return s[idx]+Remove3(s,idx+1);}

// else return Remove3(s,idx+1);
string curr="";
curr+=s[idx];
return ((s[idx]=='a')? "" : curr)+Remove3(s,idx+1);
}

//**********Recursive sol- 3 *************88 */

string Remove4(string s){
if(s.length()==0) return "";
if(s[s.length()-(s.length()-1)-1]!='a'){ return s[s.length()-(s.length()-1)-1]+Remove4(s.substr(1));}

else return Remove4(s.substr(1));  //substr run in O(N) which decreases efficiency little bit
}




//******************Recommended recursive Solution*********************** */
string Remove5(string s,int idx,int n){
if(idx==n) return "";                       
string curr="";
curr+=s[idx];
return ((s[idx]=='a')? "" : curr)+Remove5(s,idx+1,n);
}


int main() {
     
     cout<<Remove5("abcdaua",0,7)<<endl;
    return 0;
}