class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> temp;
        for (int i= 0; i<std::size(nums); i++){
            temp[nums[i]]=i;
        }
        for(int i=0 ; i< std::size(nums); i++){

            
            int result = target - nums[i];
            auto indexJ= temp.find(result);

            if(indexJ != temp.end() && i != indexJ->second){
                return {i, indexJ->second};
            }
            
               
            }
        
        return{};
    }
};
