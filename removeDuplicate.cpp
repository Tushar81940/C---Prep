#include<iostream>
using namespace std;
void removeDuplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
}

int main(){
    int arr[] = {3,4,2,4,2,5,6,3,3};
    int n = 9;
    removeDuplicate(arr,n);
    return 0;
}