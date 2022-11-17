// same as find min no of platform needed // 

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    
    int i=1, j=0, rooms_need=1, ans=1;
    while(i<arrive.size() && j<arrive.size()){
        if(arrive[i]<= depart[j]){
            rooms_need++;
            i++;
        }
        else{
            rooms_need--;
            j++;
        }
        ans= max(ans, rooms_need);
    }
    if(K>=ans) return true;
    return false;
}
