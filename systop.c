#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

    int optc;
    while(( optc = getopt(argc, argv, "xyzn:")) != -1){
        switch (optc){
            case 'x':
		puts ("x\n");
                break;
            case 'y':
		puts ("y\n");
                break;
            case 'z':
		puts ("z\n");
                break;
            case 'n':
		puts ("n\n");
                break;
            default:
		puts ("default");
        }
    }

}
