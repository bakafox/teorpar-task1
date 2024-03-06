#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#define MAX 10000000

using namespace std;

int main() {
    // передаётся как аргумент при сборке
#ifdef USE_FLOAT
    vector<float> numbers(MAX);
    float sum = 0;
#else
    vector<double> numbers(MAX);
    double sum = 0;
#endif

    // СНАЧАЛА заполняем массив, ЗАТЕМ суммируем (по условию)
    for (int i = 0; i < MAX; i++) {
        numbers[i] = sin(2 * M_PI * i/MAX);
    }
    for (int j = 0; j < MAX; j++) {
        sum += numbers[j];
    }

#ifdef USE_FLOAT
    cout << "Float: " << fixed << setprecision(20) << sum << endl;
#else
    cout << "Double: " << fixed << setprecision(20) << sum << endl;
#endif
}
