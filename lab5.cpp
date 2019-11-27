#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>


int main (int argc, char *argv[]){

  const char* short_options = "hvdk";

  const struct option long_options[] = {
    {"help",no_argument,NULL,'h'},
    {"version",no_argument,NULL,'v'},
    {"data",no_argument,NULL,'d'},
    {"key",no_argument,NULL,'k'},
    {NULL,0,NULL,0}
  };
  bool help = false;
  bool version = false;
  bool data = false;
  bool key = false;
  int rez;
  int option_index;

  while ((rez=getopt_long(argc,argv,short_options,
    long_options,&option_index))!=-1){

    switch(rez){
      case 'h': {
        help = true;
        break;
      };
      case 'v': {
        version = true;
        break;
      };
  
      case 'd': {
        data = true;
        break;
      };
      case 'k': {
        key = true;
        break;
      };
      case '?': default: {
        printf("found unknown option\n");
        break;
      };
    };
  };
  if(help)
    printf("Arg: help\n");
  if(version)
    printf("Arg: version\n");
  if(data)
    printf("Arg: data\n");
  if(key)
    printf("Arg: key\n");
  return 0;
};
