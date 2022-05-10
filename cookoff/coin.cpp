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
 int dp[1000007];
    int coin(vector<int>& arr ,int amount,int k){
        if(dp[amount]!=-1) return dp[amount];
        if(k == 0 ) return 0;
         
        int ans = INT_MAX-1;
        for(int co : arr){
           
            if(amount<k)
                ans = min(ans,coin(arr,amount+co,k-co)+1); 
        }
        return dp[amount]=ans;
    }
    
void solved(){
   int n,q;
   cin>>n>>q;
   vector<int>arr(n);
   
   for(int i=0;i<n;i++){
       cin>>arr[i];
   } 
   while(q--){
    int k;
    cin>>k;
    int ans =coin(arr,0,k);
    if(ans==INT_MAX-1)
    cout<<"-1\n";
    else
    cout<<ans<<"\n";

   }
}
int main(){
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
       memset(dp,-1,sizeof(dp));
    int t;
    cin>>t;
    while(t--){
        solved();
    }
return 0;
}