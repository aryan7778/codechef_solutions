#include <iostream>
//#include<time.h>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,a[3],c[3];
	cin >> t;
	while(t--){
	    int fair=0;
	    for(int i=0;i<3;i++)
	        cin >> a[i];
	    for(int i=0;i<3;i++)
	        cin>> c[i];
	        for(int i=0;i<3;i++)
	        {
	            for(int j=i+1;j<3;j++)
	            {
	            if(a[i]>a[j] && c[i]>c[j])
	            fair++;
	            else if(a[i]==a[j] && c[i]==c[j])
	            fair++;
	            if(a[i]<a[j] && c[i]<c[j])
	            fair++;
	            }
	            
	        }
	   if(fair!=3)
	   cout << "NOT FAIR" << "\n";
       else
       cout << "FAIR" << "\n";
	}
	return 0;
}
