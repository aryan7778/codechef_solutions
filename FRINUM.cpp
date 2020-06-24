#include<iostream>
#include<algorithm>
#include <bits/stdc++.h> 
using namespace std; 
int NonRepeat(int arr[], int n) 
{ 
    unordered_map<int, int> mp; 
    for (int i = 0; i < n; i++) 
        mp[arr[i]]++; 
    for (int i = 0; i < n; i++) 
        if (mp[arr[i]] == 1) 
            return arr[i]; 
    return -1; 
} 
  
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout << NonRepeat(arr, n)<<"\n"; 
    }
    return 0; 
} 
