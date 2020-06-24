#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    long int s=0;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++){
	    s=s+a[i];
	    }
	    if(s>k)
	    cout<<"NO"<<"\n";
	    else
	    cout<<"YES"<<"\n";
	}
	return 0;
}
