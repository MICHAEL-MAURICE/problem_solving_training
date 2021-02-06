#include<bits/stdc++.h>
#define mk make_pair
#define pk push_back
using namespace std;
typedef long long LL;
typedef pair<int,int> pi;
template<class T> bool cmax(T &x,T y){return y>x?x=y,1:0;}
template<class T> bool cmin(T &x,T y){return y<x?x=y,1:0;}
const int N=205;
string s[N];
int main(){
	ios::sync_with_stdio(false);
	int cas;
	cin>>cas;
	while(cas--){
		int n;cin>>n;
		for(int i=0;i<n;++i) cin>>s[i];
		int s0=s[0][1],s1=s[1][0],f0=s[n-1][n-2],f1=s[n-2][n-1];
		vector<pi> ans;
		if(s0==s1){
			if(f0==s0) ans.pk(mk(n-1,n-2));
			if(f1==s0) ans.pk(mk(n-2,n-1));
		}
		else if(f0==f1){
			if(s0==f0) ans.pk(mk(0,1));
			if(s1==f0) ans.pk(mk(1,0));
		}
		else{
			ans.pk(mk(0,1));
			if(f0==s1) ans.pk(mk(n-1,n-2));
			if(f1==s1) ans.pk(mk(n-2,n-1));
		}
		cout<<ans.size()<<endl;
		for(auto i:ans) cout<<i.first+1<<' '<<i.second+1<<endl;
	}
	return 0;
}
