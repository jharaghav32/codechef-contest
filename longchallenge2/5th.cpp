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
    int arr[n+1];
    int lind=n-1;
     int rind=n-2;
     int lno=n;
     int rno=1;
     while(lind>=0){
        arr[lind]=lno;
        lno--;
        lind= lind-2;
     }
     while(rind>=0){
        arr[rind]=rno;
        rno++;
        rind=rind-2;
     }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<"\n";
    
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