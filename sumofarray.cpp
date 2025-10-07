#include<iostream>
using namespace std;


int sum(int arr[]){
    int total=0;
    cout<<"inside the  sum function"<<endl;
    for(int i=0;i<10;i++){
       total+=arr[i];
    }
    return total ;
}
int main(){
    int arr[10]={23,12,31,423,43,343,
    34,53,24,42};

     cout<<"main body me aagya bhaisaheb"<<sum(arr)<<endl;
     return 0;
}