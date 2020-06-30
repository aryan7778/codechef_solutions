#include<bits/stdc++.h>
#include<algorithm>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastIO
	int t;
	cin>>t;
	while(t--){
		
	long int p,q,r,a,b,c;
	cin>>p>>q>>r>>a>>b>>c;
	long int arr[3];
	arr[0]=a-p;
	arr[1]=b-q;
	arr[2]=c-r;
  
	if(arr[0]<0||arr[1]<0||arr[2]<0)
	{
		cout<<-1<<endl;
	}
	else{
	
	cout<<(arr[0]+arr[1]+arr[2])<<endl;
   }
}
return 0;
}
