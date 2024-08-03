/*
    Time complexity: O(N)
    Space complexity: O(N) 

    Where 'N' reprents the "Nth" number .
*/

#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
    int n;
    cin>>n;
    // declaring an 'n' size array.
    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout<<dp[n]<<endl;
}
*/
int fib(int n){
    if(n<=1) 
    return n;
    
    else
    return fib(n-1)+fib(n-2);

}
int main(){
    int n;
    cout<<"enter no: ";
    cin>>n;

    cout<<fib(n);
}