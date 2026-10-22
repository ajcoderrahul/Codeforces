#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
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
        int ans = abs(a[0]-1);
        for (int i = 1; i < n; i++)
        {
            ans = gcd(ans,abs(a[i] - (i+1)));
        }
        
        cout<<ans<<endl;
    }
    
}