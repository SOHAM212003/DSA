#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

//Method 1:
/*
    vector<int>v;
    
    cout<<"The number is: "<<n<<endl;
    while (n>0)
    {
        int lsdigit = n%10;
        v.emplace_back(lsdigit);
        n/=10;   

    }
    cout<<"Reverse number is: ";
    for(auto i:v){
        cout<<i;
    }
*/  

//Method 2:
    int RevNum = 0;

 
   
    while (n>0)
    {
        int lsdigit = n%10;
        RevNum =(RevNum*10)+lsdigit;
        n/=10;   

    }
    cout<<"Reverse number is: "<<RevNum;
    return 0;
}