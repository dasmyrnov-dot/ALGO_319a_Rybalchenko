#include <iostream>
using namespace std;

int main()
{
    // N - тризначне число
    // a, b, c - його цифри
    // sum - сума цифр
    // product - добуток цифр
    int N, a, b, c, sum, product;

    // Введення тризначного числа
    cin >> N;

    // Знаходимо цифру сотень
    a = N / 100;

    // Знаходимо цифру десятків
    b = (N / 10) % 10;

    // Знаходимо цифру одиниць
    c = N % 10;

    // Обчислюємо суму цифр
    sum = a + b + c;

    // Обчислюємо добуток цифр
    product = a * b * c;

    // Виведення результатів
    cout << "Suma tsyfr = " << sum << endl;
    cout << "Dobutok tsyfr = " << product << endl;

    return 0;
}
