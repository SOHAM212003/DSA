#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int copy = n,rev=0;
    while (n>0)
    {
        int ld = n%10;
        rev = (rev*10)+ld;
        n/=10;
    }
    if (rev==copy) 
        cout<<"true";
    else  
        cout<<"false";
    
}