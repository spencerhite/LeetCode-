//Decided I'm not going to bother recreating each instance of a LeetCode problem in IDE rather,
//I'm just going to upload the solution from each problem in all future repo entires. 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int> dupe;

        for(int i = 0; i<nums.size(); i++){
            if(dupe.find(nums[i]) != dupe.end()){
                return true;
                
            }
            else{
            dupe.insert(nums[i]);}
        } return false;
    }
};
