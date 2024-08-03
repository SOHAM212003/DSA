/*
Given number n. find out and return the
number of digits present in a number
i/p= 136
o/p= 3
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//method 2
int count(int n){
    int cnt = (log10(n)+1);
    return cnt;
}

int main(){
    
    int n;
    cout<<"enter number: ";
    cin>>n;

    cout<<count(n);
//method 1
    /* 
    int lastdigit ,cnt=0;

     while(n>0){
         //it is for print lsdigit
         lastdigit = n%10;
         cout<<lastdigit<<endl;

         //print how many digits are present
         cnt++;
         n/=10;
     }
     cout<<"Number of digite in number : "<<cnt;
*/

    return 0;
}