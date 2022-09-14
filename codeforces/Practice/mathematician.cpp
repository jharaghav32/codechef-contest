#include<bits/stdc++.h>
using namespace std;
int main(){
int m,n;
cin>>m>>n;

string ans="";
while(m){
    int digm = m%10;
    int dign = n%10;
    if(digm!=dign)
    ans = "1"+ans;
    else
    ans = "0"+ans;
    n= n/10;
    m=m/10;
}
cout<<ans<<"\n";

    return 0;
}