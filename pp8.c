#include <stdio.h>

int main()
{
    float summe = 0;
    int zähler = 0;
    int liste [] = {23,3,34,5,6,7,12,5};
    
    
    for(zähler ; liste[zähler] != '\0'; zähler++ ){
        
        summe = summe + liste[zähler];
    }
    
    summe = summe / zähler;
    printf("Der Durschnitt ist %f", summe);
    return 0;
}
