#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>v;
        v.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        v.push_back(x);
        int m = v.size();
        int max_Elements = INT_MIN;
        for (int i = 1; i < m; i++)
        {
            if(i == m-1){
                max_Elements = max(max_Elements,2*(v[i]-v[i-1]));
            }else{
                max_Elements = max(max_Elements,(v[i]-v[i-1]));
            }
        }
        cout<<max_Elements<<endl;        
 
    }
    
}