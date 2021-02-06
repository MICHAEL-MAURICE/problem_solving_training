#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;cin>>n;
    vector<int>arr(n);
    for(auto &it:arr ){
        cin>>it;
    }
    vector<int>ans;
    for(int i=0;i<n && ans.empty();i++){
        for(int j=0;j<n&& ans.empty();j++){
            for(int k=0;k<n&&ans.empty();k++){
                if(i!=j&&j!=k&&i!=k){
                    if(arr[i]==arr[j]+arr[k])
                        ans={i,j,k};

                }
            }
        }
    }
    if(ans.empty())cout<<"-1";
    for (auto &it:ans)
        cout<<it+1<<" ";
    return 0;
}
