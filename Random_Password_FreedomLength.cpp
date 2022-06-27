#include <iostream>
#include <string>
using namespace std;

int main()
{
    int password_length;
    cout << "Enter the length of the password: ";
    cin >> password_length;
    char password_data[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
                           "!@#$%^&*()_+-=[]{}|;':,./<>?";

    srand(time(NULL));
    cout << "Password: ";
    for (int i = 0; i < password_length; i++)
    {
        cout << password_data[rand() % (sizeof(password_data) - 1)];
    }
    return 0;
}
