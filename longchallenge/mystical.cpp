#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
const int Mod = 1'000'000'007;
const int N = 3e5, M = N;
ll lcm(int a,int b){
    ll a1=a;
    ll b1=b;
    return a1*b1/__gcd(a1,b1);
}
void solved(){
    ll n;
    cin>>n;
    ll arr[n];
    ll d[n+1][33];
   for(ll i=1;i<=n;i++){
       int temp;
       cin>>temp;
       for(int j=0;j<32;j++){
           d[i][j]=d[i-1][j];
       }
       ll pwr=32;
       if(temp!=0)pwr=floor(log2(temp));
       dp[i][pwr]++;
   }
   ll q;
   cin>>q;
   while(q--){
       ll l,r,x;
       cin>>l>>r>>x;
       ll count=0;
       ll pwr=32;
       if(x!=0)pwr=floor(log2(x));
       count=d[r][pwr]-d[l-1][pwr];

       ll ans =(r-l+1)-count;
       cout<<ans<<"\n";

   }
}
int main(){
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin>>t;
    while(t--){
        solved();
    }
return 0;
}