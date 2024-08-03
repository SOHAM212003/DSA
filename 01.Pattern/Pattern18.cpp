#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;

int row = 1;
    while(row <= n){
        //spaces
        int spaces = n-row;
        while(spaces){
            cout<<" ";
            spaces--;
        }

        //star
        int col = 1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }

 
}

 