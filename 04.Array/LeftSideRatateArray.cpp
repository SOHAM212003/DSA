//arr = [1,2,3,4,5,6,7]  k = 2
//o/p => [3,4,5,6,7,1,2]

#include<bits/stdc++.h>
using namespace std;

//Brute force or without using STL
void Rotate(vector<int>&arr,int k, int n){
    
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i]; // temp[i] = [1,2]
    }
    for (int i = k; i < n; i++)
    {
        arr[i-k] = arr[i]; // arr[] = [3,4,5,6,7]
    }
    for (int i = n-k; i < n; i++)
    {
        arr[i] = temp[i-(n-k)]; //arr = [3,4,5,6,7,1,2]
    }
    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" "; //display
    }
    
}
//using stl
void RotateSTL(vector<int>&arr, int k) {
    k=k%arr.size();

    // Rotate the first k elements
    reverse(arr.begin(),arr.begin()+(arr.size()-k));
    
    // Rotate the remaining elements
    reverse(arr.begin()+(arr.size()-k),arr.end());
    
    // Rotate the entire array
    reverse(arr.begin(),arr.end());

    // Print the rotated array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

int main(){
int n;
cout<<"Enter number of elements: ";
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int k;
cout<<"Enter number of position to be rotated: ";
cin>>k;
cout<<"Final array Without STL: "<< endl;
Rotate(arr,k,n);
cout<<endl;
cout<<"Final array using STL: "<<endl;
RotateSTL(arr,k);
return 0;
}