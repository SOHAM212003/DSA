#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
	cin>>n;
	int cp=n;
	while(n>0){
		int ld =n%10;
		if(cp%ld==0) count++;
		else count;
		n/=10;
	}
	cout<< count;
    return 0;
}