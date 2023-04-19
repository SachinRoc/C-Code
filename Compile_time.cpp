#include<iostream>
using namespace std;
class Mathe{
   public:
      // Number of parameter difference but name is same.

   int sum(int a , int b){
    cout<<"I am first signature"<<endl;
   return a+b;
   }

   int sum(int a , int b , int c){

    cout<<" I am second Signature"<<endl;
    return a+b+c;
   }

};

int main(){
Mathe a1;

cout<< a1.sum(5 , 10)<<endl;
cout<< a1.sum(5,19,23)<<endl;

}