#include <bits/stdc++.h>
using namespace std;
int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int sum=0;
    for(int i=0;i<nums.size();i+=2){
        sum+=nums[i];
    }

    return sum;

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
