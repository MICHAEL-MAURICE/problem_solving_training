#include <bits/stdc++.h>

using namespace std;

int arr[27]={0},n,c=0;
string s;
int main()
{

   cin>>n>>s;
    for(int i=0;i<s.length();i++){
        arr[s[i]-'a']++;

        if(arr[s[i]-'a']>1){
            c=1;
            break;
        }

    }

   if(c==1||n==1){
    printf("YES\n");}
    else{
         printf("NO\n");
    }

    return 0;
}
