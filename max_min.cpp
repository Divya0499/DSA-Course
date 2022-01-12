#include<iostream>
using namespace std;

int max(int arr[],int n){
  int maxi = INT_MIN;
  for(int i = 0; i <= n; i++ ){
    if(arr[i] > maxi){
      maxi = arr[i];
    }
  }
  return maxi;
}
int min(int arr[],int n){
  int mini = INT_MAX;
  for(int i = 0; i <= n; i++ ){
    if(arr[i] <  mini){
      mini = arr[i];
    }
  }
  return mini;
}

int main(){
int n = 6;
int arr[] ={29,2,3,4,8,9};
cout<< max(arr,n)<<endl;;
 cout<<min(arr,n);



  return 0;
}
