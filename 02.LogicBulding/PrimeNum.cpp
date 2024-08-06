#include<iostream>
using namespace std;

void prime(int n)
{   int i = 2;
    bool flag ;
    for ( i ; i < n; i++)
    {   
        if(n%i == 0){
            flag = false;
            break;
        }
        else
            flag = true;
    }
    if(flag == true)
    cout << n << " is a prime number" << endl;
    else
    cout << n << " is not a prime number" << endl;
    
}

int main(){
    int n;
cout<<"Enter the number:";
cin>>n;
prime(n);
    return 0;
}