#include<bits\stdc++.h>
using namespace std;

int SumEven(vector<int>&arr){
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]%2==0){
            sum += arr[i];
        }
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<SumEven(arr);
    return 0;
}