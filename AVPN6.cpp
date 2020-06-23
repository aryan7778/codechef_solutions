#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	long int a[n],l,f;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	cout << a[0] <<" "<< a[n-1] <<"\n";
}
return 0;
}
