#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    void setid(void){
        salary = 122;
        cout<<"Enter the id of employee : ";
        cin>>id;
    }
    void getid(void){
        cout<<"The id       of Employee is : "<<id<<endl;

    }
};
int main()
{
    // Employee Alice , Ayush , Akash , Adarsh , Ankit;
    // Alice.setid();
    // Alice.getid();  // what if the number of employee is more

    Employee Facebook[5];
    for(int i = 0 ; i < 4 ; i++){
        Facebook[i].setid();
        Facebook[i].getid();
    }
    
    return 0;
}