/*
Bonheur Bot(.cpp) v1.0
Copyright Adi Fehringer 2023 MIT Liscense
To Compile: g++ bonheurbot.cpp -o bonheurbot(.exe)
*/

#include <iostream>
#include <string>
#ifdef __WIN32
#include <windows.h>
#define slepp(x) Sleep(x)
#elif defined(__unix__)
#include <unistd.h>
#define slepp(x) sleep(x / 1000)
#else
#error Oopsies
#endif

using namespace std;

int main()
{
    cout << "Bonjour! Je suis Bonheur Bot! Comment tu t'appeles?\nTon Nom: ";
    string nom; cin >> nom;
    cout << endl << nom << "! Quel nom fantastique!"; slepp(1000); cout << "\nTu es une personne fantastique!"; slepp(1000); cout << "\nTu comptes!"; slepp(1000); cout << "\nJ'adore beaucoup tes yeux!"; slepp(1000); cout << "\nJe veux etre comme toi!"; slepp(1000); cout << "\nTu es tres beaux!"; slepp(1000); cout << "\nSalut!"; slepp(1000); cout << "\n\nNous au Bonheur Bot esperons que ca a gueri ton depression.\n";
    slepp(2500);
    return 0;
}