#include <conio.h>
using namespace std;

int choice;
string name;

int menu()
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


int new_game()
{

}
