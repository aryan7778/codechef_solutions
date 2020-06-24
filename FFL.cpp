#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
	fastIO
	 int t;
	cin>>t;
	while(t--){
		 int n,s;
		cin>>n>>s;
		
		 int sum=0;
		 int ar[n],arr[n];
		for(int i=0;i<n;i++){
			cin>>ar[i];
		}
		for( int i=0;i<n;i++){
			cin>>arr[i];
		}
		
	
		 int d=101;
		 int e=101;
		for( int i=0;i<n;i++)
		{
			if(arr[i]==0){
				d=min(d,ar[i]);
			}
			else{
				e=min(e,ar[i]);
			}
			
		}
		sum=d+e;
		//cout<<sum;
		if((sum+s)<=100)
		  cout<<"yes"<<endl;
		else
		  cout<<"no"<<endl;
	}
	return 0;
}
