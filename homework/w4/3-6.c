# include <stdio.h> 

int main() {
  char str[6] = "China";
  for ( int i=0; i<5; i++) {
    str[i] += 4;
  }
  printf("%s", str);
  return 0;
}