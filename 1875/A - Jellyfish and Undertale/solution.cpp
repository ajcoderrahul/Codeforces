#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long>x(n);
        for (int i = 0; i < n; i++)
        {
            cin>>x[i];
        }
        long long maxi_time = b;
        for (int  i = 0; i < n; i++)
        {
            maxi_time += min(x[i],a-1);
        }
        
        cout<<maxi_time<<endl;
    }
    
}