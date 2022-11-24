#include <stdio.h>
#include <stdlib.h>
#define str "#include <stdio.h>%1$c#include <stdlib.h>%1$c#define str %2$c%3$s%2$c%1$c#define FT()int main(){FILE *fp=fopen(%2$c./Grace_kid.c%2$c, %2$cw%2$c);if(fp==NULL)exit(0);else fprintf(fp,str,0xa,0x22,str);}%1$cFT()%1$c"
#define FT()int main(){FILE *fp=fopen("./Grace_kid.c", "w");if(fp==NULL)exit(0);else fprintf(fp,str,0xa,0x22,str);}
FT()
