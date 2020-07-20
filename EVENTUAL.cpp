#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastIO
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		unordered_map<char, int> freq;
		for(int i=0;i<n;i++){
			if (freq.find(s[i]) == freq.end()) { 
            freq.insert(make_pair(s[i], 1)); 
        } 
  
        else { 
            freq[s[i]]++; 
        } 
		}
		int flag=1;
		for (auto& it : freq) { 
        if(it.second%2!=0){
           flag=0;
           break;
		} 
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
	}
	return 0;
}
