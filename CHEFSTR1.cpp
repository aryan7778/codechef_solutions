#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastIO
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		long long ans=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n-1;i++){
			ans+=abs((arr[i+1]-arr[i]))-1;
		//	cout<<ans<<endl;

		}
		cout<<ans<<endl;
	}
	return 0;
}
