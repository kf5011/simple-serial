/* Simple serial communications:
    View in the serial monitor
*/
#include <stdio.h>

int main()
{
    while(1) {
        int n;
        printf("Hello world\n");
        for( n=10 ; n>0 ; n-- ) {
            printf("%3d ..",n);
        }
        putchar('\n');
    }
}
