#include <stdio.h>

const int LEN = 80;

void strip(char *s);

int main() {
    printf("Enter the string: ");
    char *str = new char [LEN];
    gets(str);
    strip(str);
    printf("Result: %s!!!\n",str);
    delete(str);
    return 0;
}

int strsize(char *s) {
    int size = 0;
    while (s[size]!='\0')
        size++;
    return size;
}

void strip(char *s) {
    char *res = new char[LEN];
    int i_begin=0, i_end=0;
    int i=0;
    int n = strsize(s);
    
    while (s[i]==' ') i++;
    i_begin=i;
    
    i=n-1;
    while (s[i]==' ') i--;
    i_end = i+1;

    //printf("all = %d, begin = %d, end = %d\n", n, i_begin, i_end);
    
    for (int i=0,j=i_begin; j<i_end; j++,i++)
        res[i]=s[j];

    // длина результирующей строки
    int newsize = i_end-i_begin+1;
    // поэлементное коирование строк, работа -- как с массивами
    for (int i=0; i<newsize; i++)
        s[i] = res[i];

    delete [] res; // освободили память, занимаемую первой строкой
    // и перезаписали укаазтели:

}