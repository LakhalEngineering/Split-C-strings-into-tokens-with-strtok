#include <stdlib.h>
#include <stdio.h>
#include <string.h>



#define BUFLEN 64


int main(int argc, char **argv){


char input[BUFLEN] = "Rey, Luke, Leia: Anakin, Padme";

char *token;

token = strtok(input, ",");
printf(" %s \n", token); // print the first string di "input"

while(token != NULL){

    token = strtok(NULL,",");
    printf("%s\n",token);
}
}
