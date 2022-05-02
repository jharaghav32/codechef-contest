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
//    ll n,b;
//    cin>>n>>b;
//    ll ans =0;
//    ll val;
//    ll nmoves=n/b;
//    ll first;
//    while(nmoves){
//     first=(n-nmoves*b);
//     val = nmoves*first;
//     ans = max(val,ans);
//     nmoves--;
// another approach
ll n,b;
   cin>>n>>b;
    ll nmoves=((n/(2*b)));
    ll nmoves1= nmoves+1;
   if(nmoves>n){
       nmoves=0;
   }
   if(nmoves1>n)
   nmoves1=0;
   ll ans;
  
   ans = max(nmoves1*(n-nmoves1*b), nmoves*(n-nmoves*b));
   
   
   
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