#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
 
        }
        long long oldsum = 0;
        for (int i = 0; i < n; i++)
        {
            oldsum += a[i];
        }
        vector<long long>prefixSum(n+1,0);
        for (int i = 1; i <= n; i++)
        {
            prefixSum[i] = prefixSum[i-1]+a[i-1];
        }
        while (q--)
        {
            long long l,r,k;
            cin>>l>>r>>k;
            long long sumremove = prefixSum[r]-prefixSum[l-1];
            long long sumadd = (r-l+1)*k;
            long long ans = oldsum - sumremove +sumadd;
            if(ans % 2 == 1){
                cout<<"YES
";
            }else{
                cout<<"NO
";
            }
        }
        
        
        
        
    }
}