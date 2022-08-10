#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    long long n,a,b,ans=0;
	    cin>>n>>a>>b;
	    long long p[n];
	    long long o=a/b;
	 
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>p[i];
	        
	    }
	    if(n==1)
	    {
	        cout<<b*p[0]<<endl;
	        continue;
	    }
	    else
	    {
	        if(o==0)
	        {
	            cout<<a*(p[n-2])+b*(p[n-1])<<endl;
	            continue;
	            
	        }
	        else
	        {
	            if(n-2-o<0)
	            {
	                long long sum=0;
	                for(int i=0;i<n;i++)
	                {
	                    sum=sum+p[i];
	                }
	                cout<<sum*(b)<<endl;
	                continue;
	                
	            }
	            else
	            {
	                long long f=n-2-o;
	                long long sum=0;
	                for(int i=f;i<n;i++)
	                {
	                    sum=sum+p[i]-p[f];
	                }
	                cout<<sum*b+p[f]*(a+b)<<endl;
	                continue;
	            }
	        }
	    }

	    
	}
	
	return 0;
}


