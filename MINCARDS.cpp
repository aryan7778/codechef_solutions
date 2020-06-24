#include<bits/stdc++.h>
#include<algorithm>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastIO
	int n,count=0;
	cin>>n;
	string str;
	cin>>str;
	for(int i=0;i<n-1;i++){
		if(str[i]==str[i+1]){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
