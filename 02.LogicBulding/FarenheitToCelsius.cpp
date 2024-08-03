//c = (f-32)*5/9
//ctrl+shift+B
#include<iostream>
using namespace std;

float FarenToCelc(float f){
    float c;
    c = (f-32)*5/9;
    return c;
}
int main(){
    float f;
    cout<<"Enter temprature in Farenheit : ";
    cin>>f;

    cout<<"Temprature in Celcius is : "<<FarenToCelc(f);

}