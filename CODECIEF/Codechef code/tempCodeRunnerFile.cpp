#include<iostream>
using namespace std;
int main()
{
    int T, G1, S1, B1, G2, S2, B2;
    cin>>T;
    for (int i = 1; i <= T; i++)
    {
        int n1=0, n2=0;
        cin>>G1>>S1>>B1>>G2>>S2>>B2;
        if(G1>G2)
            n1++;
        else n2++;

        if(S1>S2)
            n1++;
        else n2++;
        if(B1>B2)
            n1++;
        else n2++;

        if(n1>n2)
        cout<<"1";
        else cout<<"2";

    }
    

    return 0;
}