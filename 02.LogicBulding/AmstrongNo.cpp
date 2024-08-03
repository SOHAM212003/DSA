#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     int copy=n,sum=0;
     while(n>0){
        int ld = n%10;
        sum += (ld*ld*ld);
        n/=10;
     } 
     if (copy==sum)
     {
        cout<<"true";
     }
     else
     {
        cout<<"false";
     }
          
    return 0;
}