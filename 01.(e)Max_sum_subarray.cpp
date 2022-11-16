int Solution::maxSubArray(const vector<int> &A) {
    int currSum=0;
    if(A.size()==1) return A[0];
    int maxSum = INT_MIN;
    for(int i=0; i<A.size(); i++){
        currSum+= A[i];
        maxSum = max(currSum, maxSum);
        if(currSum<0) currSum=0;
    }
    return maxSum;
}
