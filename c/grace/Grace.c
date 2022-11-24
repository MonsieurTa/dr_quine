#include <stdio.h>
#define str "#include <stdio.h>%1$c#define str %2$c%3$s%2$c%1$c#define FT()int main(){FILE *fp=fopen(%2$c./Grace_kid.c%2$c, %2$cw%2$c);fp&&fprintf(fp,str,0xa,0x22,str);}%1$cFT()%1$c"
#define FT()int main(){FILE *fp=fopen("./Grace_kid.c", "w");fp&&fprintf(fp,str,0xa,0x22,str);}
FT()
