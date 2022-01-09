#include<iostream>
using namespace std;

int main(){

int a = 9;
if(a == 9){
  cout<<"nine"<<" ";
}if(a > 0){
  cout<<"positive"<<" ";
}else{
  cout<<"negetive";
}
cout<<endl<<endl<<endl;

int b = 2;
int c = b+1;

if((b == 3) == c){
  cout<< b;
}else{
  cout<< b+1;
}

cout<<endl<<endl<<endl;

int d = 24;
if( d > 20){
  cout<<"love"<<" ";
}else if(d == 24){
  cout<<"lovely"<<" ";
}else{
  cout<<"divya";
}

cout<<endl<<endl<<endl;

char ch;
cin>>ch;
if(ch == 'a' || ch == 'z'){
  cout<<"lowercase";
}else if(ch == 'A' || ch == 'Z'){
  cout<<"uppercase";
}else{
  cout<<"numeric";
}



  return 0;
}
