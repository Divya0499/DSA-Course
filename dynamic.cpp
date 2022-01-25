#include<iostream>
using  namespace std;

class Hero{
public:
int health;
char level;


};

 int main() {
   //dynamic allocation
  Hero *ramesh = new Hero;


  ramesh->health = 70;
  ramesh->level = 'A';
  cout<<ramesh->health<<endl;
  cout<<ramesh->level;

//we can do also by this method
  // (*ramesh).health = 70;
  // (*ramesh).level = 'A';
  // cout<<(*ramesh).health<<endl;
  // cout<<(*ramesh).level;

  return 0;
}
