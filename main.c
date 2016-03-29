#include <stdio.h>
#include <stdlib.h>
int validarpositivo(int x, int inf, int sup);
int main()
{
   int numero1;
   int numero2;
   int resultado;
   int opcion;
   do
   {
       system("cls");
       printf("Calculadora\n\n");
       printf("1_Suma\n");
       printf("2_Resta\n");
       printf("3_Dividir\n");
       printf("4_Multiplicar\n");
       printf("5_Salir\n");
       printf("Ingrese una opcion ");
       scanf("%d", &opcion);
            while(!validarpositivo(opcion,1,5))
            {
                printf("\n Error. Reingrese uin valor");
            }
            switch (opcion)
            {
                case 1: //suma
                     printf("Ingrese el primer valor ");
                     scanf("%d", &numero1);
                     printf("Ingrse el segundo valor ");
                     scanf("%d", &numero2);
                     printf("%d \n\n", numero1 + numero2);
                     system("pause");
                     break;
                case 2: //resta
                     printf("Ingrese el primer valor ");
                     scanf("%d", &numero1);
                     printf("Ingrse el segundo valor ");
                     scanf("%d", &numero2);
                     printf("%d \n\n", numero1 - numero2);
                     system("pause");
                     break;
                 case 3: //dividir
                     printf("Ingrese el primer valor ");
                     scanf("%d", &numero1);
                     printf("Ingrse el segundo valor ");
                     scanf("%d", &numero2);
                     printf("%d \n\n", numero1 / numero2);
                     system("pause");
                     break;
                 case 4: //multiplicar
                     printf("Ingrese el primer valor ");
                     scanf("%d", &numero1);
                     printf("Ingrse el segundo valor ");
                     scanf("%d", &numero2);
                     printf("%d \n\n", numero1 * numero2);
                     system("pause");
                     break;
            }

   }while(opcion!=5);
    return 0;
}
/** \brief valida si un entero esta dentro del rango 1 y 5.
 *
 * \param validar que sea mayor o igual que 1
 * \param validar que sea menor o igual que 5
 * \return un entero
 *
 */

int validarpositivo(int x, int inf, int sup)
{
    int esvalido=0;
    if ((x>=inf) && (x<=sup))
    {
      esvalido=1;
    }
return esvalido;
}
