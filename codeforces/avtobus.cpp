// problem link:https://codeforces.com/problemset/problem/1679/A

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
    if(n<4 || n%2!=0)
    cout<<"-1\n";
    else{
        n = n/2;
        // for minimum me 3 jitna jyada hoga
        if(n%3==0)
        cout<<n/3<<" ";
        else
        cout<<(n/3)+1<<" ";
        // for maximum me 2 jitna jyada ho
        cout<<n/2<<"\n";

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