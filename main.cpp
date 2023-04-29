#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> menu;
vector<int> price;

vector<int> userid;
vector<int> passW;
vector<string> CusName;
vector<long long> number;
vector<string> address;

void usersData()
{
    if (CusName.size() > 0)
    {
        system("cls");
        cout << "The Registered Customers are" << endl;
        for (unsigned int i = 0; i < CusName.size(); i++)
        {
            cout << i + 1 << "\t NAME: " << CusName[i] << endl;
            cout << "\t ID: " << userid[i] << endl;
            cout << "\t PHONE NUMBER: " << number[i] << endl;
            cout << "\t ADDRESS: " << address[i] << endl;
            cout << "\n"
                 << endl;
        }
        system("PAUSE");

        system("cls");
    }
    else
    {
        system("cls");
        cout << "\n\n\n\n"
             << endl;
        cout << "\t There are No Registered Customers" << endl;
        system("PAUSE");

        system("cls");
    }
}
void ShowMenu()
{
    system("CLS");
    cout << "The Following Food are available" << endl;
    for (unsigned int i = 0; i < menu.size(); i++)
    {
        cout << "\t" << i + 1 << " " << menu[i] << " $" << price[i] << endl;
    }
}
void deleteDish()
{
    system("CLS");
    cout << "The Following Food are available to be deleted" << endl;
    for (unsigned int i = 0; i < menu.size(); i++)
    {
        cout << "\t" << i + 1 << " " << menu[i] << " " << price[i] << endl;
    }
    cout << "Enter The Number Assigned To the Dish You Want To Delete " << endl;
    int i;
    cin >> i;
    i -= 1;
    menu.erase(menu.begin() + i);
    price.erase(price.begin() + i);
}
void newDish(string dish, int dishPrice)
{
    menu.push_back(dish);
    price.push_back(dishPrice);
}
void AdminLogin()
{
    while (true)
    {
        system("CLS");

        cout << "Welcome!!! " << endl;
        cout << "Enter Your Password:";
        int password;
        cin >> password;
        while (true)
        {
            if (password == 123)
            {
                system("CLS");
                cout << "Welcome!!" << endl;
                cout << "What would you like to do today?" << endl;

                cout << "\t 1. Show Menu." << endl;
                cout << "\t 2. Add New Dish." << endl;
                cout << "\t 3. Delete existing Dishes." << endl;
                cout << "\t 4. Show Users Data. " << endl;
                cout << "\t 5. Back. " << endl;
                int choice;
                cin >> choice;
                if (choice == 1)
                {
                    system("CLS");
                    ShowMenu();
                    system("PAUSE");
                    // break;
                }
                else if (choice == 2)
                {
                    system("CLS");
                    cout << "\t Enter The Name and the Price of the Dish to be Added:";
                    string Dish;
                    cin >> Dish;
                    int DishPrice;
                    cin >> DishPrice;
                    newDish(Dish, DishPrice);
                    // break;
                }
                else if (choice == 3)
                {
                    system("CLS");
                    deleteDish();
                }
                else if (choice == 4)
                {

                    usersData();
                }
                else if (choice == 5)
                {
                    system("PAUSE");
                    break;
                    system("CLS");
                }
                else
                {
                    cout << "INVALID INPUT!!!" << endl;
                }
            }
            else
            {
                cout << "INCORRECT PASSWORD!!!" << endl;
                system("PAUSE");
                system("CLS");
                break;
            }
        }
        break;
    }
}
void placeOrder()
{
    ShowMenu();
    cout << "Enter the number of the dish ";
    string i;
    cin >> i;
    //  string found = menu.find(i);
    // if (found != npos )
};
void showMyDetail(){};
void billReceipt(){};
void CusPanel()

{
    system("CLS");
    while (true)
    {
        cout << "Welcome!!" << endl;
        cout << "What would you like to do today?" << endl;

        cout << "\t 1. Show Menu." << endl;
        cout << "\t 2. Place My Order." << endl;
        cout << "\t 3. Show My Detail." << endl;
        cout << "\t 4. Show My Bill Receipt." << endl;
        cout << "\t 5. Back. " << endl;
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            ShowMenu();
            system("PAUSE");
            system("CLS");
        }
        else if (choice == 2)
        {
            placeOrder();
        }
        else if (choice == 3)
        {
            showMyDetail();
        }
        else if (choice == 4)
        {
            billReceipt();
        }
        else if (choice == 5)
        {
            system("PAUSE");
            break;
            system("CLS");
        }
        else
        {
            cout << "INVALID INPUT!!!" << endl;
        }
    }
}

void CusLogin()
{
    system("CLS");
    cout << "Welcome To MOH Food" << endl;
    cout << "\t 1. New Registration " << endl;
    cout << "\t 2. Login " << endl;

    cout << "Please Select: ";
    int select;
    cin >> select;
    if (select == 1)
    {
        system("cls");
        cout << "Welcome!!! " << endl;
        cout << "Please Set Up Your Profile!! " << endl;
        cout << "Enter Your Name: ";
        string Cusname;
        if (cin.peek() == '\n') //
        {
            cin.ignore();
        }
        getline(cin, Cusname);
        CusName.push_back(Cusname);
        int userId;
        cout << "Enter Your ID: ";
        cin >> userId;
        userid.push_back(userId);
        cout << "Enter Your Phone Number: ";
        long long Number;
        cin >> Number;
        number.push_back(Number);
        cout << "Enter Your Address: ";
        string Address;
        if (cin.peek() == '\n') //
        {
            cin.ignore();
        }
        getline(cin, Address);
        address.push_back(Address);
        cout << "THANK YOU!!" << endl;
        system("PAUSE");
        system("CLS");
        CusPanel();
    }
    else if (select == 2)
    {
        while (true)
        {
            int userid;
            string passW;
            cout << "Welcome!!! " << endl;
            cout << "Enter Your UserID: ";
            cin >> userid;
            cout << "Enter Your Password:";
            cin >> passW;

            while (true)
            {

                if ((userid == 123) && (passW == "123"))
                {
                    CusPanel();
                }
                else
                {
                    cout << "INCORRECT PASSWORD!!!" << endl;
                    system("PAUSE");
                    system("CLS");
                }
                break;
            }
        }
    }
}

int main()
{
    // Available Dishes
    menu.push_back("Rice ");
    menu.push_back("Beans ");
    menu.push_back("Semo ");
    menu.push_back("Amala ");
    menu.push_back("Pounded Yam");

    // price list
    price.push_back(100);
    price.push_back(200);
    price.push_back(300);
    price.push_back(400);
    price.push_back(500);

    while (true)
    {
        system("cls");
        cout << "Welcome To MOH Food" << endl;
        cout << "\t 1. Admin Login" << endl;
        cout << "\t 2. Customer Login " << endl;
        cout << "Please Select: ";
        int select;
        cin >> select;
        if (select == 1)
        {
            AdminLogin();
        }
        else if (select == 2)
        {
            CusLogin();
        }
        else
        {
            cout << "INVALID CHOICE!!!" << endl;
            system("PAUSE");
            system("CLS");
        }
    }

    return 0;
}
