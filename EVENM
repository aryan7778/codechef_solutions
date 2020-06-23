#include<bits/stdc++.h>
#include<algorithm>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
	fastIO
    int t,n,c,b,count;
    cin>>t;
    while(t--){
	
    cin>>n;
    int arr[n][n]={0};
    count=1;
    c=n*n;
    b=n/2;
    if(n%2!=0)
    {
        b=b+1;
    }
    for(int i=0;i<=b && count<c+1;i++){
        for(int j=i;j<=n-(i+1);j++)
        {
            arr[i][j]=count++;
        }
        for(int j=i+1;j<=n-(i+1);j++)
        {
            arr[j][n-(i+1)]=count++;
        }
        for(int j=n-(i+2);j>=i;j--)
        {
            arr[n-(i+1)][j]=count++;
        }
        for(int j=n-(i+2);j>i;j--)
        {
            arr[j][i] = count++;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
		cout<<"\n";
    }
}
    return 0;
}
