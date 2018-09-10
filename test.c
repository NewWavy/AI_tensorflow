#include <stdio.h>
int data[] = { 3,7,2,5,1,4 };
//int len = sizeof(arr) / sizeof(int);

void insertion_sort ( int *data, int n )
{
  int i, j, remember;
  for ( i = 1; i < n; i++ )
  {
    remember = data[(j=i)];
    while ( --j >= 0 && remember < data[j] ){
        data[j+1] = data[j];
        data[j] = remember;
    }
  }
}


int main() {
	insertion_sort(*data, 6);
	printf("%d ", data);
}
