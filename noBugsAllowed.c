#include <stdio.h>
#include <string.h>

int main() {
  char importantMsg[] = "Debugger? I don't even know her";

  importantMsg[strlen(importantMsg) + 1] = '!';
*(int*)0 = 0;  
  for(int i = 0; i < strlen(importantMsg); i++) {
    printf("%c", importantMsg[i]);
  } 
  printf("\n");



  return 0;
}
