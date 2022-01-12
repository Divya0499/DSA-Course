#include<iostream>
using namespace std;

int main(){
int a;
cout<<"Enter the value of a "<<endl;
cin>>a;


int b;
cout<<"Enter the value of b "<<endl;
cin>>b;

char op;
cout<<" Enter the operation"<<endl;
cin>>op;

switch(op) {
  case '+':cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
  break;

  case '-':cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
  break;

  case '*':cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
  break;

  case '/':cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
  break;

  case '%':cout<<"Remainder  of "<<a<<" and "<<b<<" is "<<a%b<<endl;
  break;

  default: cout<<"Invalid operation"<<endl;
}


  return 0;
}
