#include <stdio.h>
#include <stdlib.h>

int main() {
  int x=0;
  int y=0;
  int z=0;
  int small =0;
  const int n = 100;


  printf("Enter fist integers: ");
  scanf("%d", &x);
  printf("Enter fist integers: ");
  scanf("%d", &y);
  printf("Enter fist integers: ");
  scanf("%d", &z);

            int val = abs(x - n);
            int val2 = abs(y - n);
            int val3 = abs(z - n);
            if(val<val2){
                if(val2<val3)
                    small = x;

                else{
                    if(val<val3)
                        small = x;
                    else
                        small = z;
                }
            }
            else{
                if(val2<val3)
                    small = y;
                else
                    small = z;
            }
                     printf("\ncloset number to 100 is: %d", small);
                     return 0;
        }

