#include <stdio.h>

#define STUDENTS 20

int main() {

    char names[STUDENTS][30];

    int test1[STUDENTS];
    int test2[STUDENTS];
    int test3[STUDENTS];
    int quiz1[STUDENTS];
    int quiz2[STUDENTS];

    int total;
    float average;

    // Input student names
    printf("Enter student names:\n");

    for (int i = 0; i < STUDENTS; i++) {
        scanf("%s", names[i]);
    }

    // Input marks
    printf("\nEnter marks (Test1 Test2 Test3 Quiz1 Quiz2):\n");

    for (int i = 0; i < STUDENTS; i++) {
        scanf("%d %d %d %d %d",
              &test1[i],
              &test2[i],
              &test3[i],
              &quiz1[i],
              &quiz2[i]);
    }

    printf("\n====================================\n");
    printf("Student Results\n");
    printf("====================================\n");

    // Calculate and display results
    for (int i = 0; i < STUDENTS; i++) {

        total = test1[i] + test2[i] + test3[i] + quiz1[i] + quiz2[i];
        average = total / 5.0;

        printf("%-15s Total: %3d   Average: %.2f\n",
               names[i], total, average);
    }

    return 0;
}
