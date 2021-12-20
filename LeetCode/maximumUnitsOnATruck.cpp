class Solution {
public:
    
    bool static sortcol(const vector<int> &v1,const vector<int> &v2)
    {
        return v1[1] > v2[1];
    }
        int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
         sort(boxTypes.begin(),boxTypes.end(),sortcol);
        
    
            int ans = 0;
            for(int i = 0; i < boxTypes.size() && truckSize > 0; i++)
            {
                if(truckSize >= boxTypes[i][0])
                {
                    ans = ans + boxTypes[i][1]*boxTypes[i][0];
                    truckSize -= boxTypes[i][0];
                }
                else
                {
                    ans = ans + boxTypes[i][1]*truckSize;
                    truckSize = 0;
                }
            }
        
        return ans;
    }
};