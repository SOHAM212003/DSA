#include<bits/stdc++.h>
using namespace std;

int EmptySeat(int arr[],int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            count++;
            }
            }
            return count;
}

int main(){
    int arr[] = {1, 0, 1, 0, 1,};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Number of empty seats: " << EmptySeat(arr, n);
}