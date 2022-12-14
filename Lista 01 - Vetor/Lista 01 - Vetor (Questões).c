#include <stdio.h>

/*                          ----Questão 01----
Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos*/

int main(){
	
	float notas[30];
	int i;
	
	for (i=0;i<30; i++){
	printf("Digite as notas: ");
	scanf ("%f", &notas[i]);
}

for (i=0;i<30; i++){
	printf("Notas %d: %d\n", i, notas[i]);
}
	
	return 0;
}

/*_____________________________________end__________________________________________*/

#include <stdio.h>

/*                                 ----Questão 02----
Altere o algoritmo anterior considerando que não se conhece quantos alunos esta turma tem 
(menos que 50). O número de aluno será informado pelo usuário.*/ 

int main (){
	
	int quantidadeAlunos;
	
	printf("Digite a quantidade de aluno: ");
	scanf("%d", &quantidadeAlunos);
	
	float notas[quantidadeAlunos];
	int i;

	for (i=1; i<=quantidadeAlunos; i++){
		printf("Digite a %d nota: ", i);
		scanf("%f", &notas[i]);
	}

   printf("\n\n");

	for (i=1; i<=quantidadeAlunos; i++){
		printf("Nota %d: ",i);
		printf("%.1f\t", notas[i]);
	}
	
	return 0;
}

/*_____________________________________end__________________________________________*/

#include <stdio.h>

/*                              ----Questão 03----
Faça um algoritmo que calcule e escreva o somatório dos valores armazenados numa variável 
composta unidimensional, chamada dados, de até 100 elementos numéricos a serem lidos.
*/

int main (){
	
	int numeros[100];
	int i, soma;

	for (i=0; i<100; i++){
		printf("Digite os respectivos numeros %d: ", i);
		scanf("%f", &numeros[i]);
	}
	
	soma=0;
    for (i=0; i<100; i++){
    soma=soma+numeros[i];
	}
	
	printf("\nSoma: %d", &soma);
	
	return 0;
}

/*_____________________________________end__________________________________________*/

#include <stdio.h>
#include <stdlib.h>

/*                                 ----Questão 04----
Faça um algoritmo que leia até 30 letras e as escreva na ordem inversa (ou contrária) da que 
foram lidas.
*/

int main(){
 int i;
 char letras[30][2];
 
 
 for(i=0;i<30;i++){
 printf("Informe a letra %d: ",i+1);
 gets(letras[i]);
 }
 
 printf("\n:: Ordem inversa ::\n");
 
 for(i=30;i>=0;i--){
 printf("%s\n",letras[i]);
}

 return 0;
}

/*_____________________________________end__________________________________________*/

#include<stdio.h>
/*                               ----Questão 05----
Faça um algoritmo que leia um vetor de até 80 elementos. Após a leitura de todos os dados, leia
um número e verifique se existem elementos no vetor iguais ao número lido. Se existirem,
escrever, em uma tela limpa, quantas vezes eles aparecem e quais as posições em que eles estão
armazenados no vetor.*/

int main(){
    int elements[80];
    int count, num = 0;
    int a, b;

    for(count = 0; count <= 80; count++){
        printf("\nDigite um numero: "); 
        fflush(stdin); 
        scanf("%d", &elements[count]);
       
    }

    for(a = 0; a <= 80; a++){
        printf("%d ", elements[a]);
        printf("\n-------\n");
            
    for(b= 0; b <= 80; b++){
            if(elements[a] == elements[b] && b != a){
                printf("\nO numero %d repetiu na posicao %d", elements[a], b);
                }
                
             }
        
        }
return 0;
        }

/*_____________________________________end__________________________________________*/

#include<stdio.h>
/*                               ----Questão 06----
Fazer um algoritmo/programa que leia a matricula e o salário dos funcionários de uma empresa
(máximo de 100 funcionários). Após a leitura de todos os dados, informe em uma tela limpa os
dados lidos e o maior e menor salário dos funcionários. O maior e menor salário deverão ser
obtidos, cada um, por uma função. Sabe-se ainda que não existe matrícula repetida na empresa.*/

int main(){

int num;
int matricula[num], a;
float salario[num], menor = 0, maior = 35.000;

printf("Quantos funcionarios deseja inserir |MAX 100|? ");
scanf("%d", &num);
printf("\n");

 for(a = 0; a < num; a++){
    printf("\nDigite a matricula do funcionario: ");
    scanf("%d", &matricula[a]);
    printf("Digite o salario do funcionario [%d]: ", matricula[a]);
    scanf("%f", &salario[a]);

    if(salario[a] > maior){
            maior = salario[a];}
            
    if(salario[a] < menor){
            menor = salario[a];}
}

    printf("\n****************************\n");

    for(a = 0; a < num; a++){
        printf("Matricula: %d\n", matricula[a]);
        printf("Salario: %.0f\n", salario[a]);
        printf("\n");
    }


    printf("Maior salario: %.0f\n", maior);
    printf("Menor salario: %.0f", menor);
    
    printf("\n****************************\n");

return 0;
}

/*_____________________________________end__________________________________________*/

