#include <iostream>
#include <clocale>

using namespace std;
/*
Лабораторная работа 3, индивидуальное задание 4 - оператор switch. Индивидуальный вариант 24.
*/

int main() {
    setlocale(LC_ALL, "ru");
    int den;
    cout << "Введите номер дня недели: ";
    cin >> den;
    switch (den) {
    case 1: cout << "Сегодня понедельник ";
        break;
    case 2: cout << "Сегодня вторник ";
        break;
    case 3: cout << "Сегодня среда ";
        break;
    case 4: cout << "Сегодня четверг ";
        break;
    case 5: cout << "Сегодня пятница ";
        break;
    case 6: cout << "Сегодня суббота ";
        break;
    case 7: cout << "Сегодня воскресенье ";
        break;
    default:
        cout << "В неделе только 7 дней" << endl;
        break;
    }
}