#include <stdio.h>

int main () {
   char username[20];
   printf("Enter your name: ");
   scanf("%s", username);
   printf("Hello %s\n", username);
   printf("Program exited normally");
   return(0);
}
