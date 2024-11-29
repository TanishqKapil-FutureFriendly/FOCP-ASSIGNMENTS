Assignment 5 
#include <stdio.h>

char getGrade(float avg) {
    if (avg >= 90) return 'A';
    if (avg >= 80) return 'B';
    if (avg >= 70) return 'C';
    if (avg >= 60) return 'D';
    return 'F';
}

int main() {
    int num, i;
    float scores[10], total = 0, avg; 

    printf("How many subjects (1-10)? ");
    scanf("%d", &num);

    if (num < 1 || num > 10) {
        printf("Invalid number of subjects.\n");
        return 0;
    }

    for (i = 0; i < num; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &scores[i]);

        if (scores[i] < 0 || scores[i] > 100) {
            printf("Marks should be between 0 and 100.\n");
            return 0;
        }

        total += scores[i]; 
    }

    avg = total / num;
    char grade = getGrade(avg); 
    printf("\n*** Results ***\n");
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", avg);
    printf("Grade: %c\n", grade);

    if (grade == 'F') {
        printf("Status: Fail\n");
    } else {
        printf("Status: Pass\n");
    }

    return 0;
}