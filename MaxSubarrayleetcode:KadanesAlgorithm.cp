#include<iostream>
#include<algorithm>
using namespace std;

int Kadanes(int *arr , int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    
    for(int i = 0 ; i < n ; i++){
        currSum = max(currSum + arr[i] , arr[i]);
        maxSum = max(maxSum,currSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int ans = Kadanes(arr,n);
    cout<<ans<<endl;
}