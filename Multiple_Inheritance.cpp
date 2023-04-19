#include <iostream>
using namespace std;

   // Multiple Inheritance

   class A{
       public:
       int physics;
      // int chemistry;
   };
   class B {
        public :
        int chemistry;
   };

   class C : public A , public B{
               public:
               int mathe;        
   };

   int main(){
    C obj;

    cout<< obj.chemistry <<" "<<obj.mathe <<" "<<obj.physics<<endl;
        // scope Resolution Operator
     //cout<< obj.A::chemistry <<" "<<obj.mathe <<" "<<obj.physics<<endl;
   }