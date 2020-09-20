#include <conio.h>
using namespace std;

int choice;
string name;

void menu()
  {

    cout<<"--------------------"<<endl;
    cout<<"|    1. New game   |"<<endl;
    cout<<"|    2. Continue   |"<<endl;
    cout<<"|    3. Options    |"<<endl;
    cout<<"|    4. Exit       |"<<endl;
    cout<<"--------------------"<<endl;

    choice = getch();

    switch(choice)
    {
          case 1: // New game
          {
            new_game();
          }
          break;
          case 2: // Continue
          {
            old_game();
          }
          break;
          case 3: // Options
          {
            options();
          }
          break;
          case 4: // Exit
          {

          }
          break;

    }

  }


void new_game()
{
  int choice;
  cout<<"|             New Game            |"<<endl<<endl<<endl;
  cout<<"Choose hero class: "<<endl;
  cout<<"1. Knight  "<<endl;
  cout<<"-more hp -more physic defense and strength  "<<endl;
  cout<<"2. Mage   "<<endl;
  cout<<"-less hp -more mana - more magic defense and strength "<<endl;
  cin>>choice;
  set_hero(choice);
}
void set_hero(int ch)
{
  switch(ch)
    {
      case 1:
        {
                              //Knight
        }
      break;
    }
}
