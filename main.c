#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include "string.h"

//MACRO or Pre-Processor Directives

#define MaxLine 1000

//declaration of global var

unsigned short len = 0, max = 0;
char line[MaxLine], longest[MaxLine];

//declaraion of functions

char *StringConCat(char *, const char *);
int checkVowelOrConsonant(void);
int stringLength(char *);
unsigned short getLine(void);
void copy(void);
void countLines(void);
void inputToOutput(void);
void print();

//main

int main() {
    printf("%s\n", __FUNCTION__);
    char *a;
/*    int length=0;
    scanf("%s",a);
    while(*a!='\0'){
        length++;
        a++;
    }*/
    int x=1,y=2;
    printf("%d %d\n",x,y);
    x=(x+y)-(y=x);
    printf("%d %d",x,y);
    ///printf("%d",length);
    /*
    float f=2.1;
    if(f==2.1)
        printf("Yes");
    else
        printf("No");
    f=2.5;
    if(f==2.5)
        printf("Yes");
    else
        printf("No");
*/
    return 0;
}

//definition of functions

void inputToOutput() {
    printf("%s\n", __FUNCTION__);
    int c, lastChar = 'a';
    while ((c = getchar()) != EOF) {
        if (c != ' ')putchar(c);
        else if (lastChar != ' ')putchar(c);
        lastChar = c;
    }
}

void print(int a, int b, int c) {
    printf("%s\n", __FUNCTION__);
    printf("%d %d %d\n", a, b, c);
}

void countLines() {
    printf("%s\n", __FUNCTION__);
    max = 0;
    while ((len = getLine()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
        if (len == 1)break;
    }
    if (max > 0)
        printf("%s", longest);
}

unsigned short getLine() {
    printf("%s\n", __FUNCTION__);
    unsigned short i = 0;
    int c;
    while ((i < MaxLine - 1) && (c = getchar()) != EOF && c != '\n') {
        line[i] = (char) c;
        ++i;
    }
    if (c == '\n') {
        line[i] = (char) c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy() {
    printf("%s\n", __FUNCTION__);
    int i = 0;
    while ((longest[i] = line[i]) != '\0')++i;
}
bool isVowel(char a){
    return (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
}
int checkVowelOrConsonant() {
    printf("%s\n", __FUNCTION__);
    char ch;
    scanf("%c", &ch);
    ch = (char) toupper(ch);
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is Vowel\n", ch);
    } else {
        printf("%c is Consonant\n", ch);
        return false;
    }
    return true;
}
void matrix(){
    int a[5][5], matrix[5][5], rotated[5][5], n = 3, i, j;
    for (int i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int k = 0; k < 2; k++) {
        for (int i = n - 1, i1 = 0; i >= 0; i--, i1++) {
            for (int j = 0; j < n; j++) {
                rotated[i1][j] = a[j][i];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",rotated[i][j]);
        }
        printf("\n");
    }
}
int stringLength(char *element) {
    printf("%s\n", __FUNCTION__);
    int size = 0;
    bool b = true;
    while (*element++ != '\0')size++;
    return size;
}

char *StringConCat(char *destination, const char *source) {
    printf("%s", __FUNCTION__);
    char *ptr = destination + stringLength(destination);
    while (*source != '\0')
        *ptr++ = *source++;
    *ptr = '\0';
    return ptr;
}
