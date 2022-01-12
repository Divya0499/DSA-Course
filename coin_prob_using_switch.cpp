#include<iostream>
using namespace std;

int main(){
int totalAmount = 1330;

int hundred = 0, fifty = 0, twenty = 0, ten = 0 , one = 0;

int remainder = 0;

cout<<"Total Amount "<<totalAmount<<endl;

switch (true) {
  case true:
  hundred = totalAmount /100;
  remainder = totalAmount % 100;
  cout<<"Rs. 100 notes:"<<hundred<<endl;

  fifty = remainder/50;
  remainder = remainder %50;
  cout<<"Rs. 50 notes:"<<fifty<<endl;

  twenty = remainder/20;
  remainder = remainder %20;
  cout<<"Rs. 20 notes:"<<twenty<<endl;

  ten = remainder/10;
  remainder = remainder% 10;
  cout<<"Rs. 10 notes:"<<ten<<endl;

  one = remainder/1;
  remainder= remainder%1;
  cout<<"Rs. 1 notes:"<<one<<endl;


  break;
  default: cout<<"invalid expression"<<endl;
}




  return 0;
}
