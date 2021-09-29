#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> umap;
        int difference;

        for(int i = 0; i < nums.size(); i++ ){
            difference = target - nums.at(i);
            if(umap.find(difference) != umap.end()) {
                vector<int> v{umap[difference], i};
                return v;
            } else {
                umap[nums.at(i)] = i;
            }
        }

        return vector<int> {};
    }
};

int main()
{
    Solution v1;
    vector<int> nums;  //2,7,11,15
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);

    int target =9;
    v1.twoSum(nums, target);
    
    return 0;
}