#include <stdio.h>

void cronometro(int h, int m, int s){
    if( h == 0 && m == 0 && s == 0){
        return printf("Tempo: 00:00:00 \n");
    }
    printf("Tempo: %02d:%02d:%02d \n",h,m,s);

    if(s>0){
        s--;
    }else{
        s=59;
        if(m > 0){
            m--;
        }else{
            m=59;
            if(h > 0){
                h--;
            }
        }
    }
    cronometro(h,m,s);
}

int main () {
    
    cronometro(0,10,0);
/**/
}