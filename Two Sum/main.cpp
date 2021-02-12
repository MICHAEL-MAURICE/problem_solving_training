#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {

    //nlogn

    vector<pair<int,int>>num2;
    vector<int>t;
    for(int i=0;i<nums.size();i++){
        pair<int,int>temp(nums[i],i);
        num2.push_back(temp);
    }
    sort(num2.begin(),num2.end());
    int i=0;
    int j=num2.size()-1;

    while(i<j){
        if(num2[i].first+num2[j].first==target){
            t.push_back(num2[i].second);
            t.push_back(num2[j].second);
            return t;
        }
        else if(num2[i].first+num2[j].first>target)--j;
        else i++;
    }
    return t;  }

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
