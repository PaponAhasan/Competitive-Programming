class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int minright = 1e4,maxleft = 0,mx = 0;
        for(int i=0;i<right.size();i++){
            minright = min(minright,right[i]);
            mx = max(mx,right[i]);
        }
        for(int i=0;i<left.size();i++)  maxleft = max(maxleft,left[i]);
        return min(n - minright,maxleft) + abs((n - minright) - maxleft);
    }
};