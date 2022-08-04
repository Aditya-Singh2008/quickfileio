#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"SymmEncryption/dsymec.h"
void readfile(char *filesname);

int main(int argc, char *argv[]){
    if(strcmp(argv[1], "-FileWrite") == 0){
        ptrascii = (int*) malloc(sizeof(int) * (2000));
        charlen = inputlen();
        filewrite(argv[2], ptrascii, charlen);
    }
    else if(strcmp(argv[1], "-FileRead") == 0){
        readfile(argv[2]);
    } else{
        printf("-FileWrite or -FileRead");
    }

    return 0;
}
void readfile(char *filesname){
  FILE *readfile = fopen(filesname, "r");
  int input;

  if(readfile == NULL){
    printf("Enter a valid file name");
    exit(1);
  }

  while((input = fgetc(readfile)) != EOF){
    printf("%d ", input);
  }
  printf("-1\n");
  fclose(readfile);
}
