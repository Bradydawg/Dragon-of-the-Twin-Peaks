// Ian Crawford && Alex Ammar
//5.20.22
#define _WIN32_WINNT  0x0500
#include <windows.h>
#include <Wincon.h>
#include <string>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <dos.h>
#include <conio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
#include <thread>

using namespace std;

void type_text(const std::string& text)
{
    for (std::size_t i = 0; i < text.size(); ++i)
    {

        std::cout << text[i] << std::flush;

        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }
}


int main()
{
    //Main Program
    bool stop = false;
    string temp;
    int enterKey = atoi(temp.c_str());

    string classChoice;
    int health;
    int damage;
    string name;
    char L = 178;
    int repeat;
    string menu1;
    repeat = 5;
      HWND hWnd = GetConsoleWindow();
  ShowWindow(hWnd,SW_SHOWMAXIMIZED);
  
  //Merchant
  
  
  //Goblin
  
  
  //Krosis
    int op = 2;
    int health;
    int damage;
    int ko1;
    int ko2;
    int ko3;
    int priest;



system("CLS");


  cout << "                                                                  " << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << endl;
  cout << "                                                                  " << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << endl;
  cout << "                                                                  " << L << L << "                                                                                                                                                                                    " << L << L << endl;
  cout << "                                                                  " << L << L << "                                                                                                                                                                                    " << L << L << endl;
  cout << "                                                                  " << L << L << "   *******                                                           ****     **   **                **********            **            *******                    **              " << L << L << endl;
  cout << "                                                                  " << L << L << "  /**////**                    *****                                /**/     /**  /**               /////**///            //            /**////**                  /**              " << L << L << endl;
  cout << "                                                                  " << L << L << "  /**    /** ******  ******   **///**  ******  *******     ******  ******   ******/**       *****       /**     ***     ** ** *******   /**   /**  *****   ******  /**  **  ******  " << L << L << endl;
  cout << "                                                                  " << L << L << "  /**    /**//**//* //////** /**  /** **////**//**///**   **////**///**/   ///**/ /******  **///**      /**    //**  * /**/**//**///**  /*******  **///** //////** /** **  **////   " << L << L << endl;
  cout << "                                                                  " << L << L << "  /**    /** /** /   ******* //******/**   /** /**  /**  /**   /**  /**      /**  /**///**/*******      /**     /** ***/**/** /**  /**  /**////  /*******  ******* /****  //*****   " << L << L << endl;
  cout << "                                                                  " << L << L << "  /**    **  /**    **////**  /////**/**   /** /**  /**  /**   /**  /**      /**  /**  /**/**////       /**     /****/****/** /**  /**  /**      /**////  **////** /**/**  /////**  " << L << L << endl;
  cout << "                                                                  " << L << L << "  /*******  /***   //********  ***** //******  ***  /**  //******   /**      //** /**  /**//******      /**     ***/ ///**/** ***  /**  /**      //******//********/**//** ******   " << L << L << endl;
  cout << "                                                                  " << L << L << "  ///////   ///     ////////  /////   //////  ///   //    //////    //        //  //   //  //////       //     ///    /// // ///   //   //        //////  //////// //  // //////    " << L << L << endl;
  cout << "                                                                  " << L << L << "                                                                                                                                                                                    " << L << L << endl;
  cout << "                                                                  " << L << L << "                                                                                                                                                                                    " << L << L << endl;
  cout << "                                                                  " << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << endl;
  cout << "                                                                  " << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << endl;



  Sleep(1000);

  type_text("Loading...  ");
  for (int i = 0; i < repeat; ++i) {
  cout << "\b|";
  Sleep(200);
  cout << "\b/";
  Sleep(200);
  cout << "\b-";
  Sleep(200);
  cout << "\b\\";
  Sleep(200);
  }

  menu:
  system("CLS");

  cout << "                                                                                             " << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << endl;
  cout << "                                                                                             " << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << endl;
  cout << "                                                                                             " << L << L << "                                              Dragon of the Twin Peaks                                                 " << L << L << endl;
  cout << "                                                                                             " << L << L << "                                   Please choose from one of the menu options below:                                   " << L << L << endl;
  cout << "                                                                                             " << L << L << "                                                                                                                       " << L << L << endl;
  cout << "                                                                                             " << L << L << "                                          1) Begin the treacherous journey                                             " << L << L << endl;
  cout << "                                                                                             " << L << L << "                                           2) Learn how to play the game                                               " << L << L << endl;
  cout << "                                                                                             " << L << L << "                                  3) Look over classes before beginning the journey                                    " << L << L << endl;
  cout << "                                                                                             " << L << L << "                                                                                                                       " << L << L << endl;
  cout << "                                                                                             " << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << endl;
  cout << "                                                                                             " << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << L << endl;
  cout << "                                                                                                                                                    +-------+" << endl;
  cout << "                                                                                                                                                    |       |" << endl;
  cout << "                                                                                                                                                    +-------+" << endl;
    printf("\033[2A");
    printf("\033[152C");
    cin >> menu1;

    if(menu1 == "1")
    {
        system("CLS");
        goto classes;
    }
    if(menu1 == "2")
    {
        system("CLS");
        type_text("Dragon of the Twin Peaks is a game inspired by Skyrim and The Oregon Trail. It takes the functionality of the Oregon trail, being a game played on a console interface, and the storyline of Skyrim, making the player face obstacles such as dragons, skeletons, wizards, and more mythical creatures. \nThere are three classes, Swordsman, Archer, and Axe Wielder. Each class is special in it's own way. Some have more health than others, some have more damage. It's up to you to figure out which class suits you best.\n");
        type_text("Press enter to return to the main menu\n");
        cin.ignore(20,'\n');
        getline(cin, temp);
        if (temp.empty())
    {
        stop = true;
    }
        goto menu;
    }
    if(menu1 == "3")
    {
    system("CLS");
    type_text("These are the current classes.");
    cout<<endl;
    cout << "                                                                                                                                                           )                   ,  /\\  .                         "<<endl;
    cout << "                                                                                                                                                            \\                 //`-||-'\\\\                      "<<endl;
    cout << "                                                                                                                      /| ________________                    )               (| -=||=- |)                        "<<endl;
    cout << "                                                                                                                 O|===| >________________>             ##-------->            \\\\,-||-.//                       "<<endl;
    cout << "                                                                                                                       \\|                                   )                     ||                            "<<endl;
    cout << "                                                                                                                                                            /                     ||                             "<<endl;
    cout << "                                                                                                                                                           (                      ||                             "<<endl;
    cout << "                                                                                                                                                                                                                 "<<endl;
    cout << "                                                                                                                           Swordsman(1)               Archer(2)              Axe Wielder(3)                      "<<endl;
    cout << "                                                                                                                             Health: 5                Health: 6                Health: 3"<< endl;
    cout << "                                                                                                                             Damage: 5                Damage: 3                Damage: 7"<< endl;
    type_text("Press enter to return to the main menu");
    cin.ignore(20,'\n');
    getline(cin, temp);
    if (temp.empty())
    {
        stop = true;
    }
    goto menu;
    }
    else
    {
        type_text("Please choose between 1 and 3");
        Sleep(3000);
        goto menu;
    }



    classes:
    type_text("What is your name?");
    cout<<endl;
    cin>>name;
    classselection:
    system("CLS");

    type_text("Please choose a class.");
    cout<<endl;
    cout << "                                                                                                                                                           )                   ,  /\\  .                         "<<endl;
    cout << "                                                                                                                                                            \\                 //`-||-'\\\\                      "<<endl;
    cout << "                                                                                                                      /| ________________                    )               (| -=||=- |)                        "<<endl;
    cout << "                                                                                                                 O|===| >________________>             ##-------->            \\\\,-||-.//                       "<<endl;
    cout << "                                                                                                                       \\|                                   )                     ||                            "<<endl;
    cout << "                                                                                                                                                            /                     ||                             "<<endl;
    cout << "                                                                                                                                                           (                      ||                             "<<endl;
    cout << "                                                                                                                                                                                                                 "<<endl;
    cout << "                                                                                                                           Swordsman(1)               Archer(2)              Axe Wielder(3)                      "<<endl;
    cout << "                                                                                                                             Health: 5                Health: 6                Health: 3"<< endl;
    cout << "                                                                                                                             Damage: 5                Damage: 3                Damage: 7"<< endl;
    cout << "                                                                                                                                                      +-------+" << endl;
    cout << "                                                                                                                                                      |       |" << endl;
    cout << "                                                                                                                                                      +-------+" << endl;
    printf("\033[2A");
    printf("\033[154C");




    classChoice == "";
    cin>> classChoice;

    if(classChoice == "1")
    {
        system("CLS");
        type_text("You have selected Swordsman. ");
        type_text("Your stats are:");
        cout<<endl;
        health=5;
        damage=5;
        goto stats;
    }
    if (classChoice == "2")
    {
        system("CLS");
        type_text("You have selected Archer. ");
        type_text("Your stats are:");
        cout<<endl;
        health=6;
        damage=3;
        goto stats;
    }
    if (classChoice == "3")
    {
        system("CLS");
        type_text("You have selected Axe Wielder. ");
        type_text("Your stats are:");
        cout<<endl;
        health=3;
        damage=7;
        goto stats;
    }
   if(classChoice == "42")
   {
       system("CLS");
       type_text("Did you look at the code? Dirty little slut.");
       cout<<endl;
       type_text("You have selected: Dragon Slayer");
      cout<<endl;
       health=10;
       damage= 10;
       goto stats;
   }
    else
    {
        type_text("Please choose an actual class");
        Sleep(3000);
        goto classselection;
    }

    stats:
    type_text("Health ");
    cout<<health<<endl;
    type_text("Damage ");
    cout<<damage<<endl;
    cout<<"Press enter to continue"<<endl;
    cin.ignore(20,'\n');
    getline(cin, temp);
    if (temp.empty())
    {
        stop = true;
    }
    system("CLS");

    type_text("Hello ");
    cout<<name;

    type_text(", the people need your help! Debbi, the dragon on the Twin Peaks, is wreaking havoc. Climb the mountain and save us!");


    return 0;
}

