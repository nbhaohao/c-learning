#include <stdio.h>
#include <sybdb.h>

int a = 10;

BOOL IsBigEndian() {
  int a = 0x1234;
  char b = *(char *) &a; //通过将int强制类型转换成char单字节，通过判断起始存储位置。即等于 取b等于a的低地址部分
  if (b == 0x12) {
    return TRUE;
  }
  return FALSE;
}

int main(int argc, char *argv[]) {
  int ch1 = 0;
  scanf("%c", &ch1);
  printf("%c\r\n", &ch1);
  printf("%d\r\n", ch1);
  return 0;
}