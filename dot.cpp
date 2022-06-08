#include<bits/stdc++.h>
using namespace std;
void fun(int d,int e,int f){
    d *= 5;
    e *=3;
    f *=3;
}

int main(){
    int a=5,b=3,c=3;
    fun(a,b,c);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}