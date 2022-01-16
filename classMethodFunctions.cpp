#include <iostream>
#include <string>
using namespace std;

//в объекте класса вместо функций - методы
class Human{
    
public:
  int age;
  int weight;
  string name;
  
  //метод класса
  void Print(){
      cout << "Name: " << name << ";\nAge: " << age <<";\nWeight " << weight << ".";
  }
};

int main(){
    Human firstHuman;
    firstHuman.age = 29;
    firstHuman.weight = 100;
    firstHuman.name = "Ivanov Ivan";
    firstHuman.Print();
}
