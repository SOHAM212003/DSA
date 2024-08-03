//Largest element of Array

#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int>&arr,int n){
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        largest = arr[i];
    }
    return largest;   
}

int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        cout<<"Largest element is "<<largestElement(arr,n)<<endl;
    return 0;
}