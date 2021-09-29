#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number for multiplication table : ";
    cin>>number;

    for(int i = 1 ; i <= 10 ; i++){
        cout<<number<<" "<<"X"<<" "<< i <<" = "<<number*i<<endl;
    }
    return 0;
}