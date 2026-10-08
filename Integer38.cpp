#include <iostream>
using namespace std;

int main()
{
    // N - загальна кількість пасажирів
    // fullBuses - кількість повних автобусів
    // extraPassengers - кількість пасажирів у "зайвому" автобусі
    int N, fullBuses, extraPassengers;

    cin >> N;

    // Кількість повних автобусів
    fullBuses = N / 45;

    // Кількість пасажирів у "зайвому" автобусі
    extraPassengers = N % 45;

    // Виведення результатів
    cout << "Povnyh avtobusiv = " << fullBuses << endl;
    cout << "Pasazhyriv u zaivomu avtobusi = " << extraPassengers << endl;

    return 0;
}
