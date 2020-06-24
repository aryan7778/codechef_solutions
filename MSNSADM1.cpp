#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
bool compare(int a,int b)
{
	return (a<b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n],b[n];
		int c[n];
		for(int i=0;i<n;i++)
		cin >> a[i] ;
		for(int i=0;i<n;i++)
		cin >> b[i];
		for (int i=0;i<n;i++)
		{
			c[i]= (a[i]*20)-(10*b[i]);
			if(c[i]<0)
			c[i]=0;
		    
		}
		int *j;
		j=std::max_element(c+0,c+n,compare);
		cout << *j <<"\n";
	}
	return 0;
}
