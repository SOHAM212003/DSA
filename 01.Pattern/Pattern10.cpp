#include<iostream>
using namespace std;
//in short we created similar to n*n array 
int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n;

    int row = 1;
    
    while(row <= n){
        int col = 1;
        int count = row;
        while(col <= row){
            cout<<" "<<count;
            col++;
            count++;
        }
        cout<<endl;
        row++;
    }
}

