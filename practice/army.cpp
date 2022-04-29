// problem link:https://www.codechef.com/problems/ANUARM
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
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)cin>>a[i];
    vector<int>b(n);
    vector<int> ans(n);
    int j=0;                                              // 0 1 2 3 4 5
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans[i]=max(j,j-a[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
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