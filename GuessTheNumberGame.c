#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int g;
    printf("Welcome to Number Guesser:\n");
    printf("You have 10 chances Good Luck!\n");
    int r=rand()%100;
    int w=r+1;
    for(i=0; i<10; i++){
       printf("Guess a number between 1 and 100\n");
       scanf("%d",&g);
       if(g==w){
            printf("Yesss u win the correct number is %d\n",g);
            break;
       }
        else if(g<w){
            printf("Pick a Higher Number\n");
        }
        else if(g>w){
            printf("Pick a Lower Number\n");
    }

}
    if(i==10){
        printf("U Suck Buddy");
    }
}

