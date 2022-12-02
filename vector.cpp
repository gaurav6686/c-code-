#include<iostream>
using namespace std;

class hero{
    public:
    int health;
    char level;
  int gethealth(){ return health;}
  void sethealth(int h){
  health=h;
  }
    char getlevel() {return level;}
    void setlevel(char l){level=l;}
};

int main(){
  hero h1;
    h1.sethealth(70);
    h1.setlevel('A');
  cout<<h1.gethealth()<<endl;
  cout<<h1.getlevel();
return 0;
}