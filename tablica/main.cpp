#include <iostream>

using namespace std;

int tab[9];

int main() {

        for(int i=0; i<9; i++ ){
            cout << "Podaj liczbe: " << i << " \n";
            cin >> tab[i];
        }
        cout << "Tablica zawiera liczby: ";

        for(int j=0; j<9; j++)
            cout << tab[j] << " ";

    return 0;
}
