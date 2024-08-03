#include<iostream>
using namespace std;

int main(){
    char ch;

    cout<<"Enter the value : ";
    cin>>ch;
    if(ch >= 'A' && ch <= 'Z'){
        cout<<"UPPER CASE";
    }
    else if(ch >= 'a' && ch <= 'z'){
        cout<<"LOWER CASE";
    }
    else{
        cout<<"NUMBERIC";
    }
}