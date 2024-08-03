#include<iostream>
using namespace std;

void prime(int n)
{   int i = 2;
    bool flag;
    for ( i ; i < n; i++)
    {   
        if(n%i == 0){
            cout<<"not prime"<<endl;
            break;
        }
        else
        {
            cout<<"Prime"<<endl;
            
        }
        
    }
    
}

int main(){
    int n;
cout<<"Enter the number:";
cin>>n;
prime(n);
    return 0;
}