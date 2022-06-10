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
    int a[n];
    int b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    map<int,int> mp;
    bool ans=true;
    for(int i=0;i<n;i++){
        mp[a[i]-b[i]]=i;
    }
    int val=-1;
    int valindex=-1;
    int temp=0;
    int tempindex=-1;
    for(auto i:mp){
        int temp = i.first;
        int tempindex=i.second;
       if(val==-1){
           val=temp;
           valindex=tempindex;
       }
       else{
           if(temp!=val){
            if(temp<val){
                if(b[tempindex]!=0)
                ans=false;

            }
            else{
                if(b[valindex]!=0)
                ans=false;
                else{
                    val=temp;
                    valindex=tempindex;
                }
            }
           }
       }
        

    }
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