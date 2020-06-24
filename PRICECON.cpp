#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastIO
	int t;
	cin>>t;
	long sum,newSum;
	while(t--){
		sum=0,newSum=0;
       int n,k;
       cin>>n>>k;
       int arr[n];
       for(int i=0;i<n;i++){
       	cin>>arr[i];
       	sum=sum+arr[i];
	   }
	   for(int i=0;i<n;i++){
	   	if(arr[i]>k){
	   		arr[i]=k;
	
		   }
		   
	   }
	   for(int i=0;i<n;i++){
	   	newSum+= arr[i];
	   }
	   cout<<sum-newSum<<endl;
	}

	
}
