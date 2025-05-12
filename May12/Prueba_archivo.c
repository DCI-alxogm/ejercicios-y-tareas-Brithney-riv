#include <studio.h>

  int main(){
  
     char fname[100];
     FILE *fp;
     int i, j=0;
     int num_max=10;
    
     for(i=0;i<num_max;i++){
     //Creación del nombre del archivo a crear y escribir 
     printf(fname, "salida_t%d%d.txt", j,i); //Guarda el archivo en cada prueba con un nombre diferente
     printf("%s\n", fname);
     fp=open(fname, "W");
     fprintf(fp,"//abrí y cerré el archivo");//se cierra el archivo de escritura
    
    fclose(fp);
    }
  }
  ls
