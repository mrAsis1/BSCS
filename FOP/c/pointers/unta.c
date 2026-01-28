#include <stdio.h>
#include <stdlib.h>
int* i2B2(int num, int* s);
int isPInt(int);
int isPIntPtr(int* a, int s);
void dispB(int* b, int s);

int main()
{
  int num = 585;
  int s = 0;
  int* b2num = i2B2(num, &s);
  printf("%d ", isPIntPtr(b2num, s));
  //Output trace here
  //  if(isPInt(num) && isPIntPtr(b2num, s)){
  //  printf("%d:\n", num);
  //  dispB(b2num, s);
  //  return 1;
  //  }
  return 0;
}

int isPIntPtr(int* arr, int s)
{
  int i = 0;
  while(i < s/2){
  if(arr[i] != arr[s - 1 - i]){
  return 0;
  }
  i++;
  }
  return 1;
}
