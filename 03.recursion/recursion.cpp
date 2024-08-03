#include<bits/stdc++.h>
using namespace std;

//TC= O(N)   SC = O(N)

void f(int i,int n){
      if(i>n) return;
      cout<<"Soham"<<endl;
      f(i+1,n);

}

int main(){
    int n;
    cout<<"Enter how many times: ";
    cin>>n;
     
     f(1,n);
    return 0;
}