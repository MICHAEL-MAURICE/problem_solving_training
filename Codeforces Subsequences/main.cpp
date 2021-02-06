#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    long long k;
    cin>>k;
    multiset<int>letters;
    for(int i=0;i<10;i++)
        letters.insert(1);
    long long cur=1;
    while (cur<k){
        int curval= *letters.begin();
        letters.erase(letters.begin());
        cur/=curval;
        curval++;
        cur*=curval;
        letters.insert(curval);
    }
    int index=0;
    string word="codeforces";
    for (auto  it : letters){
        for(int i=0;i<it;i++){
            cout<<word[index];
        }
    index++;
    }
    return 0;
}
