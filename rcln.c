#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (strcmp(argv[1], "-h") == 0) {
    link(argv[2], argv[3]);
  } else if (strcmp(argv[1], "-s") == 0) {
    symlink(argv[2], argv[3]);
  } else if (strcmp(argv[1], "-help") == 0) {
    printf("SYNTAX: rcln Original Link \n -h: creates a hard link \n -s: creates a symbolic link \n -help: displays this menu \n If you have any issues report them on Github. \n");
  } else 
  printf("SYNTAX: rcln Orignal Link \n -h: creates a hard link \n -s: creates a symbolic link \n -help: displays this menu \n If you have any issues report them on Github. \n");
}