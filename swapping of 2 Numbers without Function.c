//Swapping Numbers

#include <stdio.h>
#include <conio.h>

int main()
{ 
  int Num1 = 0, Num2 = 0, Temp = 0;
  
  printf("\n Enter 2 Numbers for Swapping = ");
  scanf("%d%d", &Num1,&Num2);
  
  printf ("\n Before swap 1st Number = %d.",Num1);
  printf ("\n Before swap 2nd Number = %d.",Num2);
  
  Temp = Num1;
  Num1 = Num2;
  Num2 = Temp;
  
  printf ("\n After swap 1st Number = %d.",Num1);
  printf ("\n After swap 2nd Number = %d.",Num2);
  
  
  printf ("\n\t Thanks");



  getch ();
  return 0;
}