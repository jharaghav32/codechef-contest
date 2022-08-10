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
    ll x,y;
    cin>>x>>y;
    ll ans;
    if(x==y){
        cout<<x<<"\n";
    }
    else if(x==0 || y==0){
        cout<<"-1\n";
    }
    else if(x>y){
        ll diff= x-y;
        if(diff<=y){
            
            ans=(y-diff)+1 + (2*diff);
            cout<<ans<<"\n";
        }
        else{
            ll a =x;
            ll b =y;
            ll op=0;
            while(a>2*b){
             b = b*2;
             op++;
            }
            diff = (a-b);
            ans=op+1+(b-diff)+(2*diff);
            cout<<ans<<"\n";
        }
    }
    else{
        ll diff = y-x;
        if(diff<=x){
            ans=(x-diff)+1+(2*diff);
            cout<<ans<<"\n";
        }
        else{
         ll a =x;
            ll b =y;
            ll op=0;
            while(b>2*a){
             a = a*2;
             op++;
            }
            diff = (b-a);
            ans=op+1+(a-diff)+(2*diff);
            cout<<ans<<"\n";
    }
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