#include<stdio.h>
#include <stdlib.h>

void reverse(char s[]) {
  int l = 0;
  while (s[l++] != '\0')
    ;
  l--;

  int i;
  int j;
  int temp;
  for (i = 0, j = l - 1; i < j; ++i, --j) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
}

void itob(int n, char s[], int b /* 2, 8, 16 */) {
  int i = 0;
  static char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  while (n > 0) {
    s[i++] = digits[n % b];
    n /= b;
    printf("%d\n", n);
  }

  s[i] = '\0';
  reverse(s);
}

int main() {
  int num = 29;
  char s[10];
  itob(num, s, 2);

  printf("The result is %s\n", s);
}
