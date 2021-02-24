
#include "mystring.h"

int mystrlen(chat *str);
{
    int len=0;
    int i=0;
    while(str[i]!='\0')
    len++;
    return len;
}
