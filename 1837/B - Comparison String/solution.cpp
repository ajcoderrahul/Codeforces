#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int count = 1,maxi = 1;
        for (int i = 0; i < n; i++)
        {
            if(s[i]== s[i-1]){
                count++;
            }else{
                count =1;
            }
            maxi = max(count,maxi);
        }
        cout<<maxi+1<<endl;
    }
    
}