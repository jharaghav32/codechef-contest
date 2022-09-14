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
    /* n = 4
    1 2 3 4
      1
       n = 1 first number  1 ke alwaya kucch bhi  4
       n=2 first number on sorting  1 daal skete hai 4 1
       n=3 second number on sortig  2 ke alwa  4 1 5
       n = 4 second number 3 1 2 4     2dla kte hai 4  1  5 2
       n=5 3rd number  3 ke alqaya 4  1  5  2  6
       n=6 3rd number 4 1 5 2 6 3

       n = 1
       n=2
       n=3 2 1 3


       n = 1 1st4  
       n=2 1st 4 1 
       n=3  2nd 4 1 5 
       n=4  2nd 4 1 5 2
       n=5  3rd 4 1 5 2 6
       n=6  3rd  41 5 2 6 3
       n=7  4th  4 1 5 2 6 3 7
       n=8 5 1 6 2 7 3 8 4
       */
       int first = n/2 + 1;
       int second = 1;
       n=0;
       while(k ==n ){
        v.push_back(first);
        first++:
        n++;
        if(n==k)break;
        v.push_back(second);
        second++;
        n++;
        if(n==k)break;
        first++;
        second++;

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