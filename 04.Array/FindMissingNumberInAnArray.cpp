//arr = [1,2,4,5]  missing no = 3
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//using xor or method 1
int missingNo1(vector<int>&arr,int n){
    int XOR1 =0,XOR2 = 0;
    for(int i = 0;i<n-1;i++){
        XOR2 = XOR2 ^ arr[i];
        XOR1 = XOR1 ^ (i+1);
    }
    XOR1 = XOR1^n;
    return XOR1^XOR2;
}

//using sum or method 2
int missingNo2(vector<int>&arr,int n){
    int sum = (n*(n+1))/2;
    int sum2 = 0;
    for(int i = 0;i<n-1;i++){
       sum2+=arr[i];
    }
    return sum - sum2;

}

int main(){
  int n;
  cout<<"Enter number of element: ";
  cin>>n;
  vector<int>arr{1,2,4,5};
    cout<<"Using MEthod-1 the Missing number is : "<<missingNo1(arr,n)<<endl;
    cout<<"Using Method-2 the Missing number is: "<<missingNo2(arr,n);
    return 0;
}