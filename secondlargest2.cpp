#include<iostream>
using namespace std;
void secondLargest(int arr[],int n){
    if(n<2){
        cout<<"Second Largest does not exist";
    }
    int largest,secondLargest;
    if(arr[0]>arr[1]){
        largest = arr[0];
        secondLargest = arr[1];
    }else{
        largest = arr[1];
        secondLargest = arr[0];
        
    }
    for(int i=2;i<n;i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }   
    if(largest==secondLargest){
        cout<<"Second largest does not exist";
    }else{
        cout<<"Second largest "<<secondLargest;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    secondLargest(arr,n);
    return 0;
}




