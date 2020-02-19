#include<stdio.h>
#include<stdlib.h>

int main(){
    int segundos = 3000;
    int horas, minutos;
    horas = segundos / 3600; 
    segundos = segundos%3600; 
    minutos = segundos / 60;
    segundos = segundos%60;

    printf("%dhoras:%dminutos:%dsegundos", horas, minutos, segundos);

}