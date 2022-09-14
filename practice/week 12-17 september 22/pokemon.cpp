// Problem Link : https://www.codechef.com/submit/PBATTLE?tab=statement
//Generally yaha pe hamne pehle pehle ground level pe sort kiya
// aur ground level koi na koi ek trainer aisa hoga jo sbko 
// defeat krega it means that one trainer has max value n-1 so
// here we know that max value is exactly n-1 so now we have to
// find no of trainer whose strength is n-1;
// We sort the train in increasing order of ground level
//It means the element at last has strength n-1
// and second last has strength n-2 and so on 
// so for any trainer to have max value  in water level it has greater
// then max(water level of trainer right to him) because
// trainer left to him is defeated by using ground level 
// and if he defeat the remaining with water level strength 
// then he has the max strength so we check if strength of trainer
//at water level is greater than max of all trainer right to him
// if it is we increment the no of trainer 



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int brr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
        }
	vector<pair<int,int>>ground;
	for(int i=0;i<n;i++){
	    ground.push_back({arr[i],brr[i]});
	}
	sort(ground.begin(),ground.end());
	int ans = 0;
	int maxi = INT_MIN;
  for(int i=n-1;i>=0;i--){
      if(maxi<ground[i].second){
          ans++;
      }
      maxi= max(maxi,ground[i].second);
  }
	cout<<ans<<"\n";
    }
	
	return 0;
}
