#include<bits\stdc++.h>
using namespace std;
bool check(long long x){
    long long countOfDigit = 0;
    long long countOfZero = 0;
    while (x != 0)
    {
        if(x%10 == 0){
            countOfZero++;
        } 
        countOfDigit++;
        x/=10;
    }
    return countOfZero == countOfDigit-1;
}
int main(){
    vector<long long>digit;
    for (long long i = 1; i <= 999999; i++)
    {
        if(check(i) == true){
            digit.push_back(i);
        }
    }
    
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long ans = 0;
        for(long long i = 0;i<digit.size();i++){
            if(digit[i]<= n){
                ans++;
            }else{
                break;
            }
        }
        cout<<ans<<endl;
    }
    
}