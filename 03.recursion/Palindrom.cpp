#include<bits/stdc++.h>
using namespace std;
/*
isalnum --> use to cheack it is an alphanumric value or not
*/

//simple method
bool pali(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return pali(i+1,s);
}


//its cheak upper lower,remove other than alfanumerik   
    bool isPalindrome(string &s) {
        int left=0;
        int right=s.size()-1;
        while(left<=right){
           if(!isalnum(s[left])){left++; continue;}
           if(!isalnum(s[right])){right--;continue;}
           if(tolower(s[left])!=tolower(s[right]))return false;
           else{
               left++;
               right--;
           }
       }
    return true;
}

int main(){
    string s;
    cin>>s; 

    cout<<isPalindrome(s);

    return 0;
}

//it convert all upper to lower
//    transform(s.begin(), s.end(), s.begin(), ::tolower);   
/*
for (auto& x : s) { 
        x = tolower(x); 
    }
*/