#include <stdio.h>

#define SUBJECTS 3
#define STUDENTS 5

int main() {

    int marks[SUBJECTS][STUDENTS] = {0};
    int highest[SUBJECTS] = {0};

    // Input marks and find highest for each subject
    for (int i = 0; i < SUBJECTS; i++) {

        printf("\n--- Enter marks for Subject %d ---\n", i + 1);

        for (int j = 0; j < STUDENTS; j++) {

            printf("Student %d marks: ", j + 1);
            scanf("%d", &marks[i][j]);

            if (marks[i][j] > highest[i]) {
                highest[i] = marks[i][j];
            }
        }
    }

    // Display highest marks
    printf("\n===== Highest Marks in Each Subject =====\n");

    for (int i = 0; i < SUBJECTS; i++) {
        printf("Subject %d : %d\n", i + 1, highest[i]);
    }

    return 0;
}
