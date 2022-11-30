#include <stdio.h>
#include <stdlib.h>
#define S(x) #x
int main() {
  int i = 5;
  if (i < 0) return (0);
  char s[128];
  s[127] = 0;
  sprintf(s, S(./Sully_%d.c), i);
  FILE *fp = fopen(s, S(w));
  if (fp == NULL) exit(0);
  char *str[28] = {
    "#include <stdio.h>",
    "#include <stdlib.h>",
    "#define S(x) #x",
    "int main() {",
    "  int i = ",
    "  if (i < 0) return (0);",
    "  char s[128];",
    "  s[127] = 0;",
    "  sprintf(s, S(./Sully_%d.c), i);",
    "  FILE *fp = fopen(s, S(w));",
    "  if (fp == NULL) exit(0);",
    "  char *str[28] = {",
    "  };",
    "  for (int i = 0; i < 4; i++)",
    "    fprintf(fp, S(%s%c), str[i], 0xa);",
    "  fprintf(fp, S(%s%d;%c), str[4], i-1, 0xa);",
    "  for (int i = 5; i < 12; i++)",
    "    fprintf(fp, S(%s%c), str[i], 0xa);",
    "  for (int i = 0; i < 28; i++)",
    "    fprintf(fp, S(%1$5c%4$s%1$c%3$c%2$c), 0x22, 0xa, 0x2c, str[i]);",
    "  for (int i = 12; i < 28; i++)",
    "    fprintf(fp, S(%s%c), str[i], 0xa);",
    "  fclose(fp);",
    "  char inst[47] = S(gcc Sully_%1$d.c -o Sully_%1$d && ./Sully_%1$d);",
    "  inst[46] = 0;",
    "  sprintf(inst, inst, i);",
    "  system(inst);",
    "}",
  };
  for (int i = 0; i < 4; i++)
    fprintf(fp, S(%s%c), str[i], 0xa);
  fprintf(fp, S(%s%d;%c), str[4], i-1, 0xa);
  for (int i = 5; i < 12; i++)
    fprintf(fp, S(%s%c), str[i], 0xa);
  for (int i = 0; i < 28; i++)
    fprintf(fp, S(%1$5c%4$s%1$c%3$c%2$c), 0x22, 0xa, 0x2c, str[i]);
  for (int i = 12; i < 28; i++)
    fprintf(fp, S(%s%c), str[i], 0xa);
  fclose(fp);
  char inst[47] = S(gcc Sully_%1$d.c -o Sully_%1$d && ./Sully_%1$d);
  inst[46] = 0;
  sprintf(inst, inst, i);
  system(inst);
}
