#include<bits/stdc++.h>
#include<algorithm>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastIO
	long int n;
	int a;
	cin>>n>>a;
	while(a--)
	{
		if(n%10==0){
			n=n/10;
		}
		else{
			n=n-1;
		}
	}
	cout<<n<<endl;
	return 0;
}
