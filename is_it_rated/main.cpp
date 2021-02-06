#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){

        cin>>arr1[i]>>arr2[i];

 if(arr1[i]!=arr2[i]){
            cout<<"rated";
           return 0;
        }


    }
    for(int i=1;i<n;i++){



         if(arr1[i]>arr1[i-1]){
            cout<<"unrated";
           return 0;
        }





    }
    cout<<"maybe";
    return 0;
}
