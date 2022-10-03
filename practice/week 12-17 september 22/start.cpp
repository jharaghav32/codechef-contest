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
    int r,g,b;
    cin>>r>>g>>b;
    int color=0;
    if(r>=1){
    color++;
    r--;
    }
    if(g>=1){
        color++;
        g--;
    }
    if(b>=1){
        color++;
        b--;
    }
    if(r>=1 && g>=1){
        color++;
        r--;
        g--;
    }
    if(r>=1 && b>=1){
        color++;
        r--;
        b--;
    }
    if(g>=1 && b>=1){
        color++;
        g--;
        b--;
    }
    cout<<color<<"\n";
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