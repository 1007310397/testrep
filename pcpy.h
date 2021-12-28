#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int block( const char* File,int pronum );
int check_arg( const char *SFile,int arg_num,int pronum );
int procreate( const char *SFile,const char *DFile,int pronum);
int procreate( const char *SFile,const char *DFile,int pronum,int block );
