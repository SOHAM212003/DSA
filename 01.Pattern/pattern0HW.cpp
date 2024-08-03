#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
    //1st trangle
        int start1 = n-row+1;
        while(start1){
            cout<<col;
            col++;  
            start1--;  
        }

    //2nd trangle
        int start2 = row - 1;
        while(start2){
            cout<<"*";
            start2--;
        }

    //3rd trangle
        int start3 = n-row+1;
        while(start3){
            cout<<start3;
            start3--;
        }
        row++;
        cout<<endl;
    }
}