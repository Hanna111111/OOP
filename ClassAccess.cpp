#include <iostream>
#include <string>
using namespace std;

//в объекте класса вместо функций - методы
//default access ID - private
//поля и методы могут быть private

class Point{
    public:
    int x;
    int z;
  
  void Print(){
        cout << "x" << x << "z" << z << "b" << b;
        PrintY();
  }
  //также как и в прайват но будет возможность наследования
  
  protected:
int b;

  private:
int y;
  void PrintY(){
      cout << y << endl;
  }
  
  
};

int main(){
    Point a;
    a.Print();
}
