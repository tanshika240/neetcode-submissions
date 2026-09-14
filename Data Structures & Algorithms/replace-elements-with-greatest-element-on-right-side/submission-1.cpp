class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>max;
        vector<int>index;
        int maxi=-1;
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
                max.push_back(arr[i]);
                index.push_back(i);
            }
        }
        reverse(max.begin(),max.end());
        reverse(index.begin(),index.end());
        int m=0;
        for(int i=0;i<arr.size();i++)
        {
            if(i==index[m])
            {
                m++;
                if(m<max.size())
                {
                    arr[i]=max[m];
                }
                else{
                    arr[i]=-1;
                }
            }
            else{
                arr[i]=max[m];
            }
        }
        return arr;
    }
};