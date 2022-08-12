#include<bits/stdc++.h>
using namespace std;

void PushZeroesToEnd(int *arr , int n){
    int i = 0;
    for(int j = 0 ; j < n ; j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
void printArray(int *arr , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
   PushZeroesToEnd(arr,n);
    printArray(arr,n);
}