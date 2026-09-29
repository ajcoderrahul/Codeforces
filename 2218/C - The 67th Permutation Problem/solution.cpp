#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = 1;
        int y = 3*n;
        
        for (int i = 0; i < n; i++)
        {
           cout<<x<<" ";
            x++;
            cout<< y-1<<" "<<y<<" ";
            y-=2;
            
        }
        cout<<endl;
    }
}