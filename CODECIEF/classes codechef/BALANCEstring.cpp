// L04 time stamp = 4

#include<bits/stdc++.h>
using namespace std;
bool check_balance(string str)
{
    stack<char> Stack;
    for(auto a:str){
        if(a== '(') Stack.push(a);
        else if (!Stack.empty() && Stack.top()=='(') Stack.pop();
        else Stack.push(a);
    }
    if(Stack.size()==0) return true;
    else return false;

    // in one line 
    // return Stack.empty();
    // this will reurn true if stack is empty else return fasle

}
int main()
{
    string str1="((()))";
    cout<<check_balance(str1);

    
    return 0;
}


// same question with some varriation 
//   