class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i =0; i< std::size(nums) ; i++){
            for (int j = i+1; j< std::size(nums); j++){
                if(nums[i] == nums[j]){
                    return true;
                }
                else{
                    continue;
                }
                
            }
        
        }
         return false;
    }
};

