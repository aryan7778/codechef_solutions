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
	    long int l,a,b;
	    cin>>l;
	    long int arr[l];
	    cin>>a>>b;
	    for(int i=0;i<l;i++)
	    cin>>arr[i];
	    sort(arr,arr+l);
	    for(int i=0;i<l;i++)
	    cout<<arr[i]<<" ";
	}
	return 0;
}
