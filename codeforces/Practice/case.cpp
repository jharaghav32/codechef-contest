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
    string s;
    cin>>s;
    int n = s.size();
    int low=0;
    int up=0;
    for(int i=0;i<n;i++){
        if(s[i]>=97 && s[i]<=122)
        low++;
        else
        up++;
    }
    if(low>=up){
     for(int i=0;i<n;i++)
     s[i]=tolower(s[i]);
    }
    else{
        for(int i=0;i<n;i++)
        s[i]=toupper(s[i]);
    }
    cout<<s<<"\n";
}
int main(){
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    t=1;
    while(t--){
        solved();
    }
return 0;
}