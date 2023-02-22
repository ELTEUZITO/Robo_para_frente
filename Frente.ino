/*
  Codigo do rôbo Cotoco 
  Desenvolvido pelos alunos Gustavo E Mateus
  a função do rôbo é combater contra outros rôbos para um campeonato de sumobot
  */

/*=================================================================================================
  -- MAPEAMENTO DE HARDWARE:
 ==================================================================================================*/
#define set A4 //sensor esquerdo traseiro
#define sdt A5 //sensor direito traseiro
#define sdf A3 //sendor direito da frente
#define sef A0 //sensor esquerdo da frente

#define mev 5 //motor esquerdo de velocidade
#define medf 7 //motor esquerdo de direção da frente
#define medt 6 //motor esquerdo de direção de trás

#define mdv 3//motor direito de velocidade
#define mddf 2//motor direito da frente
#define mddt 4//motor direito de trás

int aleatorio=1;
int direcao=1;
/*=================================================================================================
  -- CONFIGURAÇÃO:
 ==================================================================================================*/

void setup() {
delay(4800);

  //Sensores
pinMode(set, INPUT);
pinMode(sdt,INPUT);
pinMode(sdf, INPUT);
pinMode(sef, INPUT);

  //Serial
Serial.begin(9600);

  //Motores
pinMode(mev, OUTPUT);
pinMode(medf, OUTPUT);
pinMode(medt, OUTPUT);

pinMode(mdv, OUTPUT);
pinMode(mddf, OUTPUT);
pinMode(mddt, OUTPUT);

frente();
delay(100);


}

void loop() {


if(analogRead(sdf)>200 or analogRead(sef)>200){
  para();
  delay(20);
  tras();
  delay(300);
  direcao=0;

}




if(analogRead(sdt)>200 or analogRead(set)>200){
  para();
  delay(20);
  frente();
  delay(300);
  direcao=1;

}

if(direcao==1){
  frente();
  
}
else{
  tras();
}
}
