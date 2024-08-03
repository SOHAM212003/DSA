// column = row
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value : ";
    cin>>n;

    int row=0;
// we start from 0 thats why r<n....inf start with 1 then r<=n

    while(row < n){
        int col = row;
        while(col < n){
            cout<<" *";
            col++;
        }
        cout<<endl;
        row++;
    }

}