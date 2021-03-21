class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ret; 
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(i!=j and words[j].find(words[i]) != string::npos){
                    ret.push_back(words[i]);
                    break;
                }
             }
          }
    
       return ret;
    }
};