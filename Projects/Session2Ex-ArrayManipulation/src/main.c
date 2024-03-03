#include <stdio.h>

int main(){
  int myArray[10];
  
  for(int i = 0; i < 10; i++){
    myArray[i] = rand() % 100 + 1;
  }
  for(int i = 0; i < 10; i++){
    printf("%d ", myArray[i]);
    printf(" "); // Add space between each number
  }
  printf("\n");

  for (int i = 0; i < 10; i++)
  {
    for (int j = i + 1 ; j < 10; j++)
    {
      if (myArray[i] > myArray[j])
      {
        int temp = myArray[i];
        myArray[i] = myArray[j];
        myArray[j] = temp;
      }
      
    }
    
  }

  printf("Ordered\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", myArray[i]);
  }
  
} 