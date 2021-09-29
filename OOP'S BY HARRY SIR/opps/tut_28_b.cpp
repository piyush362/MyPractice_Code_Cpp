#include<iostream>
using namespace std;
class c2;
class c1{
    int value;
    public:
        void indata(int a){
            value = a;
        }
        void display(void){
            cout<< value << endl;
        }
        friend void exchange(c1 &, c2 &);
};
class c2{
    int value2;
    public:
        void indata(int a){
            value2 = a;
        }
        void display(void){
            cout<< value2 <<endl;
        }
        friend void exchange(c1 &, c2 & );
};
void exchange(c1 &x , c2 &y){
    int temp = x.value;
    x.value = y.value2;
    y.value2 = temp;
}
int main()
{
    c1 a;
    a.indata(5);

    c2 b;
    b.indata(4);

    exchange(a,b);

    a.display();
    b.display();
    
    return 0;
}