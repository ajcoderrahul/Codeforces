#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int arr[7];
        for (int i = 0; i < 7; i++)
        {
            cin>>arr[i];
        }
        int sum = 0;
        int* maximum = max_element(arr,arr+7);
        for (int i = 0; i < 7; i++)
        {
            sum -= (arr[i]);
            
        }
        cout<<2*(*maximum)+sum<<endl;
        
        
    }
    
}