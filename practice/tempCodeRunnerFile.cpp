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
    stringstream str(s);
    string a,b;
    str>>a;
    str>>b;
    stack<char>sta;
    stack<char>stb;
    int lena = a.size();
    int lenb=b.size();
    for(auto c: a){
        sta.push(c);
    }
    for(auto c:b){
        stb.push(c);
    }
    map<char,int>mp;
    mp['M']=1;
    mp['S']=0;
    mp['L']=2;
    if(a[lena-1]!=b[lenb-1]){
        int elma = a[lena-1];
        int elmb = b[lenb-1];
        if(mp[elma]>mp[elmb])
        {
            cout<<">\n";
        }
        else
        cout<<"<\n";
    }
    else{
        if(lena>lenb)
        cout<<">\n";
        else if(lena<lenb)
        cout<<"<\n";
        else
        cout<<"=\n";
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