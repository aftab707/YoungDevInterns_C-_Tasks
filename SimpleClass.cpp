#include <iostream>
using namespace std;

class SimpleClass{
    private:
      int num1;
      int num2;
    public:
    SimpleClass(){
        num1=0;
        num2=0;
    }  
    void setvalues(int n1, int n2){
        num1=n1;
        num2=n2;
    }
    void display(){
        cout<<"Two Private members  number1 = "<<num1<<" : number2 = "<<num2<<endl;
    }
};

int main(){
    SimpleClass obj;
    obj.setvalues(20, 30);
    obj.display();


    return 0;
}