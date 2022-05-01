//problem link:https://www.codechef.com/problems/BEAUTGAR
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
    int n = s.length();
   
    int countred=0;
    int countgreen=0;
    for(int i=0;i<n;i++){
        if(s[i]=='R')
        countred++;
        else
        countgreen++;
    }
    int miscount=0;
    for(int i=0;i<n;i++){
        int j=(i+1)%n;
        if(s[i]==s[j])
        miscount++;
    }
    if(n%2==0){
        if(countred==n/2)
     {
         if(miscount==0 || miscount==2)
         cout<<"yes\n";
         else
         cout<<"no\n";
     }
        else
        cout<<"no\n";
    }
    else{
        cout<<"no\n";
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