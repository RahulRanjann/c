#include <stdio.h>
int main() {

    FILE *ftr;
    ftr = fopen("text.txt", "w");
    fclose(ftr);
   return 0;
}
