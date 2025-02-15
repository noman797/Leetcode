class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mn=INT_MAX;
       int mx=0;
       for(auto x:prices)
       {
        mn=min(mn,x);
        mx=max(mx,x-mn);
       }
       return mx;
    }
    
};
