// my_pr.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;


class Say {

    string words;

public:

    Say(string& words) : words(words) { };

    void to_say() {
        cout << "i want to say you what ..." << endl;
    }
};

class Man {


private:
    int age;
    int weight;
    int height;
    int width;
    
public:
    Man() { };
    Man(int n) : age(n), weight(n), height(n), width(n) { };
    Man(const Man& other) {
        *this = other;
    }

    Man& operator = (const Man& other) {
        this->age = other.age;
        this->weight = other.weight;
        this->height = other.height;
        this->width = other.width;
        return *this;
    }

    void get_info() {
        cout << age << endl;
        cout << weight << endl;
        cout << height << endl;
        cout << width << endl;
    }

};


int main()
{
    Man arr[3];
    
    arr[0] = -1;
    arr[1] = 9;
    arr[2] = 6;

    return 0;
}