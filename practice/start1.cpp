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
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    ll ques[q];
    ll sum[n];
    ll sumi=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sumi += arr[i];
        sum[i]=sumi;
    }
    for(ll i=0;i<q;i++){
        cin>>ques[i];
    }
    ll maxi = arr[0];
    for(ll i=1;i<n;i++){
        maxi = max(maxi,arr[i]);
        arr[i]=maxi;
    }
    ll ans [q];
    for(ll i=0;i<q;i++){
        auto idx = upper_bound(arr,arr+n,ques[i])-arr;
        if(idx-1>=0)
        ans[i]=sum[idx-1];
        else
        ans[i]=0;
    }
    for(ll i=0;i<q;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";

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