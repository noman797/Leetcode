class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        list<int>li;
        for(auto x:nums)
        {
            li.push_back(x);
        }
        li.sort();
        li.unique();
        nums.clear();
        for(auto x:li)
        {
            nums.push_back(x);
        }

        return nums.size();
        
    }
};
