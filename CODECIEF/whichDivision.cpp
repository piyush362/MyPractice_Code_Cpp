#include<iostream>
using namespace std;
int main()
{
    int T, num;
    cin>>T;
    while(T>0){
        cin>>num;
        if(num>= 2000)
            cout<<"1"<<endl;
        else if(num<2000 && num >= 1600)
            cout<<"2"<<endl;
        else if(num< 1600)
            cout<<"3"<<endl;
        T--;
    }
    return 0;
}