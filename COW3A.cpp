#include <iostream>
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
	fastIO
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    cout<<(d-b)<<" "<<(d-c)<<" "<<(d-a)<<endl;
	}
	return 0;
}
