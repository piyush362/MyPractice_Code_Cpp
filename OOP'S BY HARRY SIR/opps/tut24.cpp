#include <iostream>  // static function and static variable
using namespace std;
class Employs
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id : ";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of employs is " << id << " and this is the emoloy number " << count << endl;
    }
    static void getcont(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employs:: count; // Difault value is 0

int main()
{
    Employs adarsh, ayush, diwesh;
    // count is a static data member of class emoloys
    adarsh.setdata();
    adarsh.getdata();
    Employs::getcont();

    ayush.setdata();
    ayush.getdata();
    Employs::getcont();

    diwesh.setdata();
    diwesh.getdata();
    Employs::getcont();

    return 0;
}