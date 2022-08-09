#include<iostream>
using namespace std;

int searchingNum(int *arr , int n , int k){
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == k){
            return i+1;
        }
    }return -1;
}

int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    
    cin>>k;
    int ans = searchingNum(arr,n,k);
    cout<<ans<<endl;
}