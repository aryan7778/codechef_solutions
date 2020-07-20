#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int getSum(long int n) 
    {  
    long int sum = 0; 
    while (n != 0) 
    { 
     sum = sum + n % 10; 
     n = n/10; 
    }  
 return sum; 
 } 
 
int main(){
    fastIO
 	int t;
 	cin>>t;
 	while(t--){
 		int n;
 		cin>>n;
 		long int a[n],b[n];
 		long long chef,morty,count1=0,count2=0;
 		for(int i=0;i<n;i++){
 			cin>>a[i]>>b[i];
		 }
		for(int i=0;i<n;i++){
 			chef=getSum(a[i]);
			morty=getSum(b[i]);
			if(chef>morty){
				count1++;
			}
			else if(morty>chef){
				count2++;
			}
			else{
				count1++;
				count2++;
			}
		 }
		 if(count1>count2){
		 	cout<<0<<" "<<count1<<endl;
		 }
		 else if(count1==count2){
		 	cout<<2<<" "<<count1<<endl;
		 }
		 else{
		 	cout<<1<<" "<<count2<<endl;
		 }
		 
	 }
	 return 0;
 }
