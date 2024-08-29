/*
Problem Statement:
The Charity Bake Sale
At the community's charity bake sale, families are contributing various baked goods to raise funds. For every family, the community is noting the number of iterns baked, in an integer array B of size N. The committee wants to display all products from families who baked some items divisible by 7. Your task is to find and return an integer value representing the product of all the items divisible by 7.
Input 1: An integer array B representing the baked items.
Input 2: An integer value N representing the size of array
Output: Return an integer value representing the product of all the items divisible by 7.
Test Case 1:
Input 1: {2, 4, 5, 7, 8, 14)
Input 2: 6
TalentBattle
Output: 98
Test Case 2:
Input 1: {11, 10, 8}
Input 2: 3
Output: 0
*/


#include<bits/stdc++.h>
using namespace std;



int main(){
    int n,mult=1;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if(arr[i]%7){
            mult*= arr[i];
        }
    }
    if(mult<7){
        cout << 0;
    }

    else{
        cout<<mult;
    }
}