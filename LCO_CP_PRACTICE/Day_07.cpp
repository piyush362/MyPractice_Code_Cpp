/* The city's bus system carries 1,200,000 people each day,
How many people does the bus system carry each year? 1 year = 365 days
solve without using *, / operator, bitwise operator or loop  */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of people bus system carries per day : ";
    long int day, year = 365, result = 0;
    cin>>day;
    while (year>0)
    {
        result+=day;
        year--;
    }
    cout<<"number of people bus system carries in 365 day is : "<<result;
    
    return 0;
}