/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// problem link:https://codeforces.com/contest/1676/problem/D
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
         int mini=INT_MIN;
        int arr[n+1][m+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int rud=min(i-1,m-j);
                int rld=min(n-i,m-j);
                int lud=min(i-1,j-1);
                int lld=min(n-i,j-1);
                int sum=0;
                 int row=i-1;
                    int col=j+1;
                while(rud--){
                   sum += arr[row][col];
                   row--;
                   col++;
                    
                }
                row=i+1;
                col=j+1;
                while(rld--){
                    sum += arr[row][col];
                    row++;
                    col++;
                }
                row=i-1;
                col=j-1;
                while(lud--){
                    sum += arr[row][col];
                    row--;
                    col--;
                }
                row=i+1;
                col=j-1;
                while(lld--){
                    sum += arr[row][col];
                    row++;
                    col--;
                }
                sum += arr[i][j];
                mini=max(mini,sum);
            }
        }
        cout<<mini<<"\n";
    }

    return 0;
}