#include<iostream>
using namespace std;
int main()
{
    int T, G1, S1, B1, G2, S2, B2;
    cin>>T;
    for (int i = 1; i <= T; i++)
    {
        int a=0, b=0;
        cin>>G1>>S1>>B1>>G2>>S2>>B2;
        if(G1>G2)
            a++;
        else b++;

        if(S1>S2)
            a++;
        else b++;
        if(B1>B2)
            a++;
        else b++;

        if(a>b)
        cout<<"1"<<endl;
        else cout<<"2"<<endl;

    }
    

    return 0;
}