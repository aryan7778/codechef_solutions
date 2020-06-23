#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
  
void addition(long int p[], int n, long int l, long int h) 
{ 
    p[l] += 1;
     if (h != n) 
       p[h + 1] -= 1;
} 
  
void updateArray(long int p[], int n) 
{ 
    for (int i = 1; i <=n; i++) 
        p[i] += p[i - 1]; 
} 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin >> t;
	while(t--)
	{
		int n;
		long int count=0,m,o;
		cin >> n;
		long int c[n],h[n];
		for(int i=0;i<n;i++)
		cin >> c[i];
		for(int i=0;i<n;i++)
		cin >> h[i];
		sort(h,h+n);
		long int p[n] = {0}; 
	    for(int i=0;i<n;i++){
	        m=i-c[i];
	        o=i+c[i];
	        if(m<=0)
	        m=0;
	        if(o>=n)
	        o=n;
	        addition(p,n,m,o);
	    }
	       
	   updateArray(p,n);
	   sort(p,p+n);
	   for(int i=0;i<n;i++){
	   if(h[i]==p[i])
	        count++;
	        
	    }
	    if(count!=n)
	    cout << "NO" << "\n";
	    else
	    cout << "YES" << "\n";
	    
	}
    return 0; 
} 
