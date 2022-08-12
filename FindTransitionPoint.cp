//Given a sorted array containing only 0s and 1s, find the transition point
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findTransitionPoint(int *arr ,int n){
    for(int i = 0 ; i < n ; i++){
        if(arr[i]==1){
            return i;
        }
    }
    return -1;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int ans = findTransitionPoint(arr,n);
    cout<<ans<<endl;
}