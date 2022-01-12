#include<iostream>
using namespace std;

void findUnique(int *arr, int size) {
   int i = 0, j, counter;
   while(i < size) {
       counter = 0;
       for (j = 0; j < size; j++) {
           if (j == i)
               continue;
           if (arr[j] == arr[i]) {
               counter++;
               continue;
           }
       }
       if (counter == 0)
           cout<< arr[i]<<" ";
       i++;
   }
}

int main(){
int arr[] ={1,1,2,2,3};
int n = 5;
findUnique(arr,n);

  return 0;
}
