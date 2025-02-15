class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                v1.push_back(0);
            }
        }
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                v2.push_back(nums[i]);
            }
        }

        nums.clear();
        for (int x : v2)
        {
            nums.push_back(x);
        }
        for (int x : v1)
        {
            nums.push_back(x);
        }
    }
};
