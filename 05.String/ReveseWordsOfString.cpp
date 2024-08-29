#include<bits/stdc++.h>
using namespace std;

string RevString(string str){
    reverse(str.begin(), str.end());
    str.insert(str.end(),' ');
    int j =0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
        {
            reverse(str.begin()+j,str.begin()+i);
            j = i+1;
        }
    }
    str.pop_back();
    return str;
}

int main(){
    string str=  "  hello world   ";
   // cin>>str;
    cout<<"Original String:"<<str<<endl;
    cout<<"Reversed String:"<<RevString(str)<<endl;
    return 0;
}

//for leet code
/*
string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        int left=0;
        int right=0;
        int i=0;
        while(i<n){
            while(i<n && s[i]==' ')i++;
            if(i==n)break; // to stop index going out of bounds
            while(i<n && s[i]!=' '){
                s[right++]=s[i++];
            }
            reverse(s.begin()+left,s.begin()+right);
            s[right++]=' ';
            left=right;
            i++;
        }
        s.resize(right-1);
        return s;
    }


m2-> using split

    string reverseWords(string s) 
    {

    stringstream ss(s);
    string ans;
    string temp;

    while (ss >> temp) {
       ans = temp + " " + ans; 
    }   
            ans.pop_back(); // Remove the trailing space
        return ans; 
    }
 
 tc-O(n)
 sc-O(n)
    
*/

