/* Simple serial communications:
    View in the serial monitor
*/
#include <stdio.h>
#include <stdint.h>

#include <mbed_wait_api.h>

int main()
{
    while(1) {
        int n;
        printf("Hello world\n\u269b\n");
        for( n=10 ; n>0 ; n-- ) {
            printf("%3d …",n);
            wait(0.50);
        }
        putchar('\n');
    }
}
