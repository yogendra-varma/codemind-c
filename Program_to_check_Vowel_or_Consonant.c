
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='Y')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}
