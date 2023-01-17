#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rockpaperscissor(char you, char comp)
{
    //draw case 
    if(you==comp)
    {
        return 0;
    }
    // one win case
    if(you=='p'&& comp=='r')
    {
        return 1;
    }
    else if (you=='r'&&comp=='p')
    {
        return -1;
    }
    if(you=='r'&& comp=='s')
    {
        return 1;
    }
    else if(you=='s'&& comp=='r')
    {
        return -1;
    }
    if(you=='s'&& comp=='p')
    {
        return 1;
    }
    else if(you=='p'&&comp=='s')
    {
        return -1;
    }
    
        
}
void main(){
    int num;
    srand(time(0));
    num=rand()%100+1;//Random no. generator 
    char you,comp;
    if(num<33)
    {
        comp='r';
    }
    else if(num>33&&num<66)
    {
        comp='p';
    }
    else{
        comp='s';
    }
   printf("\n\n"); 
printf("=====Welcome to Rock ,Paper & Scissor Game=====\n");
printf("\n\n");
printf("1) r for Rock\n");
printf("2) p for Paper\n");
printf("3) s for Scissor\n");
printf("\n");
printf("=====================================\n");

printf("Enter your choice:\n");
scanf("%c",&you);
int result=rockpaperscissor(you,comp);
if(result==0)
{
    printf("MATCH DRAW!\n");
}
else if(result==1)
{
    printf(" YOU WIN !\n");
}
else{
    printf(" YOU LOSE !\n");
}
printf(" You chose %c & computer chose %c\n",you,comp);
}


