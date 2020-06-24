#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,count;
	    cin>>a>>b;
	    
	    if(a==b)
        {
            if(a==3||a==9||a==15||a==21)
               count=1;
            else
               count=0;
        }
        else
        {
            count=2;
            for(int i=a+1;i<b;i++)
            {
                if(i==3||i==9||i==15||i==21)
                    count++;
                else 
                    count+=2;
            }
        }
        cout<<count<<endl;
	}
	return 0;
}
