// replace array element with the greatest on right //
// [17,18,5,4,6,1] -> [18,6,6,6,1,-1] //

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi=-1;
        for(int i=arr.size()-1;i>=0;i--)
        {
            int temp = max(maxi,arr[i]);
            arr[i] = maxi;
            maxi = temp;
        }
        return arr;
        
       
    }
};
