#include<stdio.h>
int main(){
    int hr=0, min=0; //variaveis de horario atual
    int desphr=0, despmin=0; //variaveis de horario do despertador
    int CalcDespHr=0, CalcDespMin=0;//auxiliar de calculo da diferença de horario
    int aux=0;
    do{//verificação do horario atual válido
        printf("Hora atual: ");
        scanf("%d %d", &hr, &min);
    }while(hr>=24 || hr<00 || min>=60 || min<00);

    do{//verificação do horarios de despertar válido
        printf("Despertar: ");
        scanf("%d %d", &desphr, &despmin);
    }while(desphr>=24 || desphr<00 || despmin>=60 || despmin<00);
    if(hr<desphr){//caso a hora de despertar seja maior que a hora atual
        hr = hr*60;
        desphr = desphr*60;
        CalcDespHr = desphr-hr;
        CalcDespHr = CalcDespHr/60;
        if(min<despmin){
            CalcDespMin = despmin-min;
        }
        else if(despmin<min){
            CalcDespHr=CalcDespHr-1;
            min = 60-min;
            CalcDespMin = despmin+min;
        }
        else if(despmin==min){
            CalcDespMin=00;
        }
    }
    else if(desphr<hr){
        while(hr<=23){
            aux++;
            hr++;
            CalcDespHr = aux+desphr;
        }
        CalcDespHr=aux+desphr;
        if(min<despmin){
            CalcDespMin = despmin-min;
        }
        else if(despmin<min){
            CalcDespHr=CalcDespHr-1;
            min = 60-min;
            CalcDespMin = despmin+min;
        }
        else if(despmin==min){
            CalcDespMin=00;
        }
    }
    else if(hr==desphr){
        if(min>despmin){
            CalcDespHr=24;
        }
        else if(min<despmin){
            CalcDespHr=0;
        }
        if(min<despmin){
            CalcDespMin = despmin-min;
        }
        else if(despmin<min){
            CalcDespHr=CalcDespHr-1;
            min = 60-min;
            CalcDespMin = despmin+min;
        }
        else if(despmin==min){
            CalcDespMin=00;
        }
    }

    printf("\nRestam %d:%d ate despertar.", CalcDespHr, CalcDespMin);
return 0;
}
