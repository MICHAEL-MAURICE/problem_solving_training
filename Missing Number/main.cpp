#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
    int n=0;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=i+1){
            n=i+1;

        }
    }
    return n;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
