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

    total= maths + science + english;
    average = total/3.0;

    return 0;
}
