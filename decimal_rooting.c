#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

/*
needed :-
    1.) a function for choosing modes
    2.) a function for inputting
    3.) function for calculating. 
    that must be enough
*/

float square(float x);
float square_root(float x);
float cube(float x);
float cuberoot(float x);

int main()
{
    float num;
    int choice, subchoice;
    char willu, willu2, willu3;
    printf("Calculator: Input 1 for calculating squares and 2 for cubes\nYOU: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        system("cls");
        printf("Calculator: Input 1 for squaring and 2 for square rooting.\nYOU: ");
        scanf("%d", &subchoice);
        switch (subchoice)
        {
        case 1:
            system("cls");
            printf("Calculator: Enter the Number for squaring.\nYou: ");
            scanf("%f", &num);
            float result = square(num);
            system("cls");
            printf("%f X %f = %f", num, num, result);
            break;
        case 2:
            system("cls");
            printf("Calculator: Enter the Number for square rooting.\nYou: ");
            scanf("%f", &num);  
            system("cls");            
            float result2 = square_root(num);
            printf("%f = %f X %f\n", num, result2, result2);
            break;
        }
        break;
    case 2:
        system("cls");
        printf("Calculator: Input 1 for cubing and 2 for cube rooting.\nYOU: ");
        scanf("%d", &subchoice);
        switch (subchoice)
        {
        case 1:
            system("cls");
            printf("Calculator: Enter the Number for cubing.\nYou: ");
            scanf("%f", &num);
            float result = cube(num);
            system("cls");            
            printf("%f X %f = %f", num, num, result);
            break;
        case 2:
            system("cls");
            printf("Calculator: Enter the Number for cube rooting.\nYou: ");
            scanf("%f", &num);
            float result3 = cuberoot(num);
            system("cls");            
            printf("%f = %f X %f X %f", num, result3, result3, result3);
            break;
        }
    }
    return 0;
}

float square(float x)
{
    return x * x;
}

float square_root(float x)
{
    float a = 0.0, b = 0.0;
    float result;
    while (x != result)
    {
        result = a * b;
        a += 0.01;
        b += 0.01;
        if ((x - result) < 0.000010)
        {
            break;
        }
    }
    return a - 0.000010;
}

float cube(float x)
{
    return x * x * x;
}

float cuberoot(float x)
{ //3root = 1.7
    float a = 0.1, b = 0.1, c = 0.0;
    float result;
    while (x != result)
    {
        result = a * b * c;
        a += 0.01;
        b += 0.01;
        c += 0.01;
        if ((x - result) < 0.000010)
        {
            break;
        }
    }
    return a - 0.000010;
}