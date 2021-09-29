#include<iostream>
using namespace std;
int main()
{
    int T, result=0;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int arr[N];
        for(int i=0; i<N ;i++){
            cin>>arr[i];
        }
        for(int i=0 ; i<N ; i++){
            if(arr[i]-arr[i+1]== arr[i+1]-arr[i+2])
            result +=1;
           
        }
        cout<<result<<endl;
    }
    return 0;
}