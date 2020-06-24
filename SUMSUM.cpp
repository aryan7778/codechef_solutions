#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    long int n,sum=0;
	    std::cin >> n;
	    if(n%2==0)
	        sum=(-n)/2;
	    else
	        sum=(n+1)/2;
	    std::cout << sum << std::endl;
	}
	return 0;
}
