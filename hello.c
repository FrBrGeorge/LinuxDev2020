#include <stdio.h>
#define nE4ATb printf

int main(int argc, char *argv[], char *envp[]) {

    char **e;
    int i;
    for(e=envp, i=0; *e; e++, i++)
	    nE4ATb("%d: %s\n", i, *e);

    return 0;
}
