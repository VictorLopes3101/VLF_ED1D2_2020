// Calculator by Victor Lopes Fernandes
// IFSP - Estrutura de Dados I
// Professor Prof. Dr. Antonio Miguel Batista Dourado

#include <stdio.h>
#include <stdlib.h>

int * numbers() {

    int num_one, num_two;
    static int chosen_number[2];
    printf("First number: ");
    scanf("%d", &num_one);
    chosen_number[0] = num_one;
    printf("Second number: ");
    scanf("%d", &num_two);
    chosen_number[1] = num_two;

    return chosen_number;
}

int sum() {

    int result;
    int *chosen_number;
    chosen_number = numbers();
    result = chosen_number[0] + chosen_number[1];

    return result;
}

int sub() {

    int result;
    int *chosen_number;
    chosen_number = numbers();
    result = chosen_number[0] - chosen_number[1];

    return result;
}

int times() {

    int result;
    int *chosen_number;
    chosen_number = numbers();
    result = chosen_number[0] * chosen_number[1];

    return result;
}

int division() {

    float result;
    float num_one, num_two;
    printf("First number: ");
    scanf("%d", &num_one);
    printf("Second number: ");
    scanf("%d", &num_two);
    while (num_two == 0) {
        printf("It is impossible to divide by 0.\n");
        printf("Second number: ");
        scanf("%d", &num_two);
    }

    result = num_one / num_two;
    printf("The result is %.4f\n", result);
}


void menu() {

    int operation;
    int result;
    system("cls");
    printf("Victor Lopes Calculator\n");
    printf("Choose the mathematical operation\n\n");
    printf("1 - Sum\n2 - Subtraction;\n3 - Multiplicatio\n4 - Division\n5 - Exit\nChosen operation: ");
    scanf("%d", &operation);
    printf("\n");

    switch (operation) {
        case 1:
            result = sum();
            printf("The result is %d.\n", result);
            break;
        case 2:
            result = sub();
            printf("The result is %d.\n", result);
            break;
        case 3:
            result = times();
            printf("The result is %d.\n", result);
            break;
        case 4:
            division();
            break;
        case 5:
            
            printf("Thanks for using.\n");
            exit(0);
        default:
            printf("Invalid operation, try again.");
            system("pause");
            system("cls");
            menu();
            break;
    }
    system("pause");
    menu();
}

int main() {
    menu();
    system("pause");
    return 0;
}