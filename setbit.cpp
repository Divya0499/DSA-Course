#include<iostream>
using namespace std;
void setBit(){
int a ,b;
cin>>a>>b;
int count = 0;
while( a != 0 || b != 0){
  if(a & 1)
  count++;
  if(b & 1)
  count++;
  a = a>>1;
  b = b>>1;
}
cout<<count;

}

int main(){

setBit();




  return 0;
}
