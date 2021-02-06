#include <bits/stdc++.h>

using namespace std;
const int N=1e5;
vector<int>adj[N];
int visit[N];
int from,to;
vector<int>ans;
void topo(int src){
visit[src]=1;
for(auto ch:adj[src]){
    if(!visit[ch])
        topo(ch);
}
ans.push_back(src);

}
int n,e;
int main()
{
    while(cin>>n>>e&&(n!=0||e!=0)){

for(int i=1;i<=e;i++){

       if(from!=0&&to!=0) cin>>from>>to;
        adj[from].push_back(to);}

         for(int i=1;i<=e;i++){
        if(!visit[i])
            topo(i);
    }

     reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    }



    return 0;
}
