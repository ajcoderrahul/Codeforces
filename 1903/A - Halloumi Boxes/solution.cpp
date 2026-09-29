#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
 
    }
    vector<int> copy_v = v;
    sort(copy_v.begin(),copy_v.end());
    if (copy_v == v || k>1)
    {
        cout<<"YES
";
    }else{
        cout<<"NO
";
    }
    
    }
}