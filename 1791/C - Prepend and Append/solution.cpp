#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        int i = 0;
        int j= a.size()-1;
        int ans = n;
        while (i <= j)
        {
            if(a[i] != a[j]){
                ans -= 2;
            }else{
                break;
            }
                i++;
                j--;
            
        }
        cout<<ans<<endl;
    }
    
}