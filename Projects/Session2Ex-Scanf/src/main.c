#include <stdio.h>


// put function declarations here:
int main(){
  setbuf(stdout, NULL);

  // Prompt the user to enter their name
  char name[50];
  printf("Enter your name: ");
  scanf("%s", name);

  // Prompt the user to enter their age
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);

  // Print the user's name and age
  printf("Hi %s, you are %d years old.\n", name, age);

  return 0;
}


