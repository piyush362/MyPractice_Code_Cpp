#include<iostream>
using namespace std;
class complex{
    // creating a constructor
    int a, b;

    public:

    complex(void);// constracotin diclration
    void printnumber(){
        cout<<"Your number is "<<a<<" "<<b<<"i"<<endl;
    }


};
complex :: complex(void){
    a = 10;
    b = 0;
}
int main()
{
    complex c;
    c.printnumber();
    
    
    return 0;
}