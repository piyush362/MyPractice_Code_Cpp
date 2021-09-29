#include <bits/stdc++.h>
using namespace std;
int main()
{
    int free, used, del, create;
    cout << "Free space in flopy Disk(bytes) : ";
    cin >> free;
    cout << "Used space in flopy Disk(bytes) : ";
    cin >> used;
    // int total = free + used;
    cout << "How many space of file you want to delete : ";
    cin >> del;
    cout << "How many space of file you want to create : ";
    cin >> create;
    free = free + del;
    // used = used - del;
    free = free - create;
    cout << free;

    return 0;
}