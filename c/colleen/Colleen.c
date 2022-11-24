#include <stdio.h>
#define S(x) #x // super macro

void print(char *str[22]) {
  for (int i = 0; i < 18; i++) {
    printf(S(%s%c), str[i], 0xa);
  }
  for (int i = 0; i < 22; i++) {
    printf(S(%5c%s%c%c%c), 0x22, str[i], 0x22, ',', 0xa);
  }
  for (int i = 18; i < 22; i++) {
    printf(S(%s%c), str[i], 0xa);
  }
}

int main()
{
  char *str[22] = { // 0xa: new line, 0x22: double quote
    "#include <stdio.h>",
    "#define S(x) #x // super macro",
    "",
    "void print(char *str[22]) {",
    "  for (int i = 0; i < 18; i++) {",
    "    printf(S(%s%c), str[i], 0xa);",
    "  }",
    "  for (int i = 0; i < 22; i++) {",
    "    printf(S(%5c%s%c%c%c), 0x22, str[i], 0x22, ',', 0xa);",
    "  }",
    "  for (int i = 18; i < 22; i++) {",
    "    printf(S(%s%c), str[i], 0xa);",
    "  }",
    "}",
    "",
    "int main()",
    "{",
    "  char *str[22] = { // 0xa: new line, 0x22: double quote",
    "  };",
    "  print(str);",
    "  return (0);",
    "}",
  };
  print(str);
  return (0);
}
