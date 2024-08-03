#include<iostream>
using namespace std;

class Teacher {
    public:
    string name,dept;
    double salary;
    Teacher(string name,string dept,double salary){
        this->name=name;     //this->name refers to objects assined value
        this->dept=dept;
        this->salary=salary;
    }
    void getInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"Department: "<<dept<<endl;
    cout<<"Salary: "<<salary<<endl;
    }
    
};
int main(){
    Teacher t1("John","Math",50000);
    t1.getInfo();
}