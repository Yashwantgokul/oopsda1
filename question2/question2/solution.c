#include <stdio.h>

#define SALESMEN 5
#define PRODUCTS 3

int main() {

    int sales[SALESMEN][PRODUCTS];

    // Input sales data
    printf("Enter sales data:\n");

    for (int i = 0; i < SALESMEN; i++) {

        printf("\nSalesman %d:\n", i + 1);

        for (int j = 0; j < PRODUCTS; j++) {
            printf("  Product %d sales: ", j + 1);
            scanf("%d", &sales[i][j]);
        }
    }

    printf("\n==============================\n");
    printf("Total Sales by Each Salesman\n");
    printf("==============================\n");

    // Total sales by each salesman
    for (int i = 0; i < SALESMEN; i++) {

        int total = 0;

        for (int j = 0; j < PRODUCTS; j++) {
            total += sales[i][j];
        }

        printf("Salesman %d : %d\n", i + 1, total);
    }

    printf("\n==============================\n");
    printf("Total Sales of Each Product\n");
    printf("==============================\n");

    // Total sales of each product
    for (int j = 0; j < PRODUCTS; j++) {

        int total = 0;

        for (int i = 0; i < SALESMEN; i++) {
            total += sales[i][j];
        }

        printf("Product %d : %d\n", j + 1, total);
    }

    return 0;
}
