#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        
        vector<int>a(3);
        cin>>a[0]>>a[1]>>a[2];
        if(a[0]== a[1] || a[1] == a[2] || a[2]==a[0]){
            cout<<0<<endl;
        }else{
            int count = 0;
        sort(a.begin(),a.end());
        while (a[2] != a[1] && a[1] != a[0] )
        {
            a[0]++;
            a[2]--;
            count++;
            
        }
        cout<<count<<endl;
        
        }
    }
    
}