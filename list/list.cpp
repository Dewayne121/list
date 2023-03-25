#include <iostream>
using namespace std;
void insertintolist(string[], int, string);
void printlist(string[]);
void removevalue(string list[], int size, string input);

int main()
{
    string list[5];
    string inputs;
    int option = 0;
    int removeval;
    string usernameI;
    string passwordI;
    string username = "admin";
    string password = "password123";
    bool loggedin = false;


    cout << "Please login" << endl;
    cin >> usernameI;
    cin >> passwordI;
    if (usernameI == "admin" && password == "password123")
    {
        loggedin = true;
        cout << "Successfully Logged In" << endl;
    }
    else
    {
        cout << "Logged In Failed" << endl;
        return 0;

    }
    if (loggedin == true) {
        while (true) {
            passwordI = "";
            cout << endl << "1: Insert Into List" << endl;
            cout << "2: Remove From List" << endl;
            cout << "3: Print List" << endl << endl;
            cin >> option;
            if (option == 1) {
                cout << endl << "Insert Your  Value Into The List" << endl;
                cin >> inputs;
                insertintolist(list, 5, inputs);
            }
            if (option == 2)
            {
                cout << endl << "The Current list:" << endl;
                for (int u = 0; u < 5; u++) {
                    cout << u; cout << ": "; cout << list[u] << endl;
                }
                cout << "Please Select What Value You Want To Remove" << endl;
                cin >> removeval;
                removevalue(list, removeval, inputs);
            }
            if (option == 3) {
                cout << "To View The List, Enter password" << endl;
                cin >> passwordI;
                if (passwordI == password) {
                    printlist(list);
                }
                else {
                    cout << "Please enter your password" << endl;
                }
            }
        }
    }
}

void insertintolist(string list[], int size, string input)
{
    for (int x = 0; x < size; x++)
    {
        if (list[x] == "")
        {
            list[x] = input;
            break;
        }
    }
}

void printlist(string list[])
{
   
    cout << endl << "The Current list:" << endl;
    for (int u = 0; u < 5; u++) {
        cout << u; cout << ": "; cout << list[u] << endl;
    }
}

void removevalue(string list[], int size, string input)
{
    for (int x = 0; x < 5; x++)
    {
        if (list[size] != "")
        {
            list[size] = "";
        }
    }
}
