//second largest element of array

#include<bits/stdc++.h>
using namespace std;

int SecLarg(vector<int>&arr,int n){
    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>largest){
            secondLargest = largest; 
            largest = arr[i];
             
        }
        else if(arr[i]< largest && arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements: ";
    for(int i = 0;i < n; i++){
        cin>>arr[i];
    }
    cout<<"Second largest number of array: "<<SecLarg(arr,n);
    return 0;
}