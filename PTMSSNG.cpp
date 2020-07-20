#include<bits/stdc++.h>
#include<iterator>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
 
int main(){
    fastIO
 	int t;
 	cin>>t;
 	while(t--){
 		int n;
 		cin>>n;
 		set <long long> x2,y2;
 		
 		for(int i=0;i<4*n-1;i++){
 		    long long x1,y1;
		 	cin>>x1>>y1;
 			if(x2.count(x1)>=1){
 				x2.erase(x1);
 				//cout<<(*x2.begin());
			 }
			 
			 else{
			 	x2.insert(x1);
			 }
			 
			 if(y2.count(y1)>=1){
			 	y2.erase(y1);
			 }
			 
			 else{
			 	y2.insert(y1);
			 }
			 
		 }
		//auto itr1 = x2.begin(); 
        //auto itr2 = y2.begin();
		cout<<(*x2.begin())<<" "<<(*y2.begin())<<endl;
 		

 } 
 
	return 0;
 }
