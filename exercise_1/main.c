#include <stdio.h>

int main() {
    int t1, t2, t3;
    double total_time;

    // Зчитуємо вхідні дані
    printf("Enter time for the men:\n");
    scanf("%d %d %d", &t1, &t2, &t3);

    // Обчислюємо загальний час
    total_time = (double)((t1 + t2 + t3)/3);

    // Виводимо результат
    printf("%.2f hours\n", total_time );

    return 0;
}

