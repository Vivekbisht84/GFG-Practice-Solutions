//find duplicate in an array
#include<iostream>
using namespace std;

int findDuplicate(int *arr , int n){
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == arr[i+1]){
            return arr[i];
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int ans = findDuplicate(arr,n);
    cout<<ans<<endl;
}