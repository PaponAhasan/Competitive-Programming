⚡🤖🎨⛏️
# GCD && LCM :-->

template <typename T> T gcd(T a,T b){
    if(a < 0)return gcd(-a,b);
    if(b < 0)return gcd(a,-b);
    return (b == 0)?a:gcd(b,a%b);
}
template <typename T> T lcm(T a,T b) {
    if(a < 0)return lcm(-a,b);
    if(b < 0)return lcm(a,-b);
    return a*(b/gcd(a,b));
}

#BIG MOD :-->

int bigmod( int a, int p, int M ) { // finds a ^ p MOD M
    int res = 1, x = a;
    while( p ) {
        if( p & 1 ) res = (res * x) % M;
        x = (x * x) % M;
        p >>= 1;
    }
    return res;
}

long long int power (long long int a, long long int b) {
    long long int ans=1ll;
    while(b) {
        if(b&1)ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b=b/2;
    }
    return ans;
}

#Sieve :-->

bool mark[1000000];
void sieve()
{
    memset(mark,true,1000000);
    mark[1]=false;
    for (int i=4; i<1000000;i+=2)
        mark[i]=false;
    for (int i=3;i<1000;i+=2)
        if (mark[i])
            for (int j=i*i;j<1000000;j+=i*2)
                mark[j]=false;
    return;
}

int main(){
    int n;
    cin>>n;
   if (mark[n]) cout<<"Prime"<<"\n";
}

#power(x,n) :-->

int power(int x, unsigned int y)
{ 
    int temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return temp*temp; 
    else
        return x*temp*temp; 
}

#Sieve :-->

#define mx 1000000
bool isp[mx + 10] ;
vector <long long> prime ;
void sieve(){
    for(int i = 4 ; i <= mx ; i += 2)
        isp[i] = true;
    for(int i = 3 ; i*i <= mx ; i += 2)
        if(!isp[i])
            for(int j = i*i ; j <= mx ; j +=(i+i))
                isp[j] = true;
    prime.push_back(2);
    for(int i = 3 ; i <= mx ; i += 2)
        if(!isp[i])
            prime.push_back(i);
}

	
vector<int> v = {1,3,5,8,12};

auto it=lower_bound(v.begin(),v.end(),5);
  cout<<*it<<"\n";  // output: 5 >=
auto it=upper_bound(v.begin(),v.end(),5);
  cout<<*it<<"\n";  // output: 8 >

cout<<distance(v.begin(),it)<<"\n";   cout<<(it-v.begin());  // output: 3 

int upper1 = upper_bound(arr, arr+5, 35) - arr; 
int upper2 = upper_bound(arr, arr+5, 45) - arr;

vector<int>v = {1,3,5,8,12};
	

auto it=v.begin()-upper_bound(v.begin(),v.end(),8);  cout<<it<<"\n";

  // 1... 
   
it=v.begin()-lower_bound(v.begin(),v.end(),8); 	     cout<<it<<"\n";
  // 0...


it=v.end()-upper_bound(v.begin(),v.end(),8);         cout<<it<<"\n";

  // 0...
 
it=v.end()-lower_bound(v.begin(),v.end(),8); 
	     cout<<it<<"\n";  // 1...

# vector return :-->

vector<int>f(string q){
    int sz = (int)q.size();
    vector<int>w(sz,-1);
    for(int i=0;i<sz;i++){
      -- ----
      -- -- --
    }
    return w;
}

int main() {
    string q; cin>>q;
    vector<int>w = f(q);
}


ll StringToInt(string a) 
{ 
    char x[100]; 
    ll res; 
    strcpy(x, a.c_str()); 
    sscanf(x, "%lld", &res); 
    return res; 
}
string IntToString(ll a) 
{ 
    char x[100]; 
    sprintf(x, "%lld", a); 
    string s = x; 
    return s; 
} 