#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastIO
	int t,sum;
	cin>>t;
	char ch[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int arr[]={0,1,2,1,0,1,2,1,0,1,2,3,2,1,0,1,2,3,2,1,0,1,2,3,4,5};
	while(t--){
		string str;
		cin>>str;
		sum=0;
		for(int i=0;i<str.length();i++){
				for(int j=0;j<26;j++){
					if(str[i]==ch[j]){
						sum+=arr[j];
					}
				}
				
			}
			cout<<sum<<endl;
		}
	return 0;	
}
	
