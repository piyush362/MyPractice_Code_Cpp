#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {66, 57, 54, 53, 64, 59};
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    int counter = 1;
    while (counter < size_arr)
    {
        for (int i = 0; i < size_arr - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];

                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    cout << arr[size_arr - 1];

    return 0;
}