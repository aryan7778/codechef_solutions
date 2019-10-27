#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std; 
int decToBin(long long int n) 
{ 
     
    int B; 
    int count=0; 
    while (n > 0) { 
  
        B = n % 2; 
        if(B==0)
         count++;
        n = n / 2;
    }	
	return count;
		  
} 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
	
	long long int Dec,c;
	 cin >> Dec;
	 c=decToBin(Dec);
	 cout <<c <<"\n";
 }
 return 0;
 }
