#include<bits/stdc++.h>
using namespace std;


int main(){
int n;
cin>>n;
while(n--){
    string s;
    cin>>s;
    int n = s.size();
    if(n>10){
    int k = n-2;
    string num="";
    while(k){
        int rem =k%10;
        num=to_string(rem)+num;
        k=k/10;
    }
    string ans  = s[0]+num+s[n-1];
    cout<<ans<<"\n";
    }
    else
    cout<<s<<"\n";
}


    return 0;
}