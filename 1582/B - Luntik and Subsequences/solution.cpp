#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while (t--)
    {
        
    long long n;
    cin>>n;
    vector<long long>a(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long count0 = 0,count1 = 0;
    for (long long i = 0; i < n; i++)
    {   
        
        if(a[i] == 1){
            count1++;
        }else if(a[i]== 0){
            count0++;
        }
    }
    long long ans = pow(2,count0)* count1;
    cout<<ans<<endl;
    }
    
}