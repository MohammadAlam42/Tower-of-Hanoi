#include <stdlib.h>
#include <stdio.h>
#include "towers.h"


int main(int argc, char **argv)
{ 
    
    int n = 5;
    int from = 2;
    int dest = 3;
    
   
   


if(argc==2) {


n=atoi(argv[1]);
}



else if(argc>3){

n=atoi(argv[1]);

from = atoi(argv[2]);
dest= atoi(argv[3]);

}


if(dest!=from && 1<=from<=3 && 1<=dest<=3) {


}



else{

fprintf(stderr,"INCORRECT INPUT. From and dest values can't be the same and both must be from 1 to 3.");
exit(1);

}g


towers(n, from, dest);
 exit(0);

}
