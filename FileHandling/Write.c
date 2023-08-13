#include <stdio.h>
int main() {
    FILE *flt;
    flt=fopen("HelloWorld.txt", "w");
    fprintf(flt,"Hello World!");
    fclose(flt);   
   return 0;
}
