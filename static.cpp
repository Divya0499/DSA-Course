#include<iostream>
using  namespace std;

class Hero{
public:
int health;
char level;


};

 int main() {
   //static allocation
  Hero ramesh;



  ramesh.health = 70;
  ramesh.level = 'A';
  cout<<ramesh.health<<endl;
  cout<<ramesh.level;

  return 0;
}
