#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        string s,t;
        cin>>s>>t;
    
    
    vector<int> freq(26,0);
    for (int i = 0; i < t.size(); i++)
    {
        freq[t[i]-'A']++;
    }
    for (int i = s.size()-1; i >= 0; i--)
    {
        if(freq[s[i]-'A'] > 0){
            freq[s[i]-'A']--;
 
        }else{
            s[i]= '.';
        }
    }
    string neo = "";
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] != '.'){
            neo += s[i];
        }
    }
    if(neo == t){
        cout<<"YES
";
    }else{
        cout<<"NO
";
    }
    
}
}