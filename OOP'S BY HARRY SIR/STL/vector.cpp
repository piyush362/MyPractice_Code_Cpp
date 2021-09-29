#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &v){
    for(int i = 0 ; i < v.size() ; i++){
        cout<<v[i]<<endl;
    }
}
int main()
{
    vector<int> vac1;
    int a;
    for(int i = 0 ; i < 4 ; i++){
        cin>>a;
        vac1.push_back(a);
    }
    

    display(vac1);


    return 0;
}