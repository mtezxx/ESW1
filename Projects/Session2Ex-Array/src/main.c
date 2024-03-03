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

  int sum = 0;
  for (int i = 0; i < 5; i++)
  {
    sum += myArray[i];
  }

   double average = sum / 5.0;
  

  printf("\nSum is: %d", sum);
  printf("\nAverage is: %.2f", average); 
  return 0;
  
  
} 