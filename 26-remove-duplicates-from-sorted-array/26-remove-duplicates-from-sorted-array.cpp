class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //set<int>s;
        if(nums.size()==1)return 1;
        int j=0;
        for(int i=1; i<nums.size(); i++ ){
            if(nums[j] != nums[i]){
                j++;
                nums[j]=nums[i];
            }
            else{
                continue;
            }
        }
        
        return j+1;
        
        
    }
};