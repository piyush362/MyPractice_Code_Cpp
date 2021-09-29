#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(&arr[j], &arr[j + 1]);
            
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
int main()
{
    int second[] = {44, 66, 57, 54, 53, 64, 52, 59};
    int n = sizeof(second) / sizeof(int);
    bubbleSort(second, n);
    cout << "Her best time is " << second[0] << " seconds"<<endl;

    for(int i = 0 ; i < n ; i++){
        cout<<second[i]<<" ";
    }

    return 0;
}                                                           