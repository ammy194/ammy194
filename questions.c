// #include<stdio.h>

// int main(){
//     int x , y , z, average;
//     printf("Enter first number:");
//     scanf("%d", &x);
//     printf("Enter second number:");
//     scanf("%d", &y);
//     printf("Enter third number:");
//     scanf("%d", &z);
//     average = (x+y+z)/3;
//     printf("Average of the three numbers is: %d\n",average);
//     if(average > 50){
//         printf("Average is greater than 50\n");
//     }
//     else{
//         printf("Average is lesser than 50\n");
//     }

//     return 0;
// }
// --------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main(){
// int day;
// printf("Enter your day:");
// scanf("%d", &day);

// switch (day){
//     case 1:
//         printf("Monday\n");
//         break;
//     // case 2:
//     printf("Tuesday\n");
//         break;
//     case 3:
//         printf("Wednesday\n");
//         break;
//     case 4:
//         printf("Thursday\n");
//         break;
//     case 5:
//         printf("Friday\n");
//         break;
//     case 6:
//         printf("Saturday\n");
//         break;
//     case 7:
//         printf("Sunday\n");
//         break;
//     default:
//         printf("Invalid day\n");
// }

//     return 0;
// }
// ---------------------------------------------------------------------------------------------------

// #include <stdio.h>
// int main(){
//     int marks;
//     printf("Enter your marks:\n");
//     scanf("%d", &marks);
//     if (marks < 0 || marks > 100){
//         printf("Invalid Marks\n");
//         return 1;
//     }
//     if (marks >= 30) {
//         printf("Pass\n");
//     } else {
//         printf("Fail\n");
//     }
//     return 0;
// }
// ----------------------------------------------------------------------------------------------------

// #include <stdio.h>
// int main(){
//     for(int i = 3 ; i <= 10 ; i = i+2){
//         printf("%d\n", i);
//     }
//     return 0;
// }
// -----------------------------------------------------------------------------------------------------

// #include <stdio.h>
//                      //declare the function prototype
// void printHello();
// void printGoodbye();
// void printAmartya();

// int main() {
//     //                  Call the function to print "Hello, World!"
// printHello();
//     return 0;
// }

// //                      Function definition
// void printHello() {
//     printf("Hello!!!\n");
//     printf("Goodbye!!!\n");
//     printf("Amartya!!!\n");
//     }
// ------------------------------------------------------------------------------------------------------
// #include <stdio.h>

// int sum (int a, int b);

// int main() {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d", &a);
//     printf("Enter a number:");
//     scanf("%d", &b);
//     int result = sum(a,b);
//     return 0;
// }
// int sum (int a, int b) {
//     int result = a + b;
//     printf("Sum is: %d\n", result);
//     return result;
// }
// -------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// void calculatePrice(float value);


// int main() {
//     float value = 100.0;
//     calculatePrice(value);  
    
//     return 0;
// }


// void calculatePrice(float value){
//     value = value + (0.18 * value);
//     printf("Final price is: %f", value);
    
// }
// --------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <math.h>

// float squareArea(float side);
// float circleArea(float rad);
// float rectArea(float a , float b);
// int main(){
    
//     return 0;
// }

// float squareArea(float side){
//     return side * side;
// }

// float circleArea(float rad){
//     return 3.14 * rad * rad;
// }

// float rectArea(float a , float b){
//     return a * b;
// }
// ---------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main() {
// int a = 10;
// int *p = &a;
// printf("The value of a is : %d\n",a);
// printf("The address of a is %p\n",&a);
// printf("The value of p is %p\n",p);
// printf("The value pointed by p is: %d\n", *p);
//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main() {
//     int a = 5;
//     int *p = &a;
//     *p = 20;
//     printf("The updated value is : %d", a);
//     return 0;
// }
// -----------------------------------------------------------------------------------------------------------

// #include <stdio.h>

// int main() {
//     int arr[3] = {10, 20, 30};
//     int *p = arr;  // points to arr[0]

//     printf("Value at p: %d\n", *p);   // prints 10
//     p++;  // move to next element (arr[1])
//     printf("Value at p: %d\n", *p);   // prints 20
//     p++;
//     printf("The value of p : %d\n", *p);

//     return 0;
// }
// -------------------------------------------------------------------------------------------------------------

//     #include <stdio.h>
// #include <string.h>
// //user defined
// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main() {
//     struct student s1;
//     s1.roll = 1664;
//     s1.cgpa = 9.2;
//     // s1.name = "amartya";
//     strcpy(s1.name, "amartya");
//     printf("Student name  = %s\n", s1.name);
//     printf("Student cgpa  = %f\n", s1.cgpa);
//     printf("Student roll  = %d\n", s1.roll);
    
    
//     struct student s2;
//     s2.roll = 1432;
//     s2.cgpa = 8.3;
//     strcpy(s2.name, "shreesh");
//     printf("\nStudent roll no. = %d\n", s2.roll);
//     printf("Student cgpa = %f\n", s2.cgpa);
//     printf("Student name = %s\n", s2.name);
    
//     struct student s3; 
//     s3.roll = 1893;
//     s3.cgpa = 8.9;
//     strcpy(s3.name, "Ammy");
//     printf("\nStudent roll no. = %d\n", s3.roll);
//     printf("Student cgpa = %f\n", s3.cgpa);
//     printf("Student name is: %s\n", s3.name);
    
    
//     return 0;
// // }
// // --------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <string.h>
// //user defined
// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main() {
    
//     struct student s1 = {1664, 9.2, "amartya"};
//     printf("student roll = %d\n", s1.roll);
    
//     struct student *ptr = &s1;
//     printf("Student roll = %d\n", (*ptr).roll);
// }

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*)malloc(5 * sizeof(int));
    return 0;
}   