#include <stdio.h>
/*                               ----Questão 07----
Desenvolva um algoritmo que cadastre os preços de até 100 diferentes CDs em uma loja. Após 
este cadastro, o algoritmo deverá possibilitar a execução de uma de duas funções para aumento 
dos preços cadastrados, sendo a primeira de 10% para todos os CDs, enquanto a segunda 
aumenta o percentual informado pelo vendedor para todos os CDs. Será o vendedor que 
escolherá o tipo de aumento desejado. Após os cálculos deverá ser apresentado o percentual de 
aumento e, para cada CD, o valor sem aumento e o valor com aumento.*/

int main(){
	
	double cd[100], cd10[100], cdx[100], porcentagem;
	int i;
	
	for (i=0; i<100; i++){ //valores originais
		printf("Informe o valor do CD: ");
		scanf("%lf", &cd[i]);
	}
	
   for (i=0; i<100; i++){
   cd10[i]= cd[i] + cd[i] * (10/100);
   }

   printf("Vendedor, qual porcentagem em cada CD? ");
   scanf("%lf", &porcentagem);
   
   for (i=0; i<100; i++){
       cdx[i]= cd[i] + cd[i] * (porcentagem/100);
   }

for (i=0; i<100; i++){
       printf("\n\nValor original: %.0lf", cd[i]);
       printf("\nValor com 10 de aumento: %.0lf", cd10[i]);
       printf("\nValor com percentual informado pelo vendedor: %.0lf", cdx[i]);
   }  
	
	return 0;
}

/*_____________________________________end__________________________________________*/

#include <stdio.h>
/*                              ----Questão 08----
Faça um algoritmo que leia a idade de até 100 pessoas e apresente a média entre todas, além
de identificar a mais velha e a posição em que ela se encontra no vetor. A idade mais velha
pode aparecer em mais de uma posição.*/

int main(){
    int idade[100], soma = 0, i;
    int maisvelha = 0;
    float media;
    
    for( i = 0; i < 100; i++){
        printf("Digite a idade (%d):  ");
        scanf("%d", &idade[i]);
    }
    
    for( i = 0; i < 100; i++){
        if (idade[i]>= maisvelha)
		{
            maisvelha=idade[i];
        }
        soma = soma + idade[i];
    }
    
    media= soma/idade[i];
    printf("A media eh: %.0f\n", media);
  
    for( i = 0; i < 100; i++)
    {
        if(idade[i] == maisvelha){
            printf("A idade mais velha e: %d \n", maisvelha);
            printf("Posicao %d\n", i);
        }
    }
    return 0;
}
 

/*_____________________________________end__________________________________________*/

#include <stdio.h>
/*                              ----Questão 09----
Uma grande empresa deseja saber quais os três empregados mais recentes. Fazer um algoritmo
para ler um número indeterminado de informações (máximo de 50) contendo a matrícula
funcional do empregado e o número de meses de trabalho deste empregado. Mostre os três
empregados mais recentes. Não existem dois empregados admitidos no mesmo mês e a
matrícula igual a zero ‘0’ encerra a leitura.*/

int main(){
	
	int i, recentes;
	int num;
	int matricula[num], meses[num];
	
	printf("Informe a quantidade de funcionarios desejada: ", i+1);
    scanf("%d", &num);
    printf("__________________________________");

		for (i =0; i < num; i++){
		printf ("\nInforme a matricula do funcionario [%d]: ");
		scanf  ("%d", &matricula[i]);
		printf ("Informe os meses trabalhados pelo funcionario [%d]: ",i+1);
		scanf  ("%d", &meses[i]);
		if (meses[i] < meses[i]){
			recentes = matricula[i];
		}
	}
	
	for (i =0; i < num; i++){
		if (meses[i] < meses[i]){
			recentes = matricula[i];
		}
	}
	printf("\n\n");
	printf ("O %d eh o funcionario mais novo", recentes);
	return 0;
}


/*_____________________________________end__________________________________________*/

#include <stdio.h>
/*                              ----Questão 10----
Elabore um algoritmo que leia um conjunto de valores inteiros correspondentes a até 80
notas, variando de 0 a 10, dos alunos de uma turma (vários alunos). Calcule a frequência de
cada nota e apresente uma tabela contendo os valores das notas e suas respectivas frequências.*/

int main(){
	
	int num, rep;
	int nota[num], a, b = 1;
	int frequencia;
	
printf("Informe a quantidade de notas que deseja armazenar: ");
scanf("%d",num);

if(num > 80){
    printf("Max de nota eh 80!");
    return;
}

do{
        for(a = 0; a < num ; a++){
    printf("Informe a nota do aluno [%i]: ", a);
    scanf("%d", &nota[a]);

       
    if(nota[a] < 0 || nota[a] > 10){
            printf("Nota informada eh INVALIDA!\n");
    }
	else{
            printf("Nota informada eh VALIDA!\n");
        }

    }

}while (nota[a] < 0 && nota[a] > 10);

       
    printf("\n------NOTAS DOS ALUNOS------\n");
        for(a = 0; a < num ; a++){
            printf("Nota[%i]: %d\n",nota[a]);
        }

        
    printf("Numeros repetidos no vetor: \n");
        for(a = 0; a < num; a++){
        rep = 0;

        for(b = a + 1; b < num ; b++){
        if(nota[a]== nota[b]){
    rep = 1;
                }
        if(rep = a){
    printf("%d\n",nota[a]);
            }
        }
    }
    return 0;
}
