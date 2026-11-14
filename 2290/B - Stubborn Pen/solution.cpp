#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int count = 0;
        if(s[0] =='B'){
            count++;
        }
        for(int i = 1;i<n;i++){
            if(s[i-1] == s[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}