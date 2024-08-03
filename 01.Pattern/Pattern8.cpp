// column = row
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value : ";
    cin>>n;

    int row=1;
// we start from 0 thats why r<n....inf start with 1 then r<=n

    while(row <= n){
        int col = 1;
        while(col <= row){ 
            cout<<" "<<row;
            col++;
        }
        cout<<endl;
        row++;
    }

}