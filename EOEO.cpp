#include<bits/stdc++.h>
#include<algorithm>
#define fastIO ios_base::sync_with_stdio(0);

using namespace std;

int main(){
	fastIO
	int t;
	cin>>t;
	while(t--){
	
	long long int a,b;
	unsigned long long int ts;
	cin>>ts;
	if(ts%2==1){
		cout<<ts/2<<endl;
		continue;
	}
	a=ts&(ts-1);
	//cout<<a;
	if(a==0){
		cout<<0<<endl;
		continue;
	
	}
	else
	{
		b=(ts&-ts);
		b<<=1;
		cout<<ts/b<<endl;
		
	}
}
return 0;
}
