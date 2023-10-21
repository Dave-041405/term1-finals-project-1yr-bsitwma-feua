#include<iostream>
#include<string>
#include<windows.h>
#include<unistd.h>
#include"helloworld.h"
using namespace std;

class UserCredentials
{
    public:
    void user_credentials()
    {
    char response;
    const string USERNAME="admin";
	const string PASSWORD="password";
	string username,password;
	bool user_validated=false;

	do 
	{
			{
                system("cls");
				cout<<"Enter username: ";cin>>username;
                cout<<"Enter password: ";cin>>password;
                
                if (username==USERNAME&&password==PASSWORD) //TRUE
				{
					cout<<"User credentials are correct, Granting access"<<endl;
                    Sleep(1000);
                    //usleep(1000); //FOR UNIX SYSTEMS
                    system("cls");
					user_validated=true;
                    helloworld *hw = new helloworld();
                    hw->hello_world();
				}else //FALSE
				{
					cout<<"Wrong credentials"<<endl;
                    cout<<"Exit? (y/n): ";cin>>response;
                    if (response=='y')
                    {
                        return;
                    }
				}
			}
	} while (user_validated==false);
    }
};

