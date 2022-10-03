#include<bits/stdc++.h>
using namespace std;



int main(){
     ios_base::sync_with_stdio(false);     // Here we add these so that we use cin and cout for faster input/output so instead of scanf and printf if we use cin and cout we have to include this it is speeding up the input output in c++;
    cin.tie(NULL); 
    long long t;
    cin>>t;
    
    while(t--){
         long long n;
    cin>>n;
    long long  ans=3;
    if(n==1 || n==2)
    cout<<"1\n";
    else if (n==3)   // Always prefer to use "\n" instead of endl because it is faster than endl and  so that your chance of getting tle due to this reason is avoided
    cout<<"3"<<endl;  // 1 2 0
    else{
     ans = ans + (n*(n-3));
        cout<<ans<<"\n";
    }
    
    }
    return 0;
}