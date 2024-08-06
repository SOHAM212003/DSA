#include<bits/stdc++.h>
using namespace std;

//using recursion
int Recfact(int n){
    if(n==0||n==1)
        return 1;
    else{
        return n*(Recfact(n-1));
    }
}

//using loop
int factWhile(int n){
    if(n==0||n==1)
        return 1;
    int i = n, fact = 1;
    while (n / i != n) {
        fact = fact * i;
        i--;
    }
    return fact;
}

int factFor(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main(){
    int n ;
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<Recfact(n)<<endl;
    cout<<"Factorial of "<<n<<" is "<<factWhile(n)<<endl;
    cout<<"Factorial of "<<n<<" is "<<factFor(n)<<endl;
}