#include <iostream>
using namespace std;
          
          //multilevel Inheritance
    
class fruit{
    public:
    string name;
};

class Mango : public fruit{
       public:
       int weight;
};

class Alphanso:public Mango{
        public:
        int sugarLevel;
};

int main(){
    Alphanso a1;
    cout<< a1.name <<" "<< a1.weight<<" "<< a1.sugarLevel<<endl;

    return 0;
}