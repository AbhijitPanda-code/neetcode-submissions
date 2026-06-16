class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size()-1;
        int replacement=0;
        for(int i=n;i>=0;i--)
        {
            int temp = arr[i];
            arr[i]=replacement;
            replacement = max(temp,replacement);
        }
        arr[n]=-1;
        return arr;
    }
};