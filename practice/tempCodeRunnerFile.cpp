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
    string s;
    cin>>s;
    ll val=0;
    for(int i=0;i<n;i++){
     if(s[i]=='L')
     val+= i;
     else
     val+= ((n-1)-i);
    }
    vector<ll>v;
    ll low = 0;
    ll high=n-1;
    while(low<=high){
        if(s[low]=='L')
        v.push_back(low);
         if(s[high]=='R')
         v.push_back(high);
         low++;
         high--;
    }
    vector<ll>ans;
    for(int i=1;i<=n;i++){
        int currval=val;
        for(int j=0;j<i&&v.size();j++){
         if(s[v[j]]=='L')
         currval += ((n-1)-v[j])-v[j];
         else
         currval += v[j]-((n-1)-v[j]);
        }
        ans.push_back(currval);
    }
    for(int i=0;i<ans.size();i++){
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