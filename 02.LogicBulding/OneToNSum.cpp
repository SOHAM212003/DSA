#include<iostream>
using namespace std ;
//sum upto n
void Sum(int n){
    int i=1,sum=0;
    while(i<=n)
    {
        sum += i;
        i++;
    }
    cout<<"The sum upto "<<n<<" is "<<sum<<endl;
}
//Even sum upto n
void EvenSum(int n){
    int i = 2,sum = 0;
    while(i<=n){
        sum += i;
        i += 2;
    }
    cout<<"The Even sum upto "<<n<<" is "<<sum<<endl;
}

int main(){
    int n;
    cout<<"Enter the number upto want sum :";
    cin>>n;

    Sum(n);
    EvenSum(n);
    
}