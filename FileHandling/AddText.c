#include <stdio.h>
int main() {
    FILE *flt;
    flt = fopen("HelloWorld.txt", "a");
    fprintf(flt, "\nthis line is added through new file");
    fclose(flt);
   return 0;
}
