// my_pr.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


class Say {

    string words;

public:

    Say(string& words) : words(words) { };

    void to_say() {
        cout << "i want to say you what ..." << endl;
    }
};


int main()
{
    try {

        cout << "ITS WAS 2 way" << endl;

        std::cout << "Hello World!\n";
        std::cout << "Iglad to see you!\n";
        std::cout << "MY name is Vladislav!\n";
        std::cout << "Whats`s yor name?\n";
        std::cout << "Hmmmmm?\n";

        std::cout << "Hello World!\n";
        std::cout << "Iglad to see you!\n";
        std::cout << "MY name is Vladislav!\n";
        std::cout << "Whats`s yor name?\n";
        std::cout << "Hmmmmm?\n";

        std::cout << "Hello World!\n";
        std::cout << "Iglad to see you!\n";
        std::cout << "MY name is Vladislav!\n";
        std::cout << "Whats`s yor name?\n";
        std::cout << "Hmmmmm?\n";

        std::cout << "Hello World!\n";
        std::cout << "Iglad to see you!\n";
        std::cout << "MY name is Vladislav!\n";
        std::cout << "Whats`s yor name?\n";
        std::cout << "Hmmmmm?\n";

        int a = 12;
        int b = 8;
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
