#include "pcpy.h"
 
 
 
int main( int argc ,char ** argv )
{
     int pos = atoi( argv[4] );
     int blocksize = atoi( argv[3] );
     char buffer[blocksize];
     bzero( buffer,sizeof(buffer) );
     //argv[1] =sfile  argv2 = desfile  argv3 = blocksize  argv4 = pos
     int sfd = open( argv[1],O_RDONLY );
     int dfd = open( argv[2],O_WRONLY );
     lseek( sfd,pos,SEEK_SET );
     lseek( dfd,pos,SEEK_SET );
 
     int rsize;
     rsize = read( sfd,buffer,sizeof(buffer) );
     write( dfd,buffer,rsize );
  
     return 0;
}

