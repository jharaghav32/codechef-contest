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
ll cmp(pair<ll,ll>a,pair<ll,ll>b){
    if(a.first==b.first)
    return a.second<b.second;
    return a.first<b.first;
}
void solved(){
    int n,r;
    cin>>n>>r;
    int cost[n],discount[n];
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }
    for(int i=0;i<n;i++){
        cin>>discount[i];
    }
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        v.pb({cost[i]-discount[i],cost[i]});
    }
    int count =0;
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        if(v[i].second<=r){
           count++;
           r=r-v[i].first;
        }
    }
    cout<<count<<endl;
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