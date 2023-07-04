#include <stdio.h>

// Функція для знаходження НСД (Найбільший спільний дільник)
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функція для знаходження НСК (Найменше спільне кратне)
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int p;
    int numbers[20];

    // Зчитуємо кількість чисел
    scanf("%d", &p);

    // Зчитуємо натуральні числа
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }

    // Знаходимо НСК для заданих чисел
    int lcm = numbers[0];
    for (int i = 1; i < p; i++) {
        lcm = findLCM(lcm, numbers[i]);
    }

    // Виводимо результат
    printf("%d\n", lcm);

    return 0;
}
