#include<iostream>
using namespace std;

int main(){

int arr[]={-1,2,3,5,6,4};
int key = 10;
bool isPresent = 0;
for(int i = 0; i < 6; i++){
  if(arr[i] == key){
    isPresent = 1;
    break;
  }

}
if(isPresent == 1){
  cout<<"key is present";

}else{
  cout<<" key is not present";
}


  return 0;
}
