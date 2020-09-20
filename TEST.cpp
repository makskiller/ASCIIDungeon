#include <iostream>

using namespace std;
class Animal
    {
    public:
        int hp;
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
int main()
{
    makeanimal();
    cout<<kot.name;
    return 0;
}
