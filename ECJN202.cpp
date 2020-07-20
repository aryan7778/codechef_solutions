#include<bits/stdc++.h>
#include<algorithm>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastIO
	int t;
	int n,m,sum,ans;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		ans=0,sum=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		m=sum/n;
		for(int i=0;i<n;i++){
			ans+=(m-arr[i]);
			//cout<<ans<<endl;
		}
		if(ans==0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		
	}
return 0;
}
