#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int frequencyOfElement(int *arr , int n, int x){
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]==x){
            count++;
        }
    }return count;
}

int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cin>>x;
    int ans = frequencyOfElement(arr,n,x);
    cout<<ans<<endl;
    
}