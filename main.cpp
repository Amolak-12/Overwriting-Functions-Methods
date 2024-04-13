#include <iostream>
using namespace std;

//Parent class
class Animal
{
  public:
  //Constructor
  Animal() {
    cout << "Animal Constructor!!"<< endl ;
  }
  void speak(){
    cout << "Animal is speaking."<< endl << endl; 
  }
};

//Child class
class Dog : public Animal //Inheritance done
{
  public:
  //Constructor 
  Dog() {
    cout << "Dog Constructor!!"<< endl ;
  }
  //Overwriting of function 
  void speak(){
    cout << "Dog is barking." << endl << endl;
  }
};

int main() {

  Dog germanShepherd;
  germanShepherd.speak();

  Animal* a = new Animal();
  a->speak();

  Dog* b= new Dog();
  b->speak();
}