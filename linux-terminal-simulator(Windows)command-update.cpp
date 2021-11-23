#include<stdio.h>
#include<iostream>
#include<windows.h>
#include<string>
#include<cstring>
using namespace std;


int main()
{
bool searching = false;
string app_to_find = "nil";
int app_searcher = 0;
string valids_app[2];
string option = "nil";
int install_process = 115;
int app_list_manager = 0;
string install_app = "nil";
string command = "nil";
string commands[100];
string installeds_aplicattions[50];
commands[0] = "install";
commands[1] = "shutdown";
commands[2] = "crash";
commands[3] = "search";
valids_app[0] = "OperaGX";
valids_app[1] = "Firefox";
valids_app[2] = "Chrome";
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
if(install_app != valids_app[0] and install_app != valids_app[1] and install_app != valids_app[2])
{
cout << "Invalid aplication";
}
else
{
cout << "preparing to install aplication...";
Sleep(50000);
cout << "\nready to install ";
cout << install_app;
instaling_app = true;
while(instaling_app == true)
{
cout << "\nplease wait...";
Sleep(10000);
install_process -= 1;
if(install_process == 0 || install_process < 0)
{
if(app_list_manager != 50)
{
instaling_app = false;
install_process = 115;
command = "nil";
cout << "\nthe application ";
cout << install_app;
installeds_aplicattions[app_list_manager] = install_app;
cout << "  has been successfully installed!\n";
app_list_manager += 1;
}
else
{
cout << "your PC doesn't have enough room to run this action\n";
}
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
if(command == commands[2])
{
while(1 == 1)
{
cout << "iojdfxjighfdnjiy8hj8uj8uj8utjhdjgidjigljdlfgjljkglkdjhkjoitujyr54345oiuhoiiitijfjgoijrhiojrijdikt";
cout << "heaugeiuhujriufjugjvfumftihors57h545455453nyr 10y56t-0ohi-0tygfinu-0m,tr5ij 5 itkhykrpo01poyuopukgjoipi1'kjoijkgiojtgioj   oihkmoigjoihf";
cout << "jiahfiufhysuhytg9e8hud45rfghd45rg0000 d0g0drged´r gp8644d44plgpod nb nb erktpokop  khpgkpytgkty";
}
}
}
}
