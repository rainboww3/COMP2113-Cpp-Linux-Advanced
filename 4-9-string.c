#include <stdio.h>
#include <string.h>
void toLower(char a[]){
  for(int i = 0;i < sizeof(a);i++){
    if(a[i] >= 'A' && a[i] <= 'Z'){
      a[i] = a[i] + 'a' - 'A';
    }
  }
}
int main(void) {
    char input[100];
    scanf("%s",input);
    toLower(input);
    printf("%s",input);
    return 0;
}
