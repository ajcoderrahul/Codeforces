#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        bool ans = false;
        long long new_a = 2*b-c;
        long long new_b = (a+c)/2;
        long long new_c = 2*b-a;
        if(new_a /a > 0 && new_a % a==0 ){
            ans = true;
        }
        if(new_b /b > 0 && new_b % b==0 && abs(c-a)% 2 ==0 ){
            ans = true;
        }if(new_c /c > 0 && new_c % c==0 ){
            ans = true;
        }
        if((ans)  ){
            cout<<"YES
";
        }else{
            cout<<"NO
";
        }
    }
}