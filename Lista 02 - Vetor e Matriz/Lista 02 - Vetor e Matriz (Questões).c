/*             ----------Questão 01----------
Escreva um programa em C que lê matricula e as notas de no máximo 100 
alunos. O programa deve ler e armazenar uma nova matricula e uma nova nota 
enquanto o usuário desejar. Após o armazenamento permita ao usuário 
consultar a nota de um aluno digitando sua matricula, o programa deve permitir 
no máximo 10 consultas para um mesmo ciclo de execução do programa.
*/

#include<stdio.h>

int main(){
	
	int num;
	float notas[num];
	int resposta, matricula[num], a, pesq;

    printf("Quantos alunos serao cadastrados? "); 
    fflush(stdin);
    scanf("%d", &num);

    for(a = 0; a < num; a++){
    fflush(stdin);
    printf("\nDigite a matricula do aluno [%d]: ", a+1);
    scanf("%d", &matricula[a]);
    fflush(stdin);
    printf("Digite a nota do aluno %d: ", a+1);
    scanf("%f", &notas);
    
    printf("\n\n");
    
    }

    for (a = 0; a < num; a++){
    printf("Deseja consultar alguma nota? (1 = sim) (2 = nao): ");
    scanf("%d", &resposta);
    
    if(resposta == 1){
            printf("Digite a matricula do aluno: ");
            fflush(stdin);
            scanf("%d", &pesq);

    for(a = 0; a < num; a++){
                if (pesq == matricula){
    printf("Matricula----> %d", matricula);
    printf("Nota----> %.0f", notas);
    
            }
        }
    }
        else ( resposta == 0); {
        break;
        }
    }
   return 0; 
}

/*_______________________________________________________________________________________________________________*/

/*                 ----------Questão 02----------
Crie um programa em C que leia 10 números inteiros e armazene em um vetor 
v. Declare dois novos vetores v1 e v2. Copie os valores ímpares de v para v1, 
e os valores pares de v para v2. Note que cada um dos vetores v1 e v2 podem 
ter no máximo 10 elementos, mas nem todas as posições do vetor são 
utilizadas. No final escreva os elementos que foram armazenados em v1 e v2.
*/

#include<stdio.h>

int main(){
	
	int num;
	int v[num], v1[num], v2[num], a, c, impar[num], par[num];
	
    printf("Quantos vetores deseja adicionar (MAX 10)? ");
    scanf("%d", &num);
    printf ("\n\n");
    
    for(a = 0; a < num; a++)
    {
        printf("Digite um numero(inteiro) [%d]: ", a);
        scanf("%d", &v[a]);

        c = v[a] %2;
        
		if(c == 0)
        {
            v1[a] = v[a];
            par[a] = 1;
        } else (c > 0); {
           v2[a] = v[a];
            impar[a]=1;
        }  
    }

    for(a = 0; a < num; a++)
    {
      if (impar[a] == 1)
      {
       printf("\n\n");
       printf("O numero impar %d esta na posicao %d", v2[a], a);
      }  
    }
    
    for(a = 0; a < num; a++)
    {
        if (par[a] == 1)
      {
        printf("O numero par %d esta na posicao %d", v1[a], a);
      }
    }
    return 0;
}

/*_______________________________________________________________________________________________________________*/

/*                 ----------Questão 03----------
Faça um programa em C para ler 10 números DIFERENTES a serem 
armazenados em um vetor. Os dados deverão ser armazenados no vetor na 
ordem que forem sendo lidos, sendo que caso o usuário digite um número que 
já foi digitado anteriormente, o programa deverá pedir para ele digitar outro 
número. Note que cada valor digitado pelo usuário deve ser pesquisado no 
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir 
na tela o vetor final que foi digitado.
*/

#include <stdio.h>

int main (){
	
   int num[10], a, b, rep;
   
   for(a = 0; a < 10; a++){

    printf("Digite um numero: ", a);
    scanf("%d", &num[a]);
       
       rep = num[a];

   for(b = 0; b < 5; b++){
            if(rep == num[b]){
                printf("O numero %d repetiu\n", num);
                printf("Digite um outro numero: ");
                scanf("%d", &num[b]);
            }
            
}
}
return 0;
}

/*_______________________________________________________________________________________________________________*/

/*                 ----------Questão 04----------
Crie um programa em C que leia os elementos de uma matriz inteira 6 x 6 e 
imprima todos os elementos, exceto os elementos da diagonal principal.
*/

#include <stdio.h>

int main (){
	
    int elements[6][6], a, b;
    
    for(a = 0; a < 6; a++){
    	
    for (b = 0; b < 6; b++){
           printf("\nInforme um numero a ser armazenado em |%d| |%d|: ", a, b);
           scanf("%d", &elements[a][b]);
        }
        
    }
    for(a = 0; a < 6; a++){
    	
    for(b = 0; b < 6; b++){
            printf("%d\n", &elements[a][b]);
        }
        
}
return 0;
}

/*_______________________________________________________________________________________________________________*/

