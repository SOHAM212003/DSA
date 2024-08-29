
/*
Problem Statement:
Car's Speed
You have an electric car whose speed is derived from the battery percentage.
The battery percentage is denoted by an integer value N and the speed is the sum of all the factors of the battery percentage including 1. 
Your task is to find and return an integer value representing the .
Input: An integer value N representing the battery percentage of the car.
Output: Return an integer value representing the speed of the car.
Test Case:
Input: 12 (battery percentage)
Output: 28 (speed of the car) (1 + 2 + 3 + 4 + 6 + 12)
*/
#include<bits/stdc++.h>
using namespace std;



int main(){
    int n,speed=0;
    cin >> n;

    for (int i = 1; i <=n; i++)
    {
        if(n%i==0){
            speed+=i;
        }
    }
    cout<<speed;
}