#include<iostream>
using namespace std;

void printArray(int arr[], int size){

        cout<<"printing the array "<<endl;
      for (int i=0;i<size;i++){
       cout<<arr[i]<<' ';
      };
      cout<<"printing done !"<<' ';
};
    
int main(){

  int num[5]={23,34,45,67,23};
 //Accessing the 1st index of array 
   cout<< " value at index "<<num[0]<<' ';
 
 // second index
  int second[15]={2,7};
  //Print the array 
  //printArray(second,15);

  //Fourth
  //initialising all locations using 0
  int fourth[10]={1};
  //printArray(fourth,10);


  //initialising the location using  1
  int fifth[10]={1};
  //printArray(fifth, 10);
    
 cout<<"everything is fine "<<endl;



  // sixth 
  cout<< "starting"<<' ';
   int sujal[6]={2,3,4,5,6,7};
   //printArray(sujal,6);
 int size= sizeof(fifth)/sizeof(int);
 cout<<"size of array is "<<size<<endl;
   
   char ch[4] = { 's','u', 'j', 'a'};
   cout<<ch[3]<<endl;
   return 0;
};

