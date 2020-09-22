#include <iostream>
#include <fstream>

using namespace std;

class Animal
    {
    public:
        int hp=5;
    };
class Dog :public Animal
    {
    public:
        string name="dog";
    };
class Cat :public Animal
    {
    public:
        string name="cat";
    };
void makeanimal()
    {
        Cat kot;
    }
    Cat kot;
    Dog pies;
    Animal *pointer;
int main()
{
    pointer = &kot;
    cout<<pointer->hp;



    return 0;
}
