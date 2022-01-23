#include<iostream>
using  namespace std;



//we can access private value by getter/setter method


class Hero{
private:
int health;
char level;

public:
int getHealth(){
  return health;
}
char getLevel(){
  return level;
}
void setHealth(int h){
health = h;
}
void setLevel(char ch){
level = ch;
}

};

 int main() {
  Hero ramesh;

  ramesh.setLevel('A');
  ramesh.setHealth(70);
cout << "Ramesh health is " << ramesh.getHealth() << endl;
  cout<<ramesh.getLevel();

  return 0;
}
