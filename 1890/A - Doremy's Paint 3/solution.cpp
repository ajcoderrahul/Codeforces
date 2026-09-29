#include<bits\stdc++.h>
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
        
        map<long long , long long> mp;
        for(int i : a){
            mp[i]++;
        }
        if(mp.size() >= 3){
            cout<<"No
";
        }else{
            int freq1 = mp.begin()->second;
            int freq2 = mp.rbegin()->second;
            if(freq1 == freq2) cout<<"Yes
";
            else if(n%2 == 1 && abs(freq1-freq2 ) == 1){
                cout<<"Yes
";
            } else{
                cout<<"No
";
            }
        }
 
        
        
        
    }
    
}