#include<iostream>
using namespace std;

int max(int num[],int size){
     int maximum=num[0];
     for(int i=1;i<size;i++){
      if (num[i]>maximum){
        maximum=num[i];
      }
     }
    return maximum;
}

int min(int num[],int size){
    int minimum=num[0];
    for(int i=1;i<size;i++){
        if (num[i]<minimum){
            minimum=num[i];
        }
    }
    return minimum;
}
int main(){
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;

  int num[100];
   cout<<"enter elements"<<endl;
   for(int i=0;i<size;i++){
    cin>>num[i];
   }

 cout << "Maximum value = " << max(num,size) << endl;
 cout<<"minimum value is =" << min(num,size)<<endl;
    
}