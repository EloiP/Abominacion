#include <stdio.h>
#define NO "Si miras atentamente al abismo\nEl abismo te devuelve la ");

char *mirada(){return("mirada");}
void abismo(){mirada();}
int main(){char *b;printf(NO b = ((char *(*)(void))abismo)();printf("%s",b); return(0);}
