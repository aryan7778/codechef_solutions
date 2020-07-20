#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
 
int main(){
    fastIO
 	int t;
 	cin>>t;
 	while(t--){
 		int n;
 		cin>>n;
 		char arr[8][8];
 		arr[0][0]='O';
 		n--;
 		for(int i=0;i<8;i++){
 			for(int j=0;j<8;j++){
 				if(i==0&&j==0){
 					continue;
 					
				 }
				 if(n){
				 	arr[i][j]='.';
				 	n--;
				 	
				 }
				 else{
				 	arr[i][j]='X';
				 }
				 
		 	 }
	   	 }
 	for(int i=0;i<8;i++){
 		for(int j=0;j<8;j++){
 			cout<<arr[i][j];
		 }
		 cout<<endl;
	 }
}
 	
 	return 0;
 }
