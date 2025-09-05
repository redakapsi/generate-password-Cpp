#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

bool ask(string Q)
{
    char choice;
    cout<<Q<<": ";
    cin>>choice;
    if(choice == 'y'|| choice =='Y')
    {
        return true;
    }
    return false;
}

string result(int length,string pool)
{
    system("cls");
    string password;
    for (int i = 1; i <= length; i++)
    {
        char random = pool[rand() % pool.size()];
        password += random;
    }
   return password;
}


int main()
{
  
    srand(time(0));
    string password="";
    string numbers = "1234567890";
    string symbols = "!@#$%^&*()_+=?~";
    string capital ="ABCDEFGHIJKLMNOPQRTSUVWXYZ";
    string small   ="abcdefghijklmnopqrstuvwxyz";


system("cls");
    bool ask_number = ask("Do you want to include number?(y/n) ");
    bool ask_symbols = ask("Do you want to include symbols?(y/n)  ");
    bool ask_capitals = ask("Do you want to include capital letters?(y/n) ");
    bool ask_small = ask("Do you want to include small letters?(y/n)  ");
    string pool="";
    if(ask_number) pool+=numbers;    
    if(ask_symbols) pool+=symbols;    
    if(ask_capitals) pool+=capital;    
    if(ask_small) pool+=small;
    if(pool.empty())
    {
        cout<<"error must include one at least!!";
        
    }
    int length;
    system("pause");
   
    cout << "Please enter the length(5-12) of the password: ";
    cin >> length;
 
    cout<<"the generated password is :"<<result(length,pool)<<endl;
    
    return 0;
}