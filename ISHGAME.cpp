#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastIO
	int t,count;
	cin>>t;
	while(t--){
		string str1,str2;
		cin>>str1>>str2;
		string str="";
		for(int i=0;i<str1.length();i++){
			count=0;
			for(int j=0;j<str2.length();j++){
				if(str1[i]!=str2[j]){
				   count++;
				}
				if(count==str2.length()){
					
					cout<<str1[i];
				}
			}
    	}
		cout<<'\n';
    }

	return 0;
}
