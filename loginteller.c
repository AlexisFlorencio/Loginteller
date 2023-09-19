/* loginteller.c
 * Based on monousuar.c at http://www.binefa.net/gnu/gcc/processos/Informacio_d_usuari.html
 * www.binefa.cat
 * 20120507
*/
#include <stdio.h>
#include <unistd.h>    // getlogin()
#include <stdlib.h>    // exit()

int main(){
    char *szLogin;
   
    if((szLogin = getlogin())==NULL){
        perror("getlogin");
        exit(EXIT_FAILURE);
    }  
    printf("Your login name at the system is : %s\n",szLogin);

    return (0);
}
