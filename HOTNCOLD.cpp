#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastIO
	int t;
	cin>>t;
	while(t--){
		long int m,tc,th;
		cin>>m>>tc>>th;
		if(th-tc==0){
		    cout<<"No"<<endl;
		}
		else{
		if((th-tc)%3==0)
		{
			if(((th-tc)/3)>m){
			cout<<"Yes"<<endl;	
			}
			
			else{
				cout<<"No"<<endl;
			}
			
	    }
	    else{
	    	cout<<"Yes"<<endl;
		}
		}
	}
	return 0;
}
