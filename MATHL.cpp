#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
#define int long long
int fact[1000005],a[1000005];
int32_t main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
 	cout.tie(0);
 	fact[0]=1,a[0]=1;
 	for(int i=1;i<1000003;i++)
 	{
 		fact[i]=(fact[i-1]*i)%1000000007;
 		a[i]=(a[i-1]*fact[i])%1000000007;
	}
	int t;
 	cin>>t;
 	while(t--)
 	{
 		int n;
 		cin>>n;
 		cout<<a[n]<<'\n';
 	}
 	return 0;
 }
