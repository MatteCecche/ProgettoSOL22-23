#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define PATH_MAX 4096

int main(int argc, char *argv[]){

  if (argc < 1){

    fprintf(stderr, "Errore : Inserire argomenti\n");

    return -1;

  }

  int op;
  int nthread = 4;
  int qlen = 8;
  char *dirname;
  int delay = 0;
  char *optarg;

  while((op = getopt(argc, argv, "n:q:d:t")) != -1){
    switch(op){
      case 'n':
        //numero thread
        nthread = atoi(optarg);
        break;
        case 'q':
        //lunghezza coda
        qlen = atoi(optarg);
        break;
        case 'd':
        //cartella file
        dirname = optarg;
        break;
        case 't':
        //tempo delay
        delay = atoi(optarg);
        break;
      }
    }

    printf("%d\n", nthread);
    printf("%d\n", qlen);
    printf("%s\n", dirname);
    printf("%d\n", delay);


}
