#include<iostream>
using namespace std;


int binary(int* arr, int n, int key){
  int s=0;
  int e=n-1;

  int mid = s+(e-s)/2;

  while(s <= e){
    if(arr[mid]==key){
      return mid;
      e--;
      s++;
    }else if(arr[mid]>key){
      e = mid-1;
    }else{
      s = mid+1;
    }
    mid = s+(e-s)/2;
  }
  return 0;
}

 int main() {
int n = 5;
int arr[]={1,3,4,9,10};
int key = 4;

cout<< binary(arr,n,key);

  return 0;
}
