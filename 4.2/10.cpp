//swap two numbers

#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int num) {
        value = num;
    }

    void display() {
        cout << "Number: " << value << endl;
    }

    friend void swapNumbers(Number& num1, Number& num2);
};

void swapNumbers(Number& num1, Number& num2) {
    num1.value = num1.value + num2.value;
    num2.value = num1.value - num2.value;
    num1.value = num1.value - num2.value;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Number n1(num1);
    Number n2(num2);

    cout << "Before swapping:" << endl;
    n1.display();
    n2.display();

    swapNumbers(n1, n2);

    cout << "After swapping:" << endl;
    n1.display();
    n2.display();

    return 0;
}