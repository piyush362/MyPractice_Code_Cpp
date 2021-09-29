#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of row : ";
    cin>>n;
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j<n ; j++){
            int mid= n/2;
            int next= mid +1;
            if(j == mid && j== next){
                cout<<"*";
            }
        }
    }
    return 0;
}