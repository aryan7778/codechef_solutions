#include <iostream>
#include <algorithm>
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
	    long int n,sum=0;
	    cin>>n;
	    long int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    for(int i=0;i<n;i++) 	
	    {
	        if(arr[i]>=0)
	        sum+=arr[i];
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
