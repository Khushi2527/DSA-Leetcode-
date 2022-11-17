// If we are getting same sum twice it means that we have that sum before so subarray between that index have sum==0 //
// [4,2,-3,1,6] //
// sum at 0th index and sum at 3rd index is same so answer is yess //


class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        int sum=0;
        unordered_map<int,int>mp;
        
        for(int i=0; i<n; i++){
            sum+= arr[i];
            mp[sum]++;
            if(mp[sum]>1 || sum==0 || arr[i]==0) return true;
        }
        return false;
        
        //Your code here
    }
};
