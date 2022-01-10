#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

for(int i = 1; i <= n; i++){
  char ch = 'A'+i-1;
  for(int j = 1; j <= n; j++){
cout<< ch<<" ";

  }
  cout<<endl;
}
// 
// A A A
// B B B
// C C C

  return 0;
}
