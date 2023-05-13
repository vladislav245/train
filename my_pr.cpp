// my_pr.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

class Error {

    static void error() {

    }
};

int main()
{

    cout << "calcutation" << endl;

    double x, y;

    cout << "write x and y" << endl;
    cin >> x;
    cin >> y;

    try {
        pow(x, y);
        sqrt(x);
        sqrt(y);
    }
    catch (...) {
        cout << "it`s problem" << endl;
    }

    try {
        sqrt(pow(x, y));
        sqrt(pow(y, x));
        pow(sin(x), cos(x));
        pow(sin(y), cos(y));
        pow(sin(x), cos(y));
        pow(sin(y), cos(x));
        pow(sin(x), sin(x));
        pow(cos(x), cos(x));
        pow(sin(y), sin(y));
        pow(cos(y), cos(y));
    }
    catch (...) {
        cout << "it`s problem" << endl;
    }


    try {
        pow(x, y);
        sqrt(x);
        sqrt(y);
    }
    catch (...) {
        cout << "it`s problem" << endl;
    }

    try {
        sqrt(pow(x, y));
        sqrt(pow(y, x));
        pow(sin(x), cos(x));
        pow(sin(y), cos(y));
        pow(sin(x), cos(y));
        pow(sin(y), cos(x));
        pow(sin(x), sin(x));
        pow(cos(x), cos(x));
        pow(sin(y), sin(y));
        pow(cos(y), cos(y));
    }
    catch (...) {
        cout << "it`s problem" << endl;
    }



    try {
        pow(x, y);
        sqrt(x);
        sqrt(y);
    }
    catch (...) {
        cout << "it`s problem" << endl;
    }

    try {
        sqrt(pow(x, y));
        sqrt(pow(y, x));
        pow(sin(x), cos(x));
        pow(sin(y), cos(y));
        pow(sin(x), cos(y));
        pow(sin(y), cos(x));
        pow(sin(x), sin(x));
        pow(cos(x), cos(x));
        pow(sin(y), sin(y));
        pow(cos(y), cos(y));
    }
    catch (...) {
        cout << "it`s problem" << endl;
    }



    try {
        pow(x, y);
        sqrt(x);
        sqrt(y);
    }
    catch (...) {
        cout << "it`s problem" << endl;
    }

    try {
        sqrt(pow(x, y));
        sqrt(pow(y, x));
        pow(sin(x), cos(x));
        pow(sin(y), cos(y));
        pow(sin(x), cos(y));
        pow(sin(y), cos(x));
        pow(sin(x), sin(x));
        pow(cos(x), cos(x));
        pow(sin(y), sin(y));
        pow(cos(y), cos(y));
    }
    catch (...) {
        cout << "it`s problem" << endl;
    }




    try {
        pow(x, y);
        sqrt(x);
        sqrt(y);
    }
    catch (...) {
        cout << "it`s problem" << endl;
    }

    try {
        sqrt(pow(x, y));
        sqrt(pow(y, x));
        pow(sin(x), cos(x));
        pow(sin(y), cos(y));
        pow(sin(x), cos(y));
        pow(sin(y), cos(x));
        pow(sin(x), sin(x));
        pow(cos(x), cos(x));
        pow(sin(y), sin(y));
        pow(cos(y), cos(y));
    }
    catch (...) {
        cout << "it`s problem" << endl;
    }
























    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
