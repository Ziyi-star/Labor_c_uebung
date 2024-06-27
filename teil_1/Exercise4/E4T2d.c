#include <stdio.h>
#include <stdlib.h>

#define CELSIUS_ZU_FAHRENHEIT(grad)  (grad  * 1.8 + 32)

int main()
{
   int grad;
   printf("Bitte geben Sie eine Temperatur in Grad ein: ");
   scanf("%d", &grad);
   int umrechnung = CELSIUS_ZU_FAHRENHEIT(grad);
   printf("Umrechnung von Celsius zu Fahrenheit lautet: %d", umrechnung);

    //Fuer die Umrechnung siehe Link
   //http://www.umrechnung.org/masseinheiten-temperatur-celsius-fahrenheit-kelvin/celsius-fahrenheit-umrechnung.htm
}
