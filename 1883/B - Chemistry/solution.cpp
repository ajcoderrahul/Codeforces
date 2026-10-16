#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;
        vector<int>a(26,0);
        for (int i = 0; i < n; i++)
        {
            a[s[i]-'a']++;
        }
        int count = 0;
        for (int i = 0; i < a.size(); i++)
        {
            count+= a[i]%2;
        }
        if(count > k+1){
            cout<<"NO
";
        }else{
            cout<<"YES
";
        }
        
        
    }
    
}