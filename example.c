
//in this case i tried to make a small calculater

#include <stdio.h>
#include <stdlib.h>
#define PI 22 / 7.0

double plus(const double, const double);
double minues(const double, const double);
double times(const double, const double);
double divided(const double, const double);
void write_menu();

int main()
{

    double (*count[4])(const double, const double) = {plus, minues, times, divided};

    size_t choice;
    write_menu();
    scanf("%d", &choice);


    while (choice != -1 && choice >= 1 && choice <= 4)
    {
        double result, s1, s2;
        printf("pls enter of numbers:");
        scanf("%lf %lf", &s1, &s2);
    
        result = (*count[choice - 1])(s1, s2);
        printf("result:%lf\n", result);
        write_menu();
        scanf("%d", &choice);
    }
    printf("Good bye");
    return 0;
}

void write_menu()
{
    printf("\nSelect the action you want to take\n");

    printf("1-plus\n");
    printf("2-minues\n");
    printf("3-times\n");
    printf("4-divided(if you wanna quit write -1)\n");
}
double plus(const double n1, const double n2)
{
    return n1 + n2;
}
double minues(const double n1, const double n2)
{
    return n1 - n2;
}
double times(const double n1, const double n2)
{
    return n1 * n2;
}
double divided(const double n1, const double n2)
{
        return n1 / n2;
}