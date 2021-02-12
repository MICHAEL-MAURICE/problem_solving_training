#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
    int r=0;

    for(int i=0;i<nums.size();i++){
        r ^=nums[i];
    }
    return r;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
