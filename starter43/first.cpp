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
bool move(int n,int m,int x,int y,int ai,int aj,bool alicemove,int bi,int bj){
    if(((ai<0 || aj<0 || ai>=m || aj>=n) && alicemove) || ((bi<0 || bj<0 || bi>m || bj>=n) && !alicemove))return false;
    if(x==0 && ai==bi && aj==bj && alicemove)return true;
    if(x==0)return false;
    if(y==0)return false;
    bool aleft= move(n,m,x--,y,ai+1,aj,true,bi,bj);
    bool aright= move(n,m,x--,y,ai-1,aj,true,bi,bj);
    bool aup= move(n,m,x--,y,ai,aj-1,true,bi,bj);
    bool adown= move(n,m,x--,y,ai,aj+1,true,bi,bj);


    bool bleft= move(n,m,x,y--,ai,aj,false,bi+1,bj);
    bool bright= move(n,m,x,y--,ai,aj,false,bi-1,bj);
    bool bup= move(n,m,x,y--,ai,aj,false,bi,bj-1);
    bool bdown= move(n,m,x,y--,ai,aj,false,bi,bj+1);

    return (aleft || aright ||aup || adown) || (bleft || bup || bdown);


}
void solved(){
 int n,m,x,y;
 cin>>n>>m>>x>>y;
 if(move(n,m,x,y,0,0,true,n-1,m-1))cout<<"YES\n";
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