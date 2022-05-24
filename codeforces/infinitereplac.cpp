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
    string t;
    cin>>t;
    bool infinite=false;
    if(t=="a")
   { cout<<"1\n";
   return;}
   for(int i=0;i<t.size();i++){
       if(t[i]=='a')
       {
          infinite=true;
          break; 
       }
   }
   if(infinite){
       cout<<"-1\n";
    
   }
   else{
       ll ans = 1;
       for(int i=1;i<=s.size();i++){
           ans = (ans*2);
          
       }
       cout<<ans<<"\n";
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