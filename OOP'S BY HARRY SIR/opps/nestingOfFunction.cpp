#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void check_binary(void);
    void ones(void);
    void display(void); 
};
void binary ::read(void)
{
    cout << "Enter a binary number : " << endl;
    cin >> s;
}
void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format " << endl;
            exit(0);
        }
    }
}
void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
            s.at(i) = '0';
        else if (s.at(i) == '0')
            s.at(i) = '1';
    }
}
void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    b.check_binary();
    b.ones(); // ones complients , replace 1 by 0 and 0 by 1 ;
    b.display();

    return 0;
}