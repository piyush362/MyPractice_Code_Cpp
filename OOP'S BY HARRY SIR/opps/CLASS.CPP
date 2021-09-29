#include<iostream>
using namespace std;

// OOPs - Class and objects
// c++ intitially called c with classes and objects 
// stacture had limitation
//          - members are always public
//          - no methods
// class = stracture + more
// classes have methods and properties
// classes can make few member private and few member public

/* class ______{
        // class definations

}; */
// nesting of function

class employee{
    private:           // private data in class
        int a , b ,c;

    public:            // public data
        int d ,e;
        void setData(int a1, int b1, int c1);
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void employee:: setData(int a1 , int b1, int c1){
    a = a1;
    b = b1;
    c = c1;

}

int main()
{
    employee piyush;
    piyush.d = 34;
    piyush.e = 50;
    piyush.setData(1,2,3);
    piyush.getData();
    
    return 0;
}