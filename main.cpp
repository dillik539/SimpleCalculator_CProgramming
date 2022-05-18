#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3);
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

int main(int argc, char *argv[])
{
    double first, second;
    char operation;
    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter operator: ");
    scanf(" %c", &operation);
    printf("Enter second number: ");
    scanf("%lf", &second);

    if(operation == '+')
    {
        printf("%f", add(first, second));
    }
    else if(operation == '-')
    {
        printf("%f", subtract(first, second));
    }
    else if(operation == '*'){
        printf("%f", multiply(first, second));
    }
    else if(operation == '/')
    {
        printf("%f", divide(first, second));
    }
    else{
        printf("Invalid operator.");
    }

    return 0;
}

int max(int num1, int num2, int num3)
{
    int max;
    if (num1 > num2 && num1 > num3)
    {
        max = num1;
    }else if(num2 > num1 && num2 > num3){
        max = num2;
    }
    else{
       max = num3;
    }
    return max;
}

double add(double num1, double num2)
{
    return num1 + num2;
}

double subtract(double num1, double num2)
{
    double result;
    if(num1 > num2){
        result = num1 - num2;
    }else{
        result = num2 - num1;
    }
    return result;
}

double multiply(double num1, double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    if(num2 == 0)
    {
        return 0.0;
    }else
    {
        return num1 / num2;
    }
}
