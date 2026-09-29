#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        int n;
        cin>>n>>s;
        int count = 0;
        bool condition = false;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='.'&& (i+1) <n && s[i+1] =='.'&& (i+2) <n && s[i+2]=='.'){
                condition = true;
            break;
            }
            if(s[i]=='.') {
                count++;
            
        }
    }
        if(condition== true){
            cout<<2<<endl;
        }else{
        cout<<count<<endl;
        } 
    }
 
}