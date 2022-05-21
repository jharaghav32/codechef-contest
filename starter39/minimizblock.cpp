// Problem Link:https://www.codechef.com/START39D/problems/MINBLOCK

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
int dfs(vector<vector<pair<int,int>>>&adj,int element,vector<int>&ans,int parent,bool block){
    int nodes=1;
    for(auto i:adj[element]){
        if(i.first!=parent){
            int x = dfs(adj,i.first,ans,element,(block || i.second));
            nodes += x;
            if(i.second==1 && !block){
                ans.push_back(x);
            }
        }
    }
    return nodes;
}
void solved(){
    int n,k;
    cin>>n>>k;
    vector<vector<pair<int,int>>> adj(n+1);
    for(int i=1;i<n;i++){
     int u,v,x;
     cin>>u>>v>>x;
     adj[u].push_back({v,x});
     adj[v].push_back({u,x});
    }
    vector<int>ans;
    dfs(adj,1,ans,-1,false);
    sort(ans.begin(),ans.end(),greater<int>());
    int infected =n;
    int count=0;
    for(int i=0;i<ans.size()&&infected>k;i++){
    infected = infected-ans[i];
    count++;
    }
    if(infected>k)
    cout<<"-1\n";
    else
    cout<<count<<"\n";
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