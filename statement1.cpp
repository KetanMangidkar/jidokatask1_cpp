// Show implementation of a class and example of inheritance

#include <iostream>
using namespace std;
class Account{
    public:
    float salary = 60000;

};
class Programmer: public Account{
    public:
    float bonus = 5000;
};

int main(void){
    Programmer p1;
    cout <<"Salary:"<<p1.salary<<endl;
     cout <<"Bonus:"<<p1.salary<<endl;

     return 0;
}