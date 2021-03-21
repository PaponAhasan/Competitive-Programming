class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        set<int>s;
        for(int i=0;i<arr.size()-1;i++){
            s.insert(arr[i]-arr[i+1]);
        }
        if(s.size()==1) return true;
        else return false;
    }
};