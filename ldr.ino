//AcaciaCalegari
//12/11/2019
//Programa q usa um LDR q eh um sensor q mede a luminosidade

const int LDR = A0; //liga o ldr na porta analogica 0 do arduíno
int input_val = 0; //declarando a variavel input_val recebendo o valor de 0

void setup()
{
  Serial.begin(9600); //esse eh um valor padrao p medicoes analogicas
}

void loop()
{
  input_val = analogRead(LDR); //input_val recebe a leitura do ldr
  Serial.print("o valor da Leitura do LDR eh: "); //escreve na tela o valor de ldr
  Serial.println(input_val); //pega o valor do ldr e printa na tela
  delay(1000);//delay de 1 seg durante as medicoes
}