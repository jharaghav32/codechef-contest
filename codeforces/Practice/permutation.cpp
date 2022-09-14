#include<bits/stdc++.h>
using namespace std;


int main(){
int n;
cin>>n;
vector<int>v;
v.push_back(2);
v.push_back(1);
string two = "2 1";
if(n==1)
cout<<"-1\n";
else if(n==2)
cout<<two<<"\n";
else{
    for(int i=3;i<=n;i++){
     v.push_back(i);
     swap(v[v.size()-1],v[v.size()-2]);
    }
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<v[v.size()-1]<<"\n";
}

    return 0;
}