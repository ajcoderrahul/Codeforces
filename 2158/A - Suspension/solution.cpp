#include <iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,y,r,sum;
        cin>>n>>y>>r;
    
        sum =r+(y/2);
        if(n <sum){
            cout<<n<<endl;
            continue;
        }else{
            cout<<sum<<endl;
        }
        
    }
 
    return 0;
}