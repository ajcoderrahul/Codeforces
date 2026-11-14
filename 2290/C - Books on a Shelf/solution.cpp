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
 
        sort(a.begin(),a.end());
        
        int distinct = 0;
        int duplicate = 0;
 
        for (int i = 0; i < n; i++) {
            if (i == 0 || a[i] != a[i - 1]) {
                distinct++;
            }
            else if (i == 1 || a[i] != a[i - 2]) {
                duplicate++;
            }
        }
 
        cout << distinct + duplicate << endl;
        
         for (int i = 0; i < n; i++) {
        if (i == 0 || a[i] != a[i - 1]) {
            cout << a[i] << " ";
        }
    }
 
    
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1 || a[i] != a[i + 1]) {
            continue;
        }
        cout << a[i] << " ";
    }
    
        cout<<endl;
    }
    
}