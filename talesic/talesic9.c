#include <stdio.h>

int main() {
    char names[3][50];
    float grades[3];
    float highest;

    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter student %d name: ", i + 1);
        scanf(" %49[^\n]", names[i]);

        printf("Enter grade: ");
        scanf("%f", &grades[i]);
    }

    highest = grades[0];

    for (i = 1; i < 3; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }

    printf("\nHighest Grade: %.2f\n", highest);
    printf("Student(s) with the Highest Grade:\n");

    for (i = 0; i < 3; i++) {
        if (grades[i] == highest) {
            printf("%s - %.2f\n", names[i], grades[i]);
        }
    
    }
    return 0;
}
