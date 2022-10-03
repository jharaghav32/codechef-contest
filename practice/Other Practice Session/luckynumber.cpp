// problem LInk:https://www.codechef.com/problems/HP18
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
    int N,b,a;
    cin>>N>>b>>a;
    int arr[N];
    bool bobi=true;
    bool win;
    int alice=0;
    int bob=0;
    int both=0;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        if(arr[i]%b==0 && arr[i]%a==0)
        both++;
        else if(arr[i]%b==0)
        bob++;
        else if(arr[i]%a==0)
        alice++;
    }
    
    if(both){
        bob++;
    }
     if(alice>=bob)
    cout<<"ALICE\n";
    else
    cout<<"BOB\n";

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