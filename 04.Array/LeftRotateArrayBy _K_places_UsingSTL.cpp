#include<bits/stdc++.h>
using namespace std;

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
    for(auto i :arr){
        cout<<i<<" ";
    }
}

int main (){
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    RotateSTL(arr, k);
    return 0;
}