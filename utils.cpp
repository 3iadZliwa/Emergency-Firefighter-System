#include <bits/stdc++.h>
#include "utils.h"
using namespace std;

void login() // create login as firefighter staff and customer
{
    fstream firefighterstream("firefighter.txt");
    fstream citizenstream("citizen.txt");
    fstream staffstream("staff.txt");
    int c;
    bool exit = true;
    do
    {
        cout << "Welcome to Login Page!" << endl;
        cout << "-----------------------" << endl;
        cout << "(1) As a Fire Fighter." << endl;
        cout << "(2) As a Citizen." << endl;
        cout << "(3) As a Staff" << endl;
        cout << "(4) Go back to Main Menu." << endl << endl;

        cout << "Choose your option: ";
        string email, password;
        string stored_email,stored_pass;
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter your email: ";
            cin >> email;
            cout << "Enter your password: ";
            cin >> password;
            while (firefighterstream >> stored_email >> stored_pass)
            {
                if (stored_email == email && stored_pass == password)
                {
                    exit = false;
                    // continue logic
                    break;
                }
            }
            if(exit) cout << "Email/Password is not found" << endl;
            break;
        case 2:
            cout << "Enter your email: ";
            cin >> email;
            cout << "Enter your password: ";
            cin >> password;
            while (citizenstream >> stored_email >> stored_pass)
            {
                if (stored_email == email && stored_pass == password)
                {
                    exit = false;
                    // continue logic
                    break;
                }
            }
            if(exit) cout << "Email/Password is not found" << endl;
            break;
        case 3:
            cout << "Enter your email: ";
            cin >> email;
            cout << "Enter your password: ";
            cin >> password;
            while (staffstream >> stored_email >> stored_pass)
            {
                if (stored_email == email && stored_pass == password)
                {
                    exit = false;
                    // continue logic
                    break;
                }
            }
            if(exit){cout << "Email/Password is not found" << endl;}
            break;
        case 4:
            exit = false;
            MainMenu();
            break;
        default:
            cout << "Sorry, Wrong Input! Please try again." << endl;
            break;
        }
    } while (exit);
}
void registering() // create register as firefighter staff customer
{
    fstream firefighterstream("firefighter.txt", ios::app);
    fstream citizenstream("citizen.txt", ios::app);
    fstream staffstream("staff.txt", ios::app);

    int c;
    bool exit = true;
    do
    {
        cout << "Welcome to Register Page!" << endl;
        cout << "-----------------------" << endl;
        cout << "(1) As a Fire Fighter." << endl;
        cout << "(2) As a Citizen." << endl;
        cout << "(3) As a Staff" << endl;
        cout << "(4) Go back to Main Menu." << endl
             << endl;

        cout << "Choose your option: ";
        cin >> c;
        string password;
        string email;
        switch (c)
        {
        case 1:
            cout << "Enter your email: ";
            cin >> email;
            cout << "Enter your password: ";
            cin >> password;
            firefighterstream << email << " " << password << endl;
            exit = false;
            break;
        case 2:
            cout << "Enter your email: ";
            cin >> email;
            cout << "Enter your password: ";
            cin >> password;
            citizenstream << email << " " << password << endl;
            exit = false;
            break;
        case 3:
            cout << "Enter your email: ";
            cin >> email;
            cout << "Enter your password: ";
            cin >> password;
            staffstream << email << " " << password << endl;
            exit = false;
            break;
        case 4:
            exit = false;
            MainMenu();
            break;
        default:
            cout << "Sorry, Wrong Input! Please try again." << endl;
            break;
        }
    } while (exit);
}
void MainMenu()
{
    bool exit = true;
    do
    {
        cout << "Main Menu, Welcome to the Firefighting system!";
        cout << "-----------------------------------------------\n";

        cout << "(1) Register\n";
        cout << "(2) Login\n";
        cout << "(3) Exit the application\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1: // register
            registering();
            exit = false;
            break;
        case 2: // login
            login();
            exit = false;
            break;
        case 3:
            cout << "Thank you! See you later!" << endl;
            exit = false;
            break;
        default:
            cout << "Wrong Input, Please enter a correct choice. \n";
            break;
        }
    } while (exit);
}

