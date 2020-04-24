#include <iostream>
#include<algorithm>
#include<functional>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define m 1000000007
using namespace std;
int main() {
	fastIO
	int t;
	cin >>t;
	while(t--)
	{
	    int N;
	    long long int s=0;
	    cin>>N;
	    long int p[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>p[i];
	    }
	    sort(p+0,p+N,greater<long int>());
		
	    for(int i=0;i<N;i++){
	        p[i]=p[i]-i;
	    }
	   
	    
	    for(int i=0;i<N;i++){
	        if(p[i]>0){
	          s=s+p[i];  
	        }
	        else{
	            break;
	        }
	          
	    }
	    cout<<(s%m)<<"\n";
	}
	return 0;
}
