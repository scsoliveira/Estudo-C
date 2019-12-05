#include <stdio.h>
#include<stdlib.h>

typedef struct{
  int dia;
  int mes;
  int ano;
}dma;

typedef struct{
  int horas;
  int minutos;

}hm;

dma fim_evento(dma datainicio, int duracao);
int diferenca_datas(dma datainicio, dma datafim);
hm calcular_minutos(int minutos);

int main(void) {
  dma x;
  dma y;
  dma z;
  hm a;
  int duracao;
  int diferenca;
  int minutos;
  
  printf("Data 1:\n");
  scanf("%d/%d/%d", &x.dia,&x.mes,&x.ano);
  printf("Duração do evento em dias:\n");
  scanf("%d", &duracao);
  y = fim_evento(x, duracao);
  printf("%d/%d/%d\n", y.dia,y.mes,y.ano);

  printf("Data 2:\n");
  scanf("%d/%d/%d", &z.dia,&z.mes,&z.ano);
  diferenca = diferenca_datas(x,z);
  printf("Diferença de %d dias entre a data 1 e data 2\n", diferenca);


  printf("Digite um intervalo de tempo em minutos:\n");
  scanf("%d", &minutos);
  a = calcular_minutos(minutos);
  printf("%d horas e %d minutos\n", a.horas, a.minutos);

  return 0;
}


//Devolve a data do fim do evento em relação a data inicial e a duração do evento
dma fim_evento(dma datainicio, int duracao){
  dma datafim;
  
  datafim.mes = datainicio.mes;
  datafim.ano = datainicio.ano; 

  //determinar quantos dias
  datafim.dia = datainicio.dia + (duracao%30);

  //caso passe dos 30 dias
  if(datafim.dia > 30){
    datafim.dia = (datainicio.dia + duracao) % 30;
    datafim.mes=datafim.mes + 1;
  }

  //determinar quantos meses
  datafim.mes=datafim.mes+(duracao/30);


  //caso passe de 12 meses
  if(datafim.mes>12){
    datafim.mes = datafim.mes%12;
    datafim.ano = datafim.ano + 1;
  }

  //determinar quantos anos
  datafim.ano = datafim.ano + (duracao/360);

  return datafim;
}


//Calcula o número de dias que decorreram entre as duas datas
int diferenca_datas(dma datainicio, dma datafim){
  int diferenca;

  diferenca = abs((datainicio.dia+(datainicio.mes*30)+(datainicio.ano*360))-(datafim.dia+(datafim.mes*30)+(datafim.ano*360)));

  return diferenca;
}

hm calcular_minutos(int minutos){
  hm a;
  a.horas = minutos/60;
  a.minutos = minutos%60;

  return a;
}
