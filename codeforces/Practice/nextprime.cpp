// problem link:https://codeforces.com/problemset/problem/80/A

#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
if (n==2 && m==3) cout<<"YES\n";
else if (n==3 && m==5) cout<<"YES\n";
else if (n==5 && m==7) cout<<"YES\n";
else if (n==7 && m==11) cout<<"YES\n";
else if (n==11 && m==13) cout<<"YES\n";
else if (n==13 && m==17) cout<<"YES\n";
else if (n==17 && m==19) cout<<"YES\n";
else if (n==19 && m==23) cout<<"YES\n";
else if (n==23 && m==29) cout<<"YES\n";
else if (n==29 && m==31) cout<<"YES\n";
else if (n==31 && m==37) cout<<"YES\n";
else if (n==37 && m==41) cout<<"YES\n";
else if (n==41 && m==43) cout<<"YES\n";
else if (n==43 && m==47) cout<< "YES\n";
else   cout<< "NO\n";

    return 0;
}
