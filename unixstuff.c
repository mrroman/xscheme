#include <stdio.h>
#include <stdlib.h>
#include "xscheme.h"

int osbgetc(FILE *fp) {
    return osagetc(fp);
}

FILE *osbopen(char *name, char *mode) {
    return osaopen(name, mode);
}

int osbputc(int c, FILE *fp) {
    return osaputc(c, fp);
}

int main(int argc, char *argv[]) {
    xlmain(argc, argv);
}

int osagetc(FILE *fp) {
    return fgetc(fp);
}

FILE *osaopen(char *name, char *mode) {
    return fopen(name, mode);
}

int osaputc(int c, FILE *fp) {
    return fputc(c, fp);
}

void oscheck() {
}

void osfinish() {
}

int osclose(FILE *fp) {
    return fclose(fp);
}

void oserror(char *msg) {
    fprintf(stderr, "error: %s\n", msg);
}


void osflush() {
    fflush(stdout);
}

void osinit(char *banner) {
    printf("%s\n", banner);
}

int osrand(int n) {
    return rand() % n;
}

int osseek(FILE *fp, long offset, int whence) {
    return fseek(fp, offset, whence);
}

long ostell(FILE *fp) {
    return ftell(fp);
}

int ostgetc() {
    return getchar();
}

void ostputc(int c) {
    putchar(c);
}

void ostputs(char *s) {
    puts(s);
}

void xsystem(char *cmd) {
    system(cmd);
}
