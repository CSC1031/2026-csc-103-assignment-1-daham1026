#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mathematics;
    int english;
    int science;
    int total;
    char grade;
    float average;

    printf("\tStudent grade analyzer!\n\n");

    printf("enter mathematics marks: ");
    scanf("%d", &mathematics);

    printf("enter science marks: ");
    scanf("%d", &science);

    printf("enter english marks: ");
    scanf("%d", &english);

    total= mathematics + science + english;
    average = total/3.0;

    if (average >= 80)
    {
        grade = 'A';
    }
    else if (average >= 70)
    {
        grade = 'B';
    }
    else if (average >= 60)
    {
        grade = 'C';
    }
    else if (average >= 50)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    printf("\n----- Student Results -----\n");
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);

     if (mathematics >= 40 && science >= 40 && english >= 40)
    {
        printf("Result: PASS\n");
    }
    else
    {
        printf("Result: FAIL\n");
    }

    return 0;
}
