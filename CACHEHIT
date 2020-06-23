#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastIO
	int t;
	cin>>t;
	while(t--){
		int n,b,m,arr[100001];
		cin>>n>>b>>m;
		for(int i=0;i<m;i++){
			cin>>arr[i];
		}
		int count=0,current=-1;
		for(int i=0;i<m;i++){
			if(current==-1)
			{
				count++;
				current=arr[i]/b;
			}
			else
			{
				if(current!=arr[i]/b){
				    count++;
				    current=arr[i]/b;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
