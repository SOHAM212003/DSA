#include<bits/stdc++.h>
using namespace std;

//tc = O(N)  sc= O(N)
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}