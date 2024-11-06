1)#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <ctime>
#include <string.h>

using namespace std;

#include "ArrayFunctions.h"



void main() {
    int amountOfBooks = 0;
    char** str = new char* [amountOfBooks];

    while (true) {
        cout << "1 - Add a book\n2 - Rename book\n3 - Delete book\n4 - Exit application\n5 - Show all books";
        int result;
        cin >> result;
        cin.ignore();

        if (result == 1) {
            char** tempArr = new char* [amountOfBooks];
            for (int i = 0; i < amountOfBooks; i++) {
                tempArr[i] = new char[strlen(str[i]) + 1];
                for (int j = 0; j < strlen(str[i]) + 1; j++) {
                    tempArr[i][j] = (char)str[i][j];
                }

                delete[] str[i];
                str[i] = nullptr;
            }

            delete[] str;
            str = nullptr;

            amountOfBooks++;

            str = new char* [amountOfBooks];

            for (int i = 0; i < amountOfBooks - 1; i++) {
                str[i] = new char[strlen(tempArr[i]) + 1];
                str[i] = tempArr[i];

                delete[] tempArr[i];
                tempArr[i] = nullptr;
            }

            delete[] tempArr;
            tempArr = nullptr;

            str[amountOfBooks - 1] = new char[12];

            cout << "Add new book\n";

            cin.getline(str[amountOfBooks - 1], 12);
        }
        else if (result == 2) {
            // Запуск функції видалення книги
        }
        else if (result == 3) {
            // Запуск функції переіменування книги
        }
        else if (result == 4) {
            exit(0);
        }
        else if (result == 5) {
            PrintDynamicBooks(str, amountOfBooks);
        }
        else {
            cout << "Incorrect value\n";
        }
    }
}
############################
2)void PrintDynamicArray(char* str) {
    for (int i = 0; i < strlen(str) + 1; i++) {
        cout << str[i] << endl;
    }
}

void PrintDynamicBooks(char** str, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }
}
