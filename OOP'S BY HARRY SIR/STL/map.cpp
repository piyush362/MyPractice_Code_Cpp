#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int > marksmap;
    marksmap["piyush"] = 98;
    marksmap["nitish" ]= 80;
    marksmap["rashmi" ]= 60;
    map<string , int > :: iterator iter;
    for(iter = marksmap.begin(); iter != marksmap.end() ; iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    return 0;
}