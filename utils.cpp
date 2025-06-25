#include <bits/stdc++.h>
using namespace std;

void login()
{
    
}
void registering()
{

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
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
    
        switch (choice)
        {
        case 1: // login 
            login();
            exit = false;
            break;
        case 2: // register
            registering();
            exit = false;   
            break;
        default:
            cout << "Wrong Input, Please enter a correct choice. ";           
            break;
        }
    } while (exit);
    
}