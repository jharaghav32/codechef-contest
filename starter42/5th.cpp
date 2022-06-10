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
    int arr[n];
    int mina[n];
    int maxa[n];
    int mini=INT_MAX;
    int maxi=INT_MIN;
    bool ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
        mina[i]=mini;
        maxa[i]=maxi;
    }
    // check of increasing and equal
    for(int i=0;i<n;i++){
        if(arr[i]==mina[i]  || arr[i]==maxa[i])
        {
            ans=true;
        }
        else
        {
            ans=false;
            break;
        }
    }
    // check for decrease and equal
    if(ans)
    cout<<"YES\n";
    else
    cout<<"NO\n";
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