#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    vector<int>v;
    int noPlus=0;
    int one=0,two=0,three=0;
    for(int i=0;i<n;i++){
        if(s[i]=='+')
        noPlus++;
        else if(s[i]==49)
        one++;
        else if(s[i]==50)
        two++;
        else
        three++;
    }
    string ans="";
    while(one--){
        ans+= "1+";
    }
    while(two--){
        ans+="2+";
    }
    while(three--){
        ans+="3+";
    }
    ans.pop_back();
    cout<<ans<<"\n";
    return 0;
}