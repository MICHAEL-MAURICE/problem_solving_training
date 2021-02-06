#include <bits/stdc++.h>

using namespace std;

int n;

char grid[100][101];
bool vis[100][100];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool valid(int x,int y){
return x>=0&&x<n&&y>=0&&y<n;
}
void dfs(int i,int j){
if(vis[i][j])return;
vis[i][j]=1;
for(int k=0;k<4;k++){
    int tox=i+dx[k];
    int toy=j+dy[k];

    if(!vis[tox][toy]&&valid(tox,toy)&&grid[tox][toy]!='.'){
        dfs(tox,toy);
    }
}



}


int main()
{
    int t,ans;
	scanf("%d",&t);
	for(int T=1;T<=t;T++){
		ans=0;
		memset(vis,0,sizeof vis);
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("\n");
			for(int j=0;j<n;j++)
				scanf("%c",&grid[i][j]);
		}
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				if(!vis[i][j]&&grid[i][j]=='x'){
					ans++;
					dfs(i,j);
				}
		printf("Case %d: %d\n",T,ans);
	}
}
