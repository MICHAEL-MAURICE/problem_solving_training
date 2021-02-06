#include <bits/stdc++.h>

using namespace std;

int main()
{
   int num,sum=0,res=0,count=0;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
		res+=arr[i];
	}
	sort(arr,arr+num);
	//res=arr[num-1];
	for(int i=num-1;i>=0;i--){
		if(sum>res/2)break;
			count++;
		sum+=arr[i];

	}
cout<<count;




   /* int n,sum=0,sum2=0,counter=0;;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

      sort(arr, arr+n, greater<int>());
       for(int j=0;j<n;j++){


          if(sum2>sum/2){
        break;
       }
        counter++;
                   sum2=+arr[j];


       }

cout<<counter;*/
    return 0;
}
