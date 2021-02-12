#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int i=0;
    for(int j=0;j<nums.size();j++){
        if(nums[j]!=val){
            nums[i]=nums[j];
            i++;
        }

    }

    return i;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
