#include <stdio.h>


int main(){
  // print out the fahrenhiet celsius table from 0c -100c 
  int fahrenhiet = 0;
  int celsius = 0;
  
  int upper = 100;
  printf("Celsius | fahrenhiet\n");
  while (celsius <= 100){

    fahrenhiet = celsius *9 / 5+32;
    printf("%d\t%d\n", celsius, fahrenhiet);
    celsius++;
  }
}
