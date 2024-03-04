#include <stdio.h>

int main(){
  setbuf(stdout,NULL);
  int myArray[5];
  printf("Enter 5 numbers: ");
  
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &myArray[i]);
    
  }
  for (int i = 0; i < 5; i++) {
    printf("%d", myArray[i]);
  }
}