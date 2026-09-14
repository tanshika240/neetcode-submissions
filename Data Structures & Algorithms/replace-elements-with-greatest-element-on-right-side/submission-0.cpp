class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        vector<int> max;
        int maxi = -1;

        // Find maximum to the right for every element
        for(int i = arr.size() - 1; i >= 0; i--)
        {
            max.push_back(maxi);

            if(arr[i] > maxi)
            {
                maxi = arr[i];
            }
        }

        // We stored from right to left, so reverse it
        reverse(max.begin(), max.end());

        // Replace original array
        for(int i = 0; i < arr.size(); i++)
        {
            arr[i] = max[i];
        }

        return arr;
    }
};