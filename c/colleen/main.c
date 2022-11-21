#include <stdio.h>
#define S(x) #x

int main()
{
  char *str[18] = {
    "#include <stdio.h>",
    "#define S(x) #x",
    "",
    "int main()",
    "{",
    "  char *str[18] = {",
    "  };",
    "  for (int i = 0; i < 6; i++) {",
    "    printf(S(%s%c), str[i], 0xa);",
    "  }",
    "  for (int i = 0; i < 18; i++) {",
    "    printf(S(%5c%s%c%c%c), 0x22, str[i], 0x22, ',', 0xa);",
    "  }",
    "  for (int i = 6; i < 18; i++) {",
    "    printf(S(%s%c), str[i], 0xa);",
    "  }",
    "  return (0);",
    "}",
  };
  for (int i = 0; i < 6; i++) {
    printf(S(%s%c), str[i], 0xa);
  }
  for (int i = 0; i < 18; i++) {
    printf(S(%5c%s%c%c%c), 0x22, str[i], 0x22, ',', 0xa);
  }
  for (int i = 6; i < 18; i++) {
    printf(S(%s%c), str[i], 0xa);
  }
  return (0);
}
