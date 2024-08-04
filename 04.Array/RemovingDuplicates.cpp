// removing duplicates

#include<bits/stdc++.h>
using namespace std;

int RemDup(vector<int>&arr, int n){
    int i =0;
    for(int j = 0;j<n;j++){
        //when values are differnt or unique
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    for (int j = 0; j < i+1; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<"Lenght of array: ";
    return i+1; //for lenght of array without duplicates
    
}

int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Befor removing duplicates: ";
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl<<"After removing duplicates: ";
    cout<<RemDup(arr,n);
    return 0;
}