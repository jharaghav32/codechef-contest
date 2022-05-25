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
    bool ans=true;
    vector<bool>changed(n,false);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]==1)
        continue;
        else if(arr[i]-arr[i-1]==2){
            if(!changed[i]){
            arr[i]=arr[i]-1;
            changed[i]=true;
            }
            else{
                ans=false;
                break;
            }
        }
        else if(arr[i]-arr[i-1]==3){
            if(!changed[i] && !changed[i-1])
            {arr[i]=arr[i]-1;
            changed[i]=true;
             arr[i-1]=arr[i-1]+1;
           changed[i-1]=true;
           }
           else{
               ans=false;
               break;
           }
        }
        else
        {
          ans=false;
          break;
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