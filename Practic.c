// #include <stdio.h>
// int main(){
//     printf("%d\n", 4>2 && 2>6);
//     printf("%d\n", 4>2 || 2>6);
//     printf("%d\n", !(4>2 && 2>6));
//     printf("%d\n", !(4>2 || 2>6));
    
//     return 0;
// }


#include<stdio.h>
int main(){
int x;
printf("Enter a number: ");
scanf("%d", &x);
if(x%2 == 0){
    printf("%d is even\n",x);
} else {
    printf("%d is odd\n",x);
}
    return 0;
}
