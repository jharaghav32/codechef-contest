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
   ll arr[n];
   for(ll i=0;i<n;i++){
       cin>>arr[i];
   }
   ll count=0;
    for(ll i=0;i<n-1;i++){
       if(arr[i]>arr[i+1]){
       swap(arr[i],arr[i+1]);
       count++;
       }
   }
   if(count>1)   
   cout<<"No"<<endl;
   else
   cout<<"Yes"<<endl;
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