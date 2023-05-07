#include<stdio.h>
int main(){
  int a,b,c,d,e,f,g;
  
  printf("Total number of seats: ");
  scanf("%d", &a);
  printf("Total number of votes: ");
  scanf("%d",&b);
  printf("Total number of lists: ");
  scanf("%d", &c);
  
  for(int i = 1;i<=c;i++){
    printf("Votes for list %d: ", i);
    scanf("%d", &d);
    
    g = b/a;
    e= d/g;
    f = d%g;
    
    printf("Automatic seat for list %d: %d\n", i,e);
    printf("Remainder for list %d: %d\n", i, f);
    
  }
  return 0;
}