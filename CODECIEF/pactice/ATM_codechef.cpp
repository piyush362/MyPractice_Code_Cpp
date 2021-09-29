#include<iostream>
using namespace std;
int main()
{
    int t;
    string arr;
    cin>>t;
    while(t--){
        int total=0;
       
        cin>>arr;
        for(int i=0 ; i<arr.size() ; i++){
            if(arr[i]=='4')
            total++;
        }
       cout<<total<<endl;
    }
    return 0;
}