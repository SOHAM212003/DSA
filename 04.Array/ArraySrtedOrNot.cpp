// cheaking array is sortrd ot not
#include<bits/stdc++.h>
using namespace std;


int sortarray(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
        if (arr[i]>=arr[i-1]){}
        else{
            return false;;
        }
        return true;
    }
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
    if(sortarray(arr,n)){
        cout<<"Array is sorted "<<endl<<"\nsorted array: ";
        // for (int i=0; i<n; i++){
        // cout<<arr[i]<<" ";
        // }
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}