void readfile(char *filesname);

int main(int argc, char *argv[]){
    if(strcmp(argv[2], "-File Write") == 0){
        ptrascii = (int*) malloc(sizeof(int) * (2000));
        charlen = inputlen();
        filewrite(argv[2], ptrascii, charlen);
    }
    else if(strcmp(argv[2], "-File Read") == 0){
        readfile(argv[2]);
    } else{
        printf("-File Write or -File Read");
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

  while(input = fgetc(readfile) != EOF){
    printf("%d ", input);
  }
  fclose(readfile);
}
