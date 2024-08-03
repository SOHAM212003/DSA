#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;

int row = 0;
    while(row < n){
        int col = 1;
        while(col <= n){
            char ch='A'+row+col-1; 
            cout<<ch;
            col++;
            
        }
        cout<<endl;
        row++;
    }
/*
 int row = 0;
    while(row < n){
        int col = 1;
        char ch='A'+row; 
        while(col <= n){
            
            cout<<ch;
            ch = ch +1;
            col++;
            
        }
        cout<<endl;
        row++;
    }
*/
}

