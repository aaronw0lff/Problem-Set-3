#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
char notename;
     
    printf("Enter a pitch class letter: ");
    scanf("%c", &notename);
switch(notename) {
    case 67: 
    printf("Integer interval is 0\n"); 
    break;
    case 68: 
    printf("Integer interval is 2\n");
    break;
    case 69: 
    printf("Integer interval is 4\n"); 
    break;
    case 70: 
    printf("Integer interval is 5\n");
    break;
    case 71: 
    printf("Integer interval is 7\n");
    break;
    case 65: 
    printf("Integer interval is 9\n");
    break;
    case 66: 
    printf("Integer interval is 11\n");
    break;

    
}

    return 0;
}
