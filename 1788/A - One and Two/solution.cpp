#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int count = 0;
    for (int  i = 0; i < n; i++)
    {
        if(a[i] == 2){
            count++;
        }
    }
    int currentCount = 0,ans = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 2){
        currentCount++;
        }
        if(currentCount == count-currentCount){
            ans = i+1;
            break;
        }
    }
    cout<<ans<<endl;
    
}
}