#include<iostream>
using namespace std;


int FirstOccurence(int*arr, int n, int k){
    int ans = -1;
    int s=0,e=n-1;
    int mid = s+(e-s)/2;

    while(s <= e){

        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }else if(arr[mid] > k){
            e = mid -1;
        }else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }



    return ans;
}
int LastOccurence(int* arr, int n, int k){
      int ans = -1;
    int s=0,e=n-1;
    int mid = s+(e-s)/2;

    while(s <= e){

        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }else if(arr[mid] > k){
            e = mid -1;
        }else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}



int main(){
int n = 7;
int arr[] = {1,2,3,3,3,3,4};
int k = 3;

int TotOcc = (LastOccurence(arr,n,k) - FirstOccurence(arr,n,k))+1;
cout<<TotOcc;

  return 0;
}
