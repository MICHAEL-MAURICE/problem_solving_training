#include <bits/stdc++.h>

using namespace std;
int arr[5];
bool zero=false;
void emla(){
for(int i=0;i<5;i++){
    cin>>arr[i];
    if(arr[i]==0)
        zero=true;
}
}

bool solve(int total,int pos){

if(pos==5){
    return total==23;
}
return solve(total+arr[pos],pos+1)||solve(total-arr[pos],pos+1)||solve(total*arr[pos],pos+1);

}


int main()
{

    while(emla(),zero==false){

        sort(arr,arr+5);
        bool pos=false;
        do{
            pos=solve(arr[0],1);
            if(pos)
                break;

        }
        while(next_permutation(arr,arr+5));
        if(pos)
          cout << "Possible\n";
        else
            cout << "Impossible\n";


    }

    return 0;
}
