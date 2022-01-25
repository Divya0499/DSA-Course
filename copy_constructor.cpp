#include<iostream>
using  namespace std;

class Hero{
public:
int health;
char level;


//constructor
Hero(){
  cout<<"Constructor calling"<<endl;
}

 Hero(int health , char level){
   this->health = health;
  this->level = level;
 }
void print(){
cout<<"Health"<<health<<endl;
cout<<"Level"<<level<<endl;

}

};

 int main() {

   Hero Rita;
  Hero ramesh(70,'A');
  ramesh.print();

   //copy constructor
  Hero sita(ramesh);
  sita.print();


  return 0;
}
