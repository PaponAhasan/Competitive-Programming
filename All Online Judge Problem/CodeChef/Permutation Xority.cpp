/*
    author: __psyche__
    created: 2022-02-23 04:55:49
*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define LD long double
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define mt make_tuple

#define Precision(a) cout << fixed << setprecision(a)
#define sum(a) (accumulate((a).begin(), (a).end(), 0ll))
#define mine(a) (*min_element((a).begin(), (a).end()))
#define maxe(a) (*max_element((a).begin(), (a).end()))
#define mini(a) (min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a) (max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a,x) (lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a,x) (upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define fill(a,x) (memset(a,x,sizeof a))
#define TF(ok) (printf(ok>0 ? "YES\n" : "NO\n"))
#define REP(i,a,b) (for (int i = a; i <= b; i++))
#define max(x, y) (y-x >> 31 & (x^y) ^ y)
#define min(x, y) (y-x >> 31 & (x^y) ^ x)
#define all(x) ((x).begin(), (x).end())
#define filV(a,x) (fill(all(a), x))
#define search(a,key) (binary_search(all(a), key))

char Uplowch(char ch){if(ch >= 'A' &&  ch <= 'Z') ch += 32; return ch;}
char Lowupch(char ch){if(ch >= 'a' &&  ch <= 'z') ch -= 32; return ch;}
bool Isalpha(char ch){if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) return true; return false;}
int Strtoint(string str){stringstream ss(str);int x = 0;ss >> x ;return x ;}
string Intostr(int x){stringstream ss; ss << x; string str = ss.str(); return str;}
inline bool isPalindrome(const string& s) {return std::equal(s.begin(), s.end(), s.rbegin());}

#define MAXN 2000000000
#define MOD 10e9+7
#define INF 999999999999999

#define ys printf("YES\n")
#define no printf("NO\n")
#define one printf("-1\n")
#define nl printf("\n")

template<typename T_vector>
void output_vector(const T_vector &v, bool add_one = false, int start = -1, int end = -1) {
    if (start < 0) start = 0;
    if (end < 0) end = int(v.size());
 
    for (int i = start; i < end; i++)
        cout << v[i] + (add_one ? 1 : 0) << (i < end - 1 ? ' ' : '\n');
}

// LL n;
// LL x,y,z;

// char s[MAXN];
// int pref[MAXN];
 
// int Dp[10000][1000];

// LL arr[10000000],flag[MAXN];

// map<string,int>cost;
// int prime[MAXN];
// int cnt[MAXN];
// unsigned LL n = MAXN;

vector<tuple<int,int,int>> t;
vector<pair<int,int>> v;
vector<unsigned LL>vec;
vector<int>::iterator it;   
auto f = [] (int a, int b) -> int { return a + b; };

multimap<int, char> MM;
multimap<int,char>::iterator Mit;
void Sort(map<char, int>& M)
{
    for (auto& it : M) {
        MM.insert({ it.second, it.first });
    }
}

int highest_bit(unsigned x) {
    return x == 0 ? -1 : 31 - __builtin_clz(x);
}

void run_case(){
   LL n;
   cin>>n;
   
   if(n==2){
       cout<<"-1"<<"\n";
       return;
   }
   if(n%2){
      for(int i=n;i>=1;i--){
        cout<<i<<" ";
      }
      cout<<"\n";
   }
   else{
       LL x = n-3;
       for(int i=1;i<=x;i++){
           cout<<i<<" ";
       }
       cout<<n<<" "<<n-2<<" "<<n-1<<"\n";
   }
   
}

void FastIO(){
	ios_base :: sync_with_stdio (false);
  	cin.tie(NULL);
	cout.precision(20);
}

void FileIO(){
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
}

LL C = 0;
void Case(){
    cout<<"Case "<<++C<<": ";
}

void TestCase(){
     LL tc = 1;
     cin >> tc;
     while (tc--){
        //Case();
        run_case();
     }
}

int main()  
{
    FastIO();
    FileIO();
    TestCase();
    return 0;
}
