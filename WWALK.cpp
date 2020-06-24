#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastIO
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n],b[n];
		long int c=0,d=0,sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		for(int i=0;i<n;i++){
			if(c==d && (a[i]==b[i])){
				sum+=a[i];
			}
			c+=a[i];
			d+=b[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
