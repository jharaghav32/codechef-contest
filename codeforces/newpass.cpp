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
 
 string arr;
 cin>>arr;
 bool digit=false,symbol=false,lowcase=false,upcase=false;
 int d=0,s=0,l=0,u=0;
for(int i=0;i<n;i++){
    int n = (int)arr[i];
    if(n==35 || n==64 || n==42 || n==38)
   { symbol=true;
    s++;
   }
    else if(n>=48 && n<=57)
  {  digit=true;
   d++;}
    else if(n>=65 && n<=90)
    {upcase=true;
    u++;}
    else
    {lowcase=true;
    l++;}
}
    if(!symbol){
        arr +='#';
        symbol=true;
    }
    if(!digit){
        arr +='1';
        digit=true;
    }
    if(!lowcase){
        arr +='a';
        lowcase=true;
    }
    if(!upcase){
        arr +='A';
        upcase=true;
    }
while(arr.size()<7){
    arr +='1';
}
for(int j=0;j<arr.size();j++){
    cout<<arr[j];
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