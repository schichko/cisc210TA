#include <stdio.h>

int GetOneNumber(int x);

int main(){
  int x = 0;
  int total = 0;
  int i;
  int temp;
  printf("Hello World\n");
  printf("Please enter the number of entries:");
  scanf("%d",&x);
  for(i = 0; i<x;i++){
   temp = GetOneNumber(i+1);
   printf("Here");
   total = total + temp;
  }

  printf("The sum of these numbers is %d\n",total);
  printf("%.2f",((float)total)/x);
  return 0;
}

int GetOneNumber(int x){
  int enteredNumber;
  printf("Enter integer#%d:",x); //So doing print statements with letters and numbers we want to do it with the whole string and put %d whenever we want an integer and then it refers to them in order after the statement
  scanf("%d\n",&enteredNumber);
  printf("gottem");
  return enteredNumber;
}
