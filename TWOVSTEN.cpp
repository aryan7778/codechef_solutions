#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    fastIO
	int t;
	long int n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n%10==0){
			cout<<0<<endl;
		}
		else if(n%10==5){
			cout<<1<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}
