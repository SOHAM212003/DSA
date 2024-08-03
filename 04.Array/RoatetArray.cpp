// 6. Rotate Clockwise to an array by a given number of positions 
// Given an array, rotate the array by one position in clock-wise direction.
// Input:  arr[] = {1, 2, 3, 4, 5, 6, 7} , n = 3 
// Output: arr[] = {7, 1, 2, 3, 4, 5, 6}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void Rotate(int arr[],int pos,int n){
   int temp[pos];
    
    for (int i=0; i<pos; i++){
        temp[i] = arr[n-pos+i];
    }
    
    for (int i=n-1; i>=pos; i--){
        arr[i] = arr[i-pos];
    }
    
    for (int i=0; i<pos; i++){
        arr[i] = temp[i];
    }
    
    cout<<"Rotated array:";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n,pos;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number of positions to rotate array:";
    cin>>pos;

    Rotate(arr,pos,n);

    
    return 0;
}

