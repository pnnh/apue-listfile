#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: ApueListfile <directory>\n");
    return 1;
  }

  DIR *dp;
  struct dirent *dirp;

  if ((dp = opendir(argv[1])) == NULL) {
    fprintf(stderr, "can't open %s", argv[1]);
    return 2;
  }
  printf("List of files in %s\n---------------------------\n", argv[1]);

  while((dirp = readdir(dp)) != NULL) {
    printf("%s\n", dirp->d_name);
  }

  closedir(dp);
  return 0;
}