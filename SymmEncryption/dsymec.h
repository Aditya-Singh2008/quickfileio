int inputlen();
int filewrite(char *filesname, int *pta, int charlen);
void readfile(char *filesname);

int charlen;
int *tempascii = NULL;
int *ptrascii = NULL;

int inputfilelen(char *filesname){
  FILE *readfile = fopen(filesname, "r");
  int input;
  int sum = 1;

  if(readfile == NULL){
    printf("Enter a valid file name");
    exit(1);
  }

  while((*ptrascii++ = (input = fgetc(readfile))) != EOF){
    sum++;
  }
  fclose(readfile);
  ptrascii -= sum;
  return sum;
}

int filewrite(char *filesname, int *pta, int charlen){
  FILE *writefile = fopen(filesname, "w");
  int element = 0;
  while(*(pta + element) != EOF){
    fputc(*(pta + element), writefile);
    element++;
  }
  fclose(writefile);
}

int inputlen(){
  printf("[Enter Input]: ");
  int input;
  int sum = 1;
  while((*ptrascii++ = (input = getchar())) != -1){
    sum++;
  }
  ptrascii -= sum;
  return sum;
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
