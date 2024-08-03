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
            cout<<" "<<col;
            col++;
        }
        cout<<endl;
        row++;
    }
}

