#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <stdio.h>
#include "Heroes.h"
#include "menu.h"
int choice_menu;
void menu()
  {
    cout<<"--------------------"<<endl;
    cout<<"|    1. New game   |"<<endl;
    cout<<"|    2. Continue   |"<<endl;
    cout<<"|    3. Options    |"<<endl;
    cout<<"|    4. Exit       |"<<endl;
    cout<<"--------------------"<<endl;

    choice_menu = getch();

    switch(choice_menu)
    {
          case 1: // New game
          {
            system("cls");
            new_game();
          }
          break;
          case 2: // Continue
          {
            system("cls");
            //old_game();
          }
          break;
          case 3: // Options
          {
            system("cls");
            //options();
          }
          break;
          case 4: // Exit
          {
              system("cls");

          }
          break;
    }
  }


void new_game()
{

  cout<<"|                    New Game                  |"<<endl<<endl<<endl;
  cout<<"|               Choose hero class:             |"<<endl;
  cout<<"| 1. Knight                                    |"<<endl;
  cout<<"|  ^hp++ ^physic defense and strength++        |  "<<endl;
  cout<<"| 2. Mage                                      |"<<endl;
  cout<<"|  ^hp-- ^mana ^magic defense and strength++   |"<<endl;
  cin>>choice_menu;
  set_hero(choice_menu);
}
void set_hero(int ch)
{
  switch(ch)
    {
      case 1:
        {
            pointer-> Eluwina;//Knight
        }
      break;
      case 2:
          {
              pointer-> Eluwin; //Mage

          }
    }
}
