#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void TwoSum(int *arr , int n, int target){
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(arr[i]+arr[j] == target){
                cout<<"pairs are : "<<i<<" , "<<j<<endl;
            }
        }
    }
}

//void printArray(int *arr , int n){
  //  for(int i = 0 ; i < n ; i++){
  //      cout<<arr[i]<<" ";
  //  }cout<<endl;
//}
int main()
{
    int n,target;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cin>>target;
    TwoSum(arr,n,target);

}