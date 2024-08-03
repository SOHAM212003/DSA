#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;

int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            cout<<" "<<n-col+1;
            col++;
        }
        cout<<endl;
        row++;
    }
/*
int row = n+1;
    while(--row){
        int col = n+1;
        while(--col){
            cout<<" "<<col;
            
        }
        cout<<endl;
        
    }
*/  
}

