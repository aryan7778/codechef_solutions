#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastIO
	int t;
	cin>>t;
	while(t--){
		long int s,n,a,ans;
		cin>>s>>n;
		if(s==n){
			cout<<1<<endl;
		}
		else if(s<n){
			if(s==1){
				cout<<1<<endl;
			}
			else if(s%2==1){
				cout<<2<<endl;
			}
			else{
				cout<<1<<endl;
			}
	}
		else{
			if(s%n==0){
				ans=s/n;
			}
			else{
				ans=0;
				a=s%n;
				if(a%2==0||a==1){
					ans=(s/n)+1;
				}
				else{
					ans=(s/n)+2;
				}
			}
			
			cout<<ans<<endl;
		}
		
	}
	return 0;
}
