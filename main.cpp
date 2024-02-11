#include <iostream>
#include <cmath>
#define MAX 1000000

int main() {
    // передаётся как аргумент при сборке
#ifdef USE_FLOAT
    float numbers[MAX];
    float sum = 0;
#else
    double numbers[MAX];
    double sum = 0;
#endif

    // СНАЧАЛА заполняем массив, ЗАТЕМ суммируем (по условию)
    for (int i = 0; i < MAX; i++) {
        numbers[i] = sin(2*3.1415926 * i/MAX);
    }
    for (int j = 0; j < MAX; j++) {
        sum += numbers[j];
    }

#ifdef USE_FLOAT
    printf("\nFloat: ");
#else
    printf("\nDouble: ");
#endif
    printf("%.20f\n", sum);
}
