#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, rev=0;
    cin>>n;

    while (n)
    {
        int ld = n%10;
        rev = (rev*10) + ld;
        n = n/10;
    }
    cout<<rev;
    return 0;
    
}