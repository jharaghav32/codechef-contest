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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans=0;
    ll prev=INT_MAX;
    for(int i=n-1;i>=0;i--){
     if(prev>arr[i]){
        ans+=arr[i];
        prev=arr[i];
     }
    else if(prev==arr[i]){
        ans+=arr[i]-1;
        prev=arr[i]-1;
    }
    else{
        if(prev>1){
      ans+=prev-1;
      prev=prev-1;
        }
    }
    }
    cout<<ans<<"\n";
}
int main(){
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t=1;
    //cin>>t;
    while(t--){
        solved();
    }
return 0;
}