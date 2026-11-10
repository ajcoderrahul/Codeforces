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
        for (int  i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == 0){
                count++;
                
            }
        }
        int left = 0;
        int right = n-1;
        while (a[left] == 0)
        {
            left++;
        }
        while (a[right] == 0)
        {
            right--;
        }
        bool zero = false;
        for (int i = left; i <= right; i++)
        {
                if(a[i] == 0){
                    zero = true;
                }
        }
        if(n == count){
            cout<<0<<endl;
        }else if(zero == true){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
        
} 
}