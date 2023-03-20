//
// Created by 39221 on 2023/3/16.
//
#include<stdio.h>
#include <synchapi.h>

int main(){
    char *c[] = {"ENTER","NEW","POINT","FIRST"};
    char **cp[] = {c + 3,c + 2,c + 1,c};
    char ***cpp = cp;
    printf("%s\n",**++cpp);
    printf("%s\n",*--*++cpp + 3);
    printf("%s\n",*cpp[-2] + 3);
    printf("%s\n",cpp[-1][-1] + 1);
}
