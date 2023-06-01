//
// Created by Spencer on 6/1/23.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        //Create a hashmap to store each value in the nums array and
        //it's location.
        map<int,int> map;

        for(int index = 0; index<nums.size(); index++){
            if(map.find(target-nums[index]) != map.end()){
                vector<int> result;
                result.push_back(index);
                result.push_back(map[target-nums[index]]);
                return result;
            }
            else{
                map[nums[index]] = index;
            }
        } return vector<int>();
    }
};

int main(int twoSum){

    vector<int> nums;

    nums.insert(2,7,11,15);

    int target = 9;

    Solution solved;
    return 0;
}

