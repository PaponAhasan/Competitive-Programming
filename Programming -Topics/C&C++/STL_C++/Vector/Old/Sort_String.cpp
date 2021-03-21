#include<bits/stdc++.h>
using namespace std;


// Driver program to test above function

bool check(string a, string b){
    return a.length() == b.length() ? a > b : a.length() > b.length();
}

int main()
{

    long long n;
    cin >> n;

    vector<string>vec;

    for(long long i=0; i<n; i++){
        string str;
        cin>>str;
        vec.push_back(str);
    }

    sort(vec.begin(), vec.end(),check);

     for(int i = vec.size() - 1; i >= 0; i--){
        cout << vec[i]<<"\n";
    }

    return 0;
}

