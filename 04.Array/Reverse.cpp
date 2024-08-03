#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Arrfunc(int n){
    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl<<"Reverse: ";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    
}

void stringFunc(string s){
    cout<<"Before: "<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<"After: "<<s<<endl;
    reverse(s.end(),s.begin());
}


int main(){
    int ch;
    cout<<"1.array reverse"<<endl<<"2.String  reverse"<<endl<<"enter choice: ";
    cin>>ch;

    switch(ch){
        case 1:
            int n;
            cout<<"Enter number of elements: "<<endl;
            cin>>n;
            Arrfunc(n);
        break;

        case 2:
            string str;
            cout<<"Enter string: "<<endl;
            cin>>str;
            stringFunc(str);
        break;
        
        
    }

    

    return 0;

}