#include <iostream>
using namespace std;
class Animal{
      public:
      int age;
      string type;

      // Non - parametraised constructor
      Animal(){
        this->age = 0;
        this->type = "";
        cout<<" Non - parametraised Constructor"<<endl;
      }
   
   // Parametraised Constructor
   Animal(int a , string b){
    this->age = a;
    this->type = b;
    cout<<" Parametraised Constructor"<<endl;

   }

   // copy constructor
   Animal(Animal &obj){
       this->age = obj.age;
       this->type = obj.type;
       cout<<"copy constructor"<<endl;
   }

};


int main(){

  Animal a;
 //Animal* a = new Animal();
// cout<< a->age << a->type ;

Animal* b = new Animal(20 , "sachin");
cout<< b->age<<" "<< b->type<<endl;

// copy constructor.
 
Animal c = a; 

    return 0;
}