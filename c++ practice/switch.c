// switch is like if else 
// syntax of switch is switch(number/char) - case C1: break; case C2: break; default():
#include<stdio.h>
int main (){
    int day;
    printf("enter day (1-7)");
    scanf("%d",&day);
    switch(day){
        case 1: printf("monday\n");
               break;
        case 2 : printf("tuesday\n");
                break;
        case 3 : printf("wednesday\n");
                break;
        case 4 : printf("thursday\n");
                break;
        case 5 : printf("friday\n");
                break;
        case 6 : printf("saturday\n");
                break;
        case 7 : printf("sunday\n");
                break;
        default: printf("not a valid day");
    }

    return 0;
    
}