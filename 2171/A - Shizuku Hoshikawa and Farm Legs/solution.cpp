/******************************************************************************
 
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
 
*******************************************************************************/
 
#include <iostream>
using namespace std;
int main()
{
    	int t;
// 	cout<<"Enter the value of t"<<endl;
	cin>>t;
	for(int i = 1; i<=t; i++)
	{
	    int n,sum;
	    cin>>n;
	    
	    if(n %2 != 0){
	        cout<<"0"<<endl;
	        continue;
	    }
	    else{
	       sum= n/4;
	       cout<<sum+1<<endl;
	    }
	    
	    
	}
 
    return 0;
}