class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size()-1;
        int replacement=arr[n];
        for(int i=n-1;i>=0;i--)
        {
            int temp = arr[i];
            arr[i]=replacement;
            replacement = max(temp,replacement);
        }
        arr[n]=-1;
        return arr;
    }
};