#include <bits/stdc++.h>

using namespace std;
int n,k;
bool valid(int x,int y){

return x>-1&&x<n&&y>-1&&y<k;
}
int main()
{
    char c,N,W,E,S;


    cin>>n>>k>>c;
    char arr[n][k];
    set<char>st;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            if(arr[i][j]==c){
               S=arr[i+1][j];
               N=arr[i][j+1];
               W=arr[i-1][j];
               E=arr[i][j-1];
               if(S!=c&&S!='.'&&valid(i+1,j)){
                st.insert(S);
               }
               if(N!=c&&N!='.'&&valid(i,j+1)){
                st.insert(N);
               }
               if(W!=c&&W!='.'&&valid(i-1,j)){
                st.insert(W);
               }
               if(E!=c&&E!='.'&&valid(i,j-1)){
                st.insert(E);
               }
            }
        }
    }
    cout<<st.size();
    return 0;
}
