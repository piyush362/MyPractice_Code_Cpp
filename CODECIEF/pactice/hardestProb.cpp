#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--){
      int n ,k;
      cin>>n>>k;
      int arr[n];
      for(int i = 0 ; i <n ; i++){
          cin>>arr[i];
      }

      sort(arr, arr+n);

      for(int i =0 ; i< k ; i++){
          if(arr[i] < 0 ){
              arr[i] = arr[i]*(-1);
          }
          else 
             break;
      }
      long long int sum=0;
      for(int i=0 ; i<n ;i++){
          if(arr[i]>0)
          sum += arr[i];
      }
      cout<<sum<<endl;
      
    }
    return 0;
}