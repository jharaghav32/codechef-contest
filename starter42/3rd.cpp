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
    int one=0;
    int minone=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1)
        one++;
        else
        minone++;
    }
    if(one==minone)
    cout<<"0\n";
    else if(one>minone){
    int leftone=one-minone;
    if(leftone%2==0)
    cout<<leftone/2<<"\n";
    else
    cout<<"-1\n";
    }
    else
    cout<<"-1\n";
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