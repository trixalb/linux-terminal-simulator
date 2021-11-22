#include<stdio.h>
#include<iostream>
#include<windows.h>
#include<string>
#include<cstring>
using namespace std;


int main()
{
string option = "nil";
int install_process = 115;
int app_list_manager = 0;
string install_app = "nil";
string command = "nil";
string commands[100];
string installeds_aplicattions[50];
commands[0] = "install";
commands[1] = "shutdown";
bool executing = true;
bool instaling_app = false;
while(executing == true)
{
cout << "$ ";
cin >> command;
if(command == commands[0])
{
cout << "insert enter the name of the application to install:";
cin >> install_app;
cout << "preparing to install aplication...";
Sleep(50000);
cout << "\nready to install ";
cout << install_app;
instaling_app = true;
while(instaling_app == true)
{
cout << "\nplease wait...";
Sleep(100000);
install_process -= 1;
if(install_process == 0 || install_process < 0)
{
if(app_list_manager != 50)
{
instaling_app = false;
install_process = 759;
command = "nil";
cout << "\nthe application ";
cout << install_app;
cout << "  has been successfully installed!\n";
}
else
{
cout << "your PC doesn't have enough room to run this action";
}
}
}
}
if(command == commands[1])
{
command = "nil";
cout << "Are you sure you want to shut down the system? (yes/no):";
cin >> option;
if(option != "yes" and option != "no")
{
cout << "Error 404";
cout << "\nNot Found\n";
}
if(option == "yes")
{
cout << "good Bye!";
executing = false;
}
if(option == "no")
{
cout << ":)\n";
}
}
}
}
