#include <stdio.h>
#include <string.h>
struct university {
    char name[100];
    int rollNumber;
    float cgpa;
};

void input(struct university students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter student %d details:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }
}
void output(struct university students[], int n) {
    printf("Name\t\tRoll Number\tCGPA\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t\t%d\t\t%.2f\n", students[i].name, students[i].rollNumber, students[i].cgpa);
    }
}
void roll_sort(struct university students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].rollNumber > students[j + 1].rollNumber) {
                struct university temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}
int main() {
    int n = 5;
    struct university students[n];
    input(students, n);
    roll_sort(students, n);
    printf("\nSorted Student Data:\n");
    output(students, n);
    return 0;
