#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int  random_number = rand() % 100 + 1;
  int nombre;
  int nombre_coup=0;
  int tentative=0;
  while(tentative==0)
  {
    printf("Bonjour, choissisez un nombre entre 1 et 100:\n");
    scanf("%d", &nombre);
      if (nombre<=100 && nombre>=0)
     {
      if (nombre<random_number)
       {
      printf("Le nombre mystére est plus grand\n");
       scanf("%d", &nombre);
       }
    else if(nombre>random_number)
      {
      printf("Le nombre mystére est plus petit\n");
      scanf("%d", &nombre);
     }else 
      {
        tentative++;  
        printf("Bravo vous avez trouvé le nombre mystére c'était: %d,vous l'avez fait en %d tentative\n",random_number, nombre_coup);
      }
      nombre_coup++;
      } 
      else{
  printf("Le nombre est incorrect\n");
     }

}
    exit(0); 
}