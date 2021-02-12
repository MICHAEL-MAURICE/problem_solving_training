#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int>n1;
    set<int>n2;
    vector<int>nu;
    set<int>::iterator it;
    set<int>::iterator it2;

    for (int i=0;i<nums1.size();i++){
        n1.insert(nums1[i]);
    }

    for (int i=0;i<nums2.size();i++){
        n2.insert(nums2[i]);
    }
    for( it=n1.begin();it!=n1.end();it++){

        for(it2=n2.begin();it2!=n2.end();it2++){
            if(*it==*it2){
                nu.push_back(*it);
            }

        }

    }

    return nu;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
