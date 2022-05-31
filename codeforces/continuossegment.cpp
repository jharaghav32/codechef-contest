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
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int count2=0;
    int count3=0;
    bool count4=false;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]==1)continue;
     else if(arr[i+1]-arr[i]==2)
     count2++;
     else if(arr[i+1]-arr[i]==3)count3++;
     else{
         count4=true;
         break;
     }
    }
    if(count4)cout<<"NO\n";
    else if(count2<=2 && count3==0)
    cout<<"YES\n";
    else if(count3<=1&&count2==0)
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