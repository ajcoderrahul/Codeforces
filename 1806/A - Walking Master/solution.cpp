#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        if(y > b){
            cout<<-1<<endl;
            continue;
        }
        int move = b-y;
        x += move;
 
        if(x < a){
            cout<<-1<<endl;
            continue;
        }
 
        move += x-a;
 
        
        cout<<move<<endl;
    }
    
}