#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character to know that it is consonant or vowel : ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonent");
    }
    return 0;
}