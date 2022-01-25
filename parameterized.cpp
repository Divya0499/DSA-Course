#include<iostream>
using  namespace std;

class Hero{
public:
int health;
char level;


//parameterised constructor
 Hero(int health){
   this->health = health;
   cout<<health<<endl;
 }


};

 int main() {
  Hero ramesh(70);
  ramesh.level = 'A';
  cout<<ramesh.level;

  return 0;
}
