#include <stdio.h>

int main(){
    char string[1000];
    printf("Enter the string :");
    gets(string);
    int i=0;
    while (string[i]!='\0'){
        i++;
    }
    printf("%d is length of your string.\n",i);
}
