#include <stdio.h>

void void_func(void) {
    unsigned int blah = 4059231220;  /* 0xf1f2f3f4 */
    char* manifesto="Stacks are for wimps";

    blah++;
    printf("%s \n", manifesto);
    printf("but I'm at %p \n", *void_func);
}

int function_127(int first, int second, char* bluster){
    int internal_int = 16909060; /* 0x01020304 */
    char* internal_string = "0x444F524B21";

    printf("%s: %i plus %i iz %i \n", bluster, first, second, first+second);
    printf("but my int is %i and the string is at %p \n", internal_int, &internal_string);

    void_func();
}

int main(int argc, char *argv[]) {
    int main_int = 1903326068;  /* 0x71727374 */

    void_func();
    main_int = function_127(65535, 1, "Yo Dog" );

}
