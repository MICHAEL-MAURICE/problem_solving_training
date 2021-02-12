#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {


    int n=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            n++;
        }
    }

    while(n--)
        for(int i=0;i<nums.size()-1;i++){

            if(nums[i]==0){
                swap(nums[i],nums[i+1]);
            }
        }

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
