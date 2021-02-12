#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
    //o(n)
    int max_l=0;
    int i=0;
    int cur_l=0;
    int n=nums.size();
    while(i<n){
        if(nums[i]==1){
            cur_l++;
            max_l=max(max_l,cur_l);
            i++;
        }
        else{
            ++i;
            cur_l=0;
        }
    }
    return max_l;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
