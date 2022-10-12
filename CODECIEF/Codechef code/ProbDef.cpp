#include <iostream>
using namespace std;
int main()
{
    int T, A1, A2 , A3 , A4, arr[4];
    cin>>T; // test case
    while (T--) 
    {
        for(int i =0 ; i<4 ;i++){   // input array of 4
            cin>>arr[i];
        }
         for(int i =0 ; i<4 ;i++){   // input array of 4
            cin>>arr[i];
        }
        for(int i =0 ; i<3 ;i++){  // selection sorting algorithm 
            for(int j=i+1; j<3; j++){
                if(arr[j]<arr[i]){
                    int temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
        if(arr[0]==arr[1]&& arr[1]==arr[2]&& arr[2]==arr[3])
        cout<<"0"<<endl;
        else if (arr[0]==arr[1]&& arr[1]==arr[2]|| arr[1]==arr[2] && arr[2]==arr[3])
        cout<<"1"<<endl;
        else 
        cout<<"2"<<endl;
    }
    
    return 0;
}
