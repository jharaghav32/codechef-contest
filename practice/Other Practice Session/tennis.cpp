// Problem Link:https://www.codechef.com/problems/EXUNB
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
    int arr[n+1][n+1];
    bool vis[n+1][n+1]={false};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                arr[i][j]=0;
                vis[i][j]=true;
            }
        }
    }
    if(n%2==0)
    cout<<"NO\n";
    else{
        int win = (n-1)/2;
        for(int i=1;i<=n;i++){
            int count=0;
            for(int j=1;j<=n;j++){
                if(count<win && !vis[i][j] ){
                arr[i][j]=1;
                arr[j][i]=0;
                vis[i][j]=true;
                vis[j][i]=true;
                count++;
                }
                if(count==win && !vis[i][j]){
                    arr[i][j]=0;
                    arr[j][i]=1;
                    vis[i][j]=true;
                    vis[j][i]=true;
                }
            }
        }
     cout<<"YES\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
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