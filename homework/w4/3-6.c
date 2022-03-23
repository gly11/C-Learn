# include <stdio.h> 

int main() {
  char str[6] = "China";
  char *p = str;
  while ( *p+=4, *++p) ;
  printf("%s\n", str);
  return 0;
}