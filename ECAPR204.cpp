#include<iostream>
#include <bits/stdc++.h> 
#include<unordered_map>
#include<map>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std; 

int main(){
    fastIO
    int t;
    cin>>t;
    while(t--){
        long long int n; 
        cin>>n;
        long long int ar,i;
        map <long long int, int> m; 
        for(i=0;i<n;i++){
            cin>>ar;
            m[ar]++;
        }

	//for (i = 0; i < n; i++) 
	//	m[ar[i]]++; 

	for (auto x : m) 
		cout << x.first << ":" << x.second << endl;
    }
    return 0;
}
