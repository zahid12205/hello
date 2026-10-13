#include <stdio.h>
#include <ctype.h>

int main(){
  char ch ;
  printf("Enter the character :");
  scanf("%c\n" , &ch);

  if(islower(ch)){
    printf("convertion : %c\n" , toupper(ch));}
  else{
    printf("convertion : %c\n" , tolower(ch));}
  return 0;

}
