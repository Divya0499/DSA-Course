#include<iostream>
using namespace std;

void power(int a, int b){
  int ans = 1;
  for(int i = 1; i <= b; i++){
    ans = ans *a;
  }
  cout<<ans;
}
int main(){

  int a, b;
  cin>>a>>b;
  power(a,b);



  return 0;
}
