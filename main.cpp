#include <stdlib.h>

#include <iostream>

using namespace std;

void search_by_name_or_symbol() {}

void search_by_atomic_number() {}

void display_periodic_table() {}

int main(int argc, char const *argv[]) {
    int choice;

    while (true) {
        cout << "\t1. Search element by name or sysmbol" << endl;
        cout << "\t2. Search element by atomic number" << endl;
        cout << "\t3. Display periodic table" << endl;
        cout << "\t4. Exit" << endl;
        cout << "Enter your choice : " << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                search_by_name_or_symbol();
                break;
            }
            case 2: {
                search_by_atomic_number();
                break;
            }
            case 3: {
                display_periodic_table();
                break;
            }
            case 4: {
                exit(0);
            }
            default: {
                break;
            }
        }
    }

    return 0;
}
