#include<bits/stdc++.h>
using namespace std;

//using three variables
void Swap1(int n1, int n2){
    int temp ;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout<<" num1: "<<n1<<" num2: "<<n2;
}

//using 2 variables
void Swap2(int n1, int n2){
    n1 =n1+n2;
    n2 = n1-n2;
    n1 = n1 - n2;
    cout<<" num1: "<<n1<<" num2: "<<n2;
}

//without using (+ or -) 
void Swap3(int n1, int n2){
    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;
    cout<<" num1: "<<n1<<" num2: "<<n2;
}
int main(){
    int n1,n2;
    cout<<"Enter the two numbers: ";
    cin>>n1>>n2;
    cout<<"Before Swap: "<<endl<<" num1: "<<n1<<" num2: "<<n2<<endl;
    cout<<"After Swap: "<<endl;
    Swap1(n1,n2);
    Swap2(n1,n2);
    Swap3(n1,n2);
    return 0;
}