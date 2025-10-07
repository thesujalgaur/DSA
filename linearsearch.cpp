 #include<iostream>
 using namespace std;

 void  linearsearch(int arr[],int key, int n){
     bool found= false ;
     for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"element find"<<arr[i]<<"at index"<<i;
            found=true;
            // break ; // when want print only first occurance
        }
     }
      if(!found){
        cout<<"bhaisaheb nahi mila aapka key ";
      }
 }

 int main (){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    int key;
    cout<<"enter the element you wanna search";
    cin>>key;
     int n = sizeof(arr) / sizeof(arr[0]);  
  linearsearch(arr,key,n);


 
 }