#include <stdio.h>
int main(void){
    char ch;
    printf("Enter character letter: ");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || 
        ch == 'o' || ch == 'O' || ch == 'u'|| ch == 'U')
    {

        printf("Entered character letter is vowel");
    }
    else
    {
        printf("Entered character letter is consonant");
    }


}