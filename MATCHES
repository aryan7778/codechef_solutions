#include<iostream>
#include<algorithm>
#include<sstream>
#include<string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n1,n2;
	long int s1;
	cin >> t;
	while(t--){
		cin>> n1 >> n2;
		s1=n1+n2;
		int a=0;
		ostringstream str1; 
        str1 << s1; 
        string geek = str1.str();
		//string str1 = to_string(s1);
		for(int i=0;i<geek.size();i++)
		{
			if(geek[i]=='0')
			a+=6;
			if(geek[i]=='1')
			a+=2;
			if(geek[i]=='2')
			a+=5;
			if(geek[i]=='3')
			a+=5;
			if(geek[i]=='4')
			a+=4;
			if(geek[i]=='5')
			a+=5;
			if(geek[i]=='6')
			a+=6;
			if(geek[i]=='7')
			a+=3;
			if(geek[i]=='8')
			a+=7;
			if(geek[i]=='9')
			a+=6;	
			}
			cout<<a<<"\n";
		
	}
	return 0;
}