/*                 ----------Questão 05----------
Desenvolva um programa em C que leia duas matrizes 4 x 4 e escreva uma 
terceira com os maiores valores de cada posição das matrizes lidas.
*/

#include <stdio.h>

int main (){
	
    int a[4][4], b[4][4], c[4][4], i, j;

    for(i = 0; i < 4; i++){

    for(j = 0; j < 4; j++){
            printf("Matriz 'A' [%i] [%i]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
    
	for( j = 0; j < 4; j++){
            printf("Matriz 'B' [%i] [%i]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for( i = 0; i < 4; i++){

    for( j = 0; j < 4; j++){
            if(a[i][j] > b[i][j])
            {
                c[i][j] = a[i][j];

            }

            else(b[i][j] > a[i][j]);
            {
                c[i][j] = b[i][j];
            }
    }
    }

    for(i = 0; i < 4; i++){

        for(j = 0; j < 4; j++){
         printf("Matriz 'C' [%d] [%d]: %d\n", i, j, c[i][j]);
        }
}
return 0;	
}	

/*_______________________________________________________________________________________________________________*/

/*                 ----------Questão 06----------
Faça um programa que preenche uma matriz 5 x 5 com o produto do valor da 
linha e da coluna de cada elemento. Ao final exiba a matriz em tela.
*/

#include <stdio.h>

int main (){
	
    int a[4][4], i, j;

   for(i = 0; i < 5; i++)
    {
    for (j = 0; j < 5; j++){
           a[i][j] = i*j;
        }  
    }

    for( i = 0; i < 5; i++){

    for(j = 0; j < 5; j++){
         printf("Matriz 'A' [%d][%d]: %d\n", i, j, a[i][j]);
        }
}
return 0;	
}	

/*_______________________________________________________________________________________________________________*/

/*                 ----------Questão 07----------
Crie um programa em C que leia uma matriz 3 x 3 elementos, calcule a soma 
dos elementos que estão na diagonal principal, abaixo da diagonal principal e 
acima da diagonal principal, ao final mostre os três resultados obtidos.
*/

#include <stdio.h>

int main (){

    int a[3][3], i, j;
    int c1 = 0, c2 = 0, c3 = 0;
    
    for (i = 0; i < 3; i++){
    	
    for (j = 0; j < 3; j++){
        printf ("nInforme um numero a ser armazenado em |%d| |%d|: ", i,j);
        scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++){
    	
        for ( j = 0; j < 3; j++){
        printf("%d\n", a[i][j]);
        }
    }

    for (i = 0; i < 3; i++){
        c1 = c1 + a[i][i];
        printf("%d\n",c1);
    }

    for (i = 0; i < 2; i++){
        c2 = c2+ a[i][i+1]; 
    }

    for (i = 0; i < 2; i++){ 
       c3 = c3 + a[i+1][i];
    }
   printf("O valor da soma do elementos da diagonal principal eh: %d\n", c1);
   printf("O valor da soma do elementos da diagonal superior eh: %d\n", c2);
   printf("O valor da soma do elementos da diagonal inferior eh: %d", c3);
   
return 0;	
}

/*_______________________________________________________________________________________________________________*/

/*                 ----------Questão 08----------
Construa um programa em C para gerar e imprimir uma matriz de tamanho 10 
x 10, onde seus elementos são da seguinte forma:

A[i][j] = 2*i + 7*j - 2 se i < j;
A[i][j] = 3*i^2 - 1 se i == j;
A[i][j] = 4*i^3 + 5*j^2 + 1 se i > j.
*/

#include <stdio.h>

int main (){

return 0;	
}

/*_______________________________________________________________________________________________________________*/

/*                 ----------Questão 09----------
Faça um programa em C que leia uma matriz 10 x 3 com as notas de 10 
alunos em 3 disciplinas. Em seguida, calcule e escreva o número de alunos 
cuja pior nota foi na disciplina 1, o número de alunos cuja pior nota foi na
disciplina 2, e o número de alunos cuja a pior nota foi na disciplina 3. Em caso 
de empate das piores notas de um aluno, o critério de desempate é arbitrário, 
mas o aluno deve ser contabilizado apenas uma vez
*/

#include <stdio.h>

int main (){
 int a[10][3], pior, piornota[3], alunos[3], disciplinas[3], i, j;

	for(i = 0; i < 10; i++){
		
    for (j = 0; j < 3; j++){
        printf("Forneca a nota [%d] do aluno [%d] ----> |%d| |%d|: ",j,i,i,j);
        scanf("%d", &a[i][j]);
        }   
    }

    for (j = 0; j < 3; j++){
        pior = 100;
        for ( i = 0; i < 10; i++)
        {
            if (a[i][j] < pior)
            {
                pior = a[i][j];
                piornota[j] = a[i][j];
                alunos[j] = i;
                disciplinas[j] = j;
            }
    }
    }
    
    for(i = 0; i < 3; i++){
        printf("O pior aluno da disciplina %d foi o %d com a nota %d\n", i, alunos[i], piornota[i]);
} 
return 0;	
}