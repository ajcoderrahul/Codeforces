#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,p,q;
        cin>>n>>p>>q;
        
        if(p+q+2 <= n ||( p == q && n == p)){
            cout<<"Yes
";
        }else{
            cout<<"No
";
        }
    }
    
}