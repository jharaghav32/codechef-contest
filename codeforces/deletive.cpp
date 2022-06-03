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
    string s,t;
    cin>>s>>t;
    int slen=s.size();
    int tlen=t.size();
    if(tlen>slen){
        cout<<"NO\n";
        return;
    }
    unordered_map<char,int> mps;
    unordered_map<char,int>mpt;
    for(int i=0;i<tlen;i++){
     mpt[t[i]]++;
    }
    for(int i=0;i<slen;i++){
        mps[s[i]]++;
    }
    for(int i=0;i<tlen;i++){
        if(mps[t[i]]-mpt[t[i]]<0){
            cout<<"NO\n";
            return;
        }
    }
    for(int i=0;i<slen;i++){
        if(mpt[s[i]]>0){
         int t = mps[s[i]]-mpt[s[i]];
         if(t>0){
             s.erase(s.begin()+i);
             mps[s[i]]--;
         }
        }
    }
    int i=0,j=0;
    while(i<s.size()&&j<t.size()){
        if(s[i]==t[j]){
            i++;
            j++;
            mps[s[i]]--;
        }
        else{
            i++;
        }
    }
    if(j<t.size()){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
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