#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

for( int i = 1; i <=n; i++){
  for(int j = 1; j <= i; j++){
    cout<< i-j+1<<" ";
  }
  cout<<endl;
 }

 
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

return 0;
}
