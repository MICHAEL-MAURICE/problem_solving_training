#include <bits//stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {

    sort(nums.begin(),nums.end());
    return nums[nums.size()/2];
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
