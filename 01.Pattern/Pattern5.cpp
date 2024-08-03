#include<iostream>
using namespace std;
//in short we created similar to n*n array 
int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;

    int row = 1;
    int count = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            cout<<" "<<count;
            col++;
            count++;
        }
        cout<<endl;
        row++;
    }
}

