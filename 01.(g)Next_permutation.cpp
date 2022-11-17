class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),k,l;
         
        for(k=n-2 ; k>=0 ; k--){                // find ind1 //
            if(nums[k] < nums[k+1]) break;
        }
        if(k<0)                                 // if the string is sorted in descending order it means it is the last permutation//
            reverse(nums.begin() ,nums.end());  // reverse the string to ge first permutation //
        else{
            for(l = n-1; l>k ;l--){             // find ind2 //
                if(nums[l] > nums[k]) break;
            }
                swap(nums[k], nums[l]);         // swap ind1 and ind2 element //
            reverse(nums.begin()+k+1 ,  nums.end());      // reverse the array from ind+1 to last //
        }

        
    }
    
};
