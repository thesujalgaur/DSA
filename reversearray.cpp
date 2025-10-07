#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
   
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
     
     

}
void printArray(int arr[],int n ){
    for(int i =0; i<n;i++){
        cout<<arr[i];
    }
 }

int main(){
   
  int arr[8]={2,5,7,8,10,12,6,3};
    reverse(arr,8);
    printArray(arr,8);
}
