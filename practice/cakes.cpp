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
ll gcd(ll a,ll b){
    if(b==0)return a;
    return gcd(b,a%b);
}
void solved(){
    ll n,m;
    cin>>n>>m;
   if(m==0){
       if(n==1)
       cout<<"Yes\n";
       else
       cout<<"No 1\n";
       return;
   }
   if(m==1){
       cout<<"Yes\n";
       return;
   }
   ll g=gcd(n,m);
   ll ans = n/g;
   if(ans !=n){
       cout<<"No "<<ans<<"\n";
   }
   else
   cout<<"Yes\n";

    
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