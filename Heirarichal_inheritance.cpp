#include <iostream>
using namespace std;
          // Heirarical Inheritance
class Car{
      public:
      int age;
      int weight;

      void speed(){
        cout<<"speed Up"<<endl;
      }

};
class scorpio : public Car{

};
class fortuner:public Car{

};

int main(){

    scorpio s1;
    s1.speed();

    fortuner f1;
    f1.speed();
    return 0;
}