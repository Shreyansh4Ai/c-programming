#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("studentinfo.txt", "w");
    char name[100];
    int age;
    float cgpa;
    printf("name :");
    scanf("%[^\n]s", name);
    printf("age :");
    scanf("%d", &age);
    printf("cgpa :");
    scanf("%f", &cgpa);

    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f\t", cgpa);

    printf("\n");
    fclose(fptr);
    return 0;
}
// the info has been saved into studentinfo.txt file // check it out