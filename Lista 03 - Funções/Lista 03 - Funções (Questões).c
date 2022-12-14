/*                   ----------Questão 01----------
Escreva uma função que receba por parâmetro dois números e retorne o maior deles
*/

#include<stdio.h>

int maior (a, b){
	
	if (a > b){
		return a;
	}
	else {
		return b;
	}

}

int main(){
	
	int a, b, maiornumero;
	
	printf("Forneca o primeiro numero: ");
	scanf("%d", &a);
	
	printf("Forneca o segundo numero: ");
	scanf("%d", &b);
	
	maiornumero = maior(a, b);
	
	printf("\nO maior numero eh %d", maior);
	
	return 0;
}

/*_______________________________________________________________________________________*/

/*                   ----------Questão 02----------
Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a
sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo:
Entrada = 4. Saída = abril.
*/

#include<stdio.h>

void meses(int num){
	
switch (num){
		
	case 1: 
	printf("\nO numero %d corresponde ao mes de JANEIRO\n1", num);
	break;
	
	case 2: 
	printf("\nO numero %d corresponde ao mes de FEVEREIRO\n", num);
	break;
	
	case 3: 
	printf("\nO numero %d corresponde ao mes de MARCO\n", num);
	break;	
	
	case 4: 
	printf("\nO numero %d corresponde ao mes de ABRIL\n", num);
	break;
	
	case 5: 
	printf("\nO numero %d corresponde ao mes de MAIO\n", num);
	break;
	
	case 6: 
	printf("\nO numero %d corresponde ao mes de JUNHO\n", num);
	break;
	
	case 7: 
	printf("\nO numero %d corresponde ao mes de JULHO\n", num);
	break;
	
	case 8: 
	printf("\nO numero %d corresponde ao mes de AGOSTO\n", num);
	break;
	
	case 9: 
	printf("\nO numero %d corresponde ao mes de SETEMBRO\n", num);
	break;
	
	case 10: 
	printf("\nO numero %d corresponde ao mes de OUTUBRO\n", num);
	break;
	
	case 11: 
	printf("\nO numero %d corresponde ao mes de NOVEMBRO\n", num);
	break;
	
	case 12: 
	printf("\nO numero %d corresponde ao mes de DEZEMBRO\n", num);
	break;
	
	default:
    break;
	}
}

int main(){
	
    int mesimp;

    do{
    printf("\nInforme um numero de 1 a 12: ");
    scanf("%d", &mesimp);

        if(mesimp < 1 || mesimp > 12){
        printf("O numero informado INVALIDO!\n");}
        
    } while(mesimp < 1 || mesimp > 12);
        
    meses(mesimp);

    return 0;
}

/*_______________________________________________________________________________________*/

/*                   ----------Questão 03----------
Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a
retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0),
sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#include<stdio.h>

float toC (float convertFahr){
	return (convertFahr - 32.0) * (5.0/9.0);
}

int main(){

    float fahrenheit, celsius;

    printf("Informe a temperatura |EM FAHRENHEIT|: ");
    scanf("%f", &fahrenheit);

    celsius = C(convertFahr);

    printf("\nTemperatura convertida em graus CELSIUS eh %.1f\n", celsius);

    return 0;
}

/*_______________________________________________________________________________________*/

/*                   ----------Questão 04----------
Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e
retorne o volume desse cilindro. O volume de um cilindro circular é calculado por meio da
seguinte fórmula:
 ------> V= pi * raio2(ao quadrado) * altura <------ 
em que pi = 3.1414592
*/

#include<stdio.h>
#include <math.h>
#define pi 3.1414592

float vol(float h, float r){
	return pi * pow(r, 2) * h;
}

int main(){
	
	float h, r, volume;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);
    printf("\nInforme o raio do cilindro: ");
    scanf("%f", &r);

    volume = vol(h, r);
    
    printf("\n\n");
    printf("O volume do cilindro eh %.1f", volume);
	
	return 0;
}

/*_______________________________________________________________________________________*/

/*                   ----------Questão 05----------
Escreva uma função para o cálculo do volume de uma esfera
-----> V = 4 / 3pi * r3(ao cubo) <-----
em que pi = 3.1414592 valor do raio r deve ser passado por parâmetro.
*/

#include<stdio.h>
#include <math.h>
#define pi 3.1414592

float volEsf(float r){
 return (4 * pi * pow(r, 3)) / 3;
}

int main(){
	
    float r, v;

    printf("Digite o raio da esfera: ");
    scanf("%f", &r);

    v = volEsf(r);
    
    printf("\n\n");
    printf("O volume da esfera eh %.1f\n", v);
	
	return 0;
}

/*_______________________________________________________________________________________*/

/*                   ----------Questão 06----------
Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule
e retorne o IMC (Índice de Massa Corporal) dessa pessoa:
-----> IMC = peso / (h * h) <-----           h= altura
*/

#include<stdio.h>
#include <math.h>

float calcIMC(float peso, float h){
 return peso / pow(h, 2);
}

int main(){
	
    float peso, h, imc;

    printf("Digite o peso da pessoa |em KG|: ");
    scanf("%f", &peso);
    printf("\nDigite a altura da pessoa |em M|: ");
    scanf("%f", &h);

    imc = calcIMC(peso, h);
    
    printf("\n\n");
    printf("O seu IMC(Indice de Massa Corporal) eh %1.f\n", imc);
	
	return 0;
}