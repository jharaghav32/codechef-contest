#include<bits/stdc++.h>
using namespace std;


int main(){
 long long n;
 cin>>n;
 int count=0;
 while(n){
    long long  digit =n%10;
    if(digit==4 || digit ==7){
        count++;
    }
    n= n/10;
 }
 if(count==4 || count==7)
 cout<<"YES\n";
 else
 cout<<"NO\n";





    return 0;
}