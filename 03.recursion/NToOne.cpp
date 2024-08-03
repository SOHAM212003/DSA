#include<bits/stdc++.h>
using namespace std;

//TC= O(N)   SC = O(N)

void f(int i,int n){
      if(i<1) return;
      cout<<i<<endl;
      f(i-1,n);

}

int main(){
    int n;
    cout<<"Enter how many times: ";
    cin>>n;
     
     f(n,n);
    return 0;
}