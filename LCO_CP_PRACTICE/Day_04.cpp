#include<bits/stdc++.h>
using namespace std;
int main()
{

    int hotDogs = 400;
    int result = 0;
    while(hotDogs >0){
       
        hotDogs = hotDogs-8;
        result++;
    }
    cout<<result;
    return 0;
}