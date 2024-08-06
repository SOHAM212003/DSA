#include<bits/stdc++.h>
using namespace std;

int main(){
     int n; //153
     cin>>n;
     int copy=n,sum=0;
     while(n>0){
        int ld = n%10; //3-5-1
        sum += (ld*ld*ld); //(0+27+125+1)
        n/=10; //15-1-0
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