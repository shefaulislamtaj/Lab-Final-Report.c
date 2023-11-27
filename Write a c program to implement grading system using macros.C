#include <stdio.h>
#define A_GRADE 90
#define B_GRADE 80
#define C_GRADE 70
#define D_GRADE 60
#define GET_GRADE(percentage) \
    ((percentage >= A_GRADE) ? 'A' : \
     (percentage >= B_GRADE) ? 'B' : \
     (percentage >= C_GRADE) ? 'C' : \
     (percentage >= D_GRADE) ? 'D' : 'F')

int main() {
    float percentage;
    printf("Enter the percentage: ");
    scanf("%f", &percentage);

       if (percentage >= 0 && percentage <= 100) {
             char grade = GET_GRADE(percentage);
        printf("Grade: %c\n", grade);
    } else {
        printf("Invalid percentage. Please enter a percentage between 0 and 100.\n");
    }
    return 0;
}
