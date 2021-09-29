#include<bits/stdc++.h>
using namespace std;
void display(list<int> &lis1){
   list<int> :: iterator it;
   for(it = lis1.begin(); it!= lis1.end(); it++){
       cout<<*it<<" ";
   }
   cout<<endl;
}
int main()
{
    list<int> lis1;
    lis1.push_back(5);
    lis1.push_back(7);
    lis1.push_back(9);
    lis1.push_back(12);
    lis1.push_back(1);
    display(lis1);
    lis1.sort();
    display(lis1);

    list<int> lis2(3);
    list<int> :: iterator iter;
    iter = lis2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    
    return 0;
}