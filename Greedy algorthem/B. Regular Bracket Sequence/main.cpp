#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    stack<char>st;
    string s;cin>>s;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else{
            if (!st.empty()&&st.top()=='('){
st.pop();

            }
            else
                st.push(s[i]);
        }

    }
cout<<s.size()-st.size();
    return 0;
}
