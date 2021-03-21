class Solution {
public:
    string addBinary(string a, string b) {
        string Ans;
        int r=0;
        if(b.size()<a.size())swap(a,b);
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        for(int i=0;i<a.size();i++){
            int add=((a[i]-'0')+(b[i]-'0'))+r;
            Ans.push_back((add%2)+'0');
            r=add/2;
        }
        for(int i=a.size();i<b.size();i++){
            int add=(b[i]-'0')+r;
            Ans.push_back((add%2)+'0');
            r=add/2;
        }
        if(r>0)Ans.push_back('1');
        reverse(Ans.begin(),Ans.end());
        return Ans;
    }
};

Faster Code
------------

class Solution {
public:
    string addBinary(string a, string b) {
      string res;
      int carry = 0;
      int i = int(a.size()) - 1, j = int(b.size()) - 1;
      while(i >= 0 || j >= 0 || carry > 0) {
        int x = i < 0 ? 0 : a[i--] - '0';
        int y = j < 0 ? 0 : b[j--] - '0';
        int sum = x + y + carry;
        carry = sum / 2;
        sum = sum % 2;
        res.push_back(sum + '0');
      }
      return {res.rbegin(), res.rend()};
    }
};