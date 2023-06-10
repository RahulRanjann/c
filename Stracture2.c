#include <stdio.h>
#include <string.h>
 typedef struct 
 {
    char name[50];
    int age;

 }UserDetails;
 
int main() {
    UserDetails UD;
   strcpy( UD.name, "Rahul");
   UD.age = 20;
   printf("User name is %s \n",UD.name);
   printf("age is %d years old", UD.age);
   
   return 0;
}
