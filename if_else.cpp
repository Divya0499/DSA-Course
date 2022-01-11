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


  
  int a, b=1;
a=10;
if(++a)
cout<<b;
else
cout<< ++b;


int a = 1;
int b= 2;
if(a-- > 0 && ++b > 2){
  cout<<"stage1-inside if"<<endl;

}else{
  cout<<"stage2-inside else";
}
cout<<a<<" "<<b<<endl;

int a = 1;
int b= 2;
if(a-- > 0 || ++b > 2){
  cout<<"stage1-inside if"<<endl;

}else{
  cout<<"stage2-inside else";
}
cout<<a<<" "<<b<<endl;

int m = 3;
cout<<(25*(++m));

int a = 1;
int b = a++;
int c = ++a;
cout<< b;
cout<< c;


  return 0;
}
