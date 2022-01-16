#include <iostream>
using namespace std;
//что такое класс и обьект класса и его свойства

class Human {
    public:
    
    int age;
    string name;
    float weight;
    string eyes;
};
int main()
{
    Human firstHuman;
    Human secondHuman;
    
    firstHuman.age = 30;
    firstHuman.name = "Izabella";
    firstHuman.weight = 80;
    firstHuman.eyes = "brown";
    
    secondHuman.age = 25;
    secondHuman.name = "Charles";
    secondHuman.weight = 120;
    secondHuman.eyes = "green";
    
    
    
    cout << firstHuman.age << " ";
    cout << firstHuman.name << " ";
    cout << firstHuman.weight << " ";
    cout << firstHuman.eyes << " "<< endl;
    
    cout << "---------------------------------" << endl;
    cout << secondHuman.age << " ";
    cout << secondHuman.name << " ";
    cout << secondHuman.weight << " ";
    cout << secondHuman.eyes << " ";

    return 0;
}
