// #include <stdio.h>

// int main() {
// 	int age = 22;
//     float height = 5.8;
//     printf("My height is %f\n", height);
//     printf("My age is %d\n", age);
//     char symbol = 'A';
//     printf("My symbol is %c\n, symbol ");   
// 	return 0;
// }

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);  // &number means we store the input into the address of 'number'

    printf("You entered: %d\n", number);
    return 0;
}
