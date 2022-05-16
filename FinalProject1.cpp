//Name: Shay Hall
//Source File: FinalProject1.cpp
//Description: This program takes the user's input and guides thema long a text based choose your own adventure quest. 
//IDE: Visual Studio 


#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int playerChar, playerQuest, playerWeapon;


     std::cout  << "********** Welcome to Heroes of The Realm! **********" << endl << endl; //title of game 

     //  Character selection

     std::cout  << "Choose your character:" << endl;
     std::cout  << "Thietmar Dioufrusyt - 1" << endl << "Finn Byqvist - 2" << endl << "Zola Olayinka - 3" << endl;
     std::cout  << "Character: ";
     std::cin >> playerChar;
     std::cout  << endl << "You have selected: ";

    switch (playerChar) // determines the character selected 
    {
    case 1:
         std::cout  << "Thietmar Dioufrusyt" << endl;
        break;
    case 2:
         std::cout  << "Finn Byqvist" << endl;
        break;
    case 3:
         std::cout  << "Zola Olayinka" << endl;
        break;
    }

     std::cout  << endl << "Choose a quest: " << endl;
     std::cout  << "Wild Plains - 1" << endl << "Tales of Summer - 2" << endl;
     std::cout  << "Quest: ";
     std::cin >> playerQuest;
     std::cout  << endl << "You have selected: ";

    switch (playerQuest)
    {
    case 1:
         std::cout  << "Wild Plains" << endl;
        break;
    case 2:
         std::cout  << "Tales of Summer" << endl;
        break;
    }

     std::cout  << endl << "Choose a weapon: " << endl;
     std::cout  << "Sword of Eternal Fire - 1" << endl << "Magical Staff of Evendor - 2" << endl << "Bow of Bjorn Dsleo - 3" << endl;
     std::cout  << "Weapon: ";
     std::cin >> playerWeapon;
     std::cout  << endl << "You have selected: ";

    switch (playerWeapon)
    {
    case 1:
         std::cout  << "Sword of Eternal Fire" << endl;
        break;
    case 2:
         std::cout  << "Magical Staff of Evendor" << endl;
        break;
    case 3:
         std::cout  << "Bow of Bjorn Dsleo" << endl;
        break;
    }

    std::cout << endl << "Good luck on your adventure traveler!" << endl;

    struct player
    {
        int health;  //  player health
        int attack; //  player attack
        int coin;
    };

    player weapon;
    weapon.health = 12;
    weapon.attack = 5;
    weapon.coin = 50;


    struct enemy 
    {
        int health;
        int attack;
    };

     std::cout  << endl << "While exploring the land you see an orc in the distance...\n";
     cin.ignore();
     system("pause");
     std::cout  << "\n";

     std::cout  << "You try and sneak past the orc, but it's too late...\n";
     system("pause");
     std::cout  << "\n";

    enemy orc;  // enemy stats
    orc.health = 10;  
    orc.attack = 4;  


    std::cout  << endl << "The orc spots you and runs towards you!" << endl << endl;

     // First Arc of story
     //  fight sequence
    while (weapon.health > 0 && orc.health > 0) {
         std::cout  << "You have " << weapon.health << " health\n";
        system("pause");

         std::cout  << endl << "You attack it...\n";
        system("pause");

        orc.health = orc.health - weapon.attack;
         std::cout  << endl << "The orc has " << orc.health << " health\n";
        system("pause");

         std::cout  << endl << "The orc attacks...\n";
        weapon.health = weapon.health - orc.attack;

         std::cout  << endl << "You have " << weapon.health << " health" << endl;
        system("pause");

        if (orc.health <= 0);
        {
             std::cout  << endl <<"You attack the orc with all your might one last time." << endl;
             std::cout  << endl << "The orc falls over in pain. You have defeated the orc!\n";
            system("pause");
             std::cout  << endl << "You loot the orc and find 30 coins!"; 
            weapon.coin += 30;
             std::cout  << "  You now have " << weapon.coin << " coins!";
            break;
        }
    }

        char choice; // tracks player choices 

         std::cout  << endl << "You continue on your journey.";
         std::cout  << endl << "You come across a funny looking mushroom. Do you eat the mushroom ? (y/n)" << endl;
         std::cin >> choice;
        system("pause");
        if (choice == 'y' || choice == 'Y')
        {
           std::cout  << endl << "The mushroom has increased your health!";
           weapon.health += 20;
           std::cout  << endl << "You now have " << weapon.health << " health ";
        }

        else  if (choice == 'n' || choice == 'N')
        {
             std::cout  << endl << "You walk past the mushroom and continue on your journey." << endl;
        }

        // Town Arc of story

         std::cout  << endl << "You walk for 15 more miles and come across a small town.";
         std::cout  << endl << "In the town you see someone on the ground begging. Do you help them? (y/n)" << endl;
         std::cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
             std::cout  << "You help the person, but they steal some of your coins!";
             weapon.coin -= 55;
             std::cout  << endl << "You now have only " << weapon.coin << " coins" << endl;
            system("pause");
        }

        else  if (choice == 'n' || choice == 'N')
        {
             std::cout  << endl << "You decide not to help and walk past the person, but not before they steal some of your coins and trip you!";
             weapon.coin -= 55;
             weapon.health -= 5;
             std::cout << endl<< "You now have only " << weapon.coin << " coins" << endl;
             std::cout << "You now have " << weapon.health << " health." << endl;
             system("pause");
        }

             std::cout  << endl << "You are very tired from your journey and look for somewhere to eat and rest.";
             std::cout  << endl << "You walk towards the town's tavern and inn" << endl;
             system("pause");
             std::cout << endl << "The inn manager asks if you would like some food and a place to stay. Do you accept? (y/n)" << endl;
             std::cin >> choice;
             system("pause");
        if (choice == 'y' || choice == 'Y')
        {
             std::cout  << "The last room left costs 25 coins";
             weapon.coin -= 25;
             std::cout  << endl << "You now have  " << weapon.coin << " coins" << endl;
        }

        else  if (choice == 'n' || choice == 'N')
        {
            std::cout << endl << "You decline the offer and sleep in the horse stable. " << endl;
            system("pause");
            std::cout << endl << "In the middle of the night a horse gets spooked and ends up stepping on you." << endl;
            weapon.health = 1;
            std::cout << "You now have " << weapon.health << " health." << endl;
            std: cout << endl << "While unconscious someone manages to rob you of your coins";
            weapon.coin -= 25;
            std::cout << endl << "You now have  " << weapon.coin << " coins" << endl;
           
        }

             // Final Arc of story
             std::cout << endl << "With no coins left, you turn to begging in the town's streets!";
             std::cout << endl << "A new traveler arrives and walks towards you" << endl;
             std::cout << endl << "Do you attempt to steal from the traveler? (y/n)" << endl;
             std::cin >> choice;
             system("pause");
             if (choice == 'y' || choice == 'Y')
             {
                 std::cout << endl << "You pickpocket a large pouch of coins from the traveler";
                 weapon.coin += 350;
                 std::cout << endl << "You now have  " << weapon.coin << " coins" << endl; 
                 system("pause");
                 std::cout << endl << "You flee and the traveler takes notice of their missing coins.";
                 std::cout << endl << "They track you down and demand their coins back!" << endl;
                 system("pause");
                 std::cout << endl << "You attempt to flee again, but end up in a dead end alley!" << endl;
                 system("pause");
                 std::cout << endl << "You try to give the coins back to the traveler, but they already have their axe drawn " << endl;
                 system("pause");
                 std::cout << endl << "You close your eyes one last time, and think of what you possibly could have done instead  " << endl;
                 system("pause");
                 std::cout << endl << "The traveler swings their axe and it hits you in the stomach." << endl;
                 weapon.health -= 40;
                 system("pause");

                 std::cout << endl << "You have DIED.";
                 std::cout << endl << "************ GAME OVER ************" << endl;
                 std::cout << endl << "Thanks for playing Heroes of The Realm!";
                 std::cout << endl << "Start over to try again!" << endl;
             }

             else  if (choice == 'n' || choice == 'N')
             {
                 std::cout << endl << "After days of begging, you finally have gained enough coins to return home" << endl;
                 std::cout << endl << "You decide to improve your skills before going on another adventure." << endl;
                 std::cout << endl << "************ GAME OVER ************" << endl;
                 std::cout << endl << "Thanks for playing Heroes of The Realm!";
                 }

    }
    

