#include <stdio.h>
int main(){
  int p1, p2,chocolate_count=13;
  while(chocolate_count>0){
    player1:
    printf("Player 1\n");
    printf("Pick chocolate (0 to 3) : ");
    scanf("%d",&p1);
    if(p1<0 || p1>3){
      printf("Invalid Input\n");
      goto player1;
    }
    chocolate_count-=p1;
    if(chocolate_count<=0){
      printf("Player 1 got chilli\n");
      printf("Player 1 lost\n");
      printf("Player 2 Won\n");
      break;
    }
    printf("Remaining Chocolate count = %d\n\n",chocolate_count);
    label:
    printf("Player 2\n");
    printf("Pick chocolate (0 to 3) : ");
    scanf("%d",&p2);
    if(p2<0 || p2>3){
      printf("Invalid Input\n");
      goto label;
    }
    chocolate_count-=p2;
    printf("Remaining Chocolate count = %d\n\n",chocolate_count);
    if(chocolate_count<=0){
      printf("Player 2 got chilli\n");
      printf("Player 2 lost\n");
      printf("Player 1 Won\n");
      break;
    }
  }
  printf("Game Ended\n");
  return 0;
}