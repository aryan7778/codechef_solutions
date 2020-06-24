#include<bits/stdc++.h>
#include<algorithm>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
	fastIO
	int t;
	cin>>t;
	while(t--)
	{
	int five=0,ten=0,flag=0;
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(arr[0]!=5){
		
		cout<<"NO"<<endl;
		
		}
	else{
	  
	for(int i=0;i<n;i++){
		flag=0;
		if(arr[i]==5){
			five++;
			flag=1;
			
		}
		else if(arr[i]==10)
	  {  
		
		if(five>0){
		ten++;
		five--;
		flag=1;
		}
		else{
		
		flag=0;
		cout<<"NO"<<endl;
		break;}
	  }
	   else{
		if(ten>0){
			flag=1;
		    ten--;
	    } 
		else{
			if(five>=2){
				five=five-2;
				flag=1;
			}
			else{
			flag=0;
			cout<<"NO"<<endl;
			break;
			}
		}
	
	}
	}	
if(flag==1)
cout<<"YES"<<endl;

}

//else
//cout<<"NO"<<endl;
}
return 0;
}
