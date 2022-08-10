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
    int n;
    cin>>n;
    vector<string>v(n);
    vector<int>ans(n,0);
    unordered_map<string,int> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    for(int i=0;i<n;i++){
        int ns = v[i].size();
        for(int j=1;j<ns;j++){
         string str = v[i].substr(0,j);
         string str1=v[i].substr(j);
         if(mp.find(str)!=mp.end()&& mp.find(str1)!=mp.end())
         {
            ans[i]=1;
         }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i];
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