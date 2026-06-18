class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        int sum=0;
        for(string s : operations)
        {
            if(s=="C")
            {
            record.pop_back();
            }
            else if(s=="D")
            {
            record.push_back(record.back()*2);
            }
            else if(s=="+")
            {
            int n = record.size();
            record.push_back(record[n-1]+record[n-2]);
            }
            else
            {
            record.push_back(stoi(s));
            }
        }
        for(int i : record)
        {
            sum+=i;
        }
        return sum;
    }
};