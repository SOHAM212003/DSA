#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value: ";
    cin>>n;

    int row = 1;
    
    while(row<=n){
    //spaces(1st trangle)
        int spaces=n-row;
        while(spaces){
            cout<<" ";
            spaces--;
        }
    //numbers1(2nd trangle)
        int col=1;
        while(col<=row){
            cout<<col;
            col++;
        }
        
    //number2(3rd trangle)
        int start = row - 1;
        while(start){
            cout <<start;
            start--;
        }
        cout<<endl;
        row++;
    }
}