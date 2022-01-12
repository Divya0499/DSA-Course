#include<iostream>
using namespace std;

int main(){
int arr[]={1,2,3};

int n = 3;
int s = 0, e=n-1;

while(s <= e){
  int temp = arr[s];
  arr[s] = arr[e];
  arr[e] = temp;
  s++;
  e--;
}
for(int i = 0; i<n; i++){
  cout<<arr[i]<<" ";
}


  return 0;
}
