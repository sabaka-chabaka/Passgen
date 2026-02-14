#include <ctime>
#include <iostream>
#include "res.h"
using namespace std;

int main(int argc, char *argv[])
{
    std::srand(std::time(nullptr));
    cout << res::getPassword() << endl;

    return 0;
}

string res::getPassword() {
    string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    string password;

    for (int i = 0; i < 16; ++i) {
        int index = std::rand() % characters.length();
        password += characters[index];
    }

    return password;
}