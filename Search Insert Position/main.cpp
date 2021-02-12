#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    nums.push_back(target);
    sort(nums.begin(),nums.end());
    int i;
    for(i=0;i<nums.size();i++)
        if(nums[i]==target)
            break ;


    return i;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
