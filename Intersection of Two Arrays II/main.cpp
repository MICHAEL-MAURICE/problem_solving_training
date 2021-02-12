#include <bits//stdc++.h>
using namespace std;
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int>res;
    map<int,int>m;
    for(int i:nums1){
        m[i]++;
    }
    for(int i:nums2){
        if(m[i]>0){

            --m[i];
            res.push_back(i);

        }
    }

    return res;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
