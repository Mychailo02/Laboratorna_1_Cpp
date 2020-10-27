// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


using namespace std;
int main() {
    float b, q;
    float s;
    setlocale(LC_CTYPE, "ukr");
    cout << "Введiть перший член: ";
    cin >> b;

    cout << "Введiть знаменник, по модулю менший один: ";
    cin >> q;

    s = b / (1 - q);
    cout << s << "\n";
}
