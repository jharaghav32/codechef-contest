// problem link:https://codeforces.com/problemset/problem/144/A


#include<bits/stdc++.h>
using namespace std;


int main(){
int n;
cin>>n;
int arr[n];
int mini =INT_MAX;
int minind;
int maxi = INT_MIN;
int maxind;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(mini>=arr[i]){
        mini=arr[i];
        minind=i;
    }
    if(maxi<arr[i]){
        maxi=arr[i];
        maxind=i;
    }
}
if(maxind==0 && minind==n-1)cout<<"0\n";
else if( minind<maxind){
    cout<<(maxind)+(n-1-minind)-1<<"\n";
}
else{
    cout<<(maxind)+(n-1-minind)<<"\n";
}

    return 0;
}