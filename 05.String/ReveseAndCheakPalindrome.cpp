#include<bits/stdc++.h>
using namespace std;

bool RevString(string str){
    string rev = str;
    reverse(rev.begin(), rev.end());
    cout<<"Revese String:"<<rev<<endl;
    if (rev==str)
    {
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string str;
    cin>>str;
    cout<<"Original String:"<<str<<endl;
    if(RevString(str)){
        cout<<"The string is a palindrome"<<endl;
    }
    else{
        cout<<"The string is not a palindrome"<<endl;
    }
    return 0;
}