# include <stdio.h>

int main() {

    char operator;
    double Num1,Num2;

    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf",&Num1, &Num2);

    switch(operator)
    {
        case '+':
            printf("Sum = %.1lf", Num1+Num2);
            break;

        case '-':
            printf("Difference= %.1lf",Num1-Num2);
            break;

        case '*':
            printf("Product= %.1lf",Num1*Num2);
            break;

        case '/':
            printf("Division= %.1lf",Num1/Num1);
            break;
        default:
            printf("Error! operator is not correct");
    }
    
    return 0;
}
