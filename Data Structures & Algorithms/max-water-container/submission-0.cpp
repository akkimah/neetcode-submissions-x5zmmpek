class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int left=0, right = n-1;
        int max_water=0;
        while(left<right)
        {
            int curr_height = min(heights[left],heights[right]);
            int width = right-left;
            int curr_water = curr_height*width;
            max_water=max(curr_water,max_water);
            if(heights[left]<=heights[right])
            {
                left++;
            }
            else 
            {
                right--;
            }
        }
        return max_water;

    }
};
