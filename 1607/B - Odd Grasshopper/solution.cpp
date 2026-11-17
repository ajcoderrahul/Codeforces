#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long s, d;
        cin>>s>>d;
        long long final;
        if(d%4 == 0){
            final = 0;
        }else if(d%4 == 1){
            final = -d;
        }else if(d%4 == 2){
            final = 1;
        }else if(d%4  == 3){
            final = d+1;
        }
        if(s % 2 == 0){
            final = s+final;
        }else{
            final = s-final;
        }
        cout<<final<<endl;
    }
    
}