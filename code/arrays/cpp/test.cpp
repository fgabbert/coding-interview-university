#include <iostream>

int main(){

    int fkg[3];
    //fkg[0] = 1;
    //fkg[1] = 2;
    //fkg[2] = 3;
    //int *fkgp = &fkg;

    printf("%p\n",&fkg);
    printf("%p\n",&fkg<<);
    printf("%i\n", *fkg);
    printf("%i\n%i\n%i\n",fkg);
    //printf("%p\n",&fkg[1]);
    //printf("%p\n",&fkg[2]);
    //printf("%d\n",*fkgp);

    return 0;
}
