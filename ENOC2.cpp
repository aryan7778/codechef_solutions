#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    long int a,b;
	    cin>>a>>b;
	    if(b<a)
	    cout<<"NO"<<"\n";
	    else if(a%2==b%2)
	    cout<<"YES"<<"\n";
	    else if(a%2==1&&b%2==0&&a*2<=b)
        cout<<"YES"<<"\n";
	    else
	    cout<<"NO"<<"\n";
	}
	return 0;
}
