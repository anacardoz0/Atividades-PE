/*                --------------Questão 01-------------
Considerando o conjunto de dados abaixo para criação da estrutura, crie um programa
em C que leia o preço, o nome e as baixas de todos os dias de todos os produtos, após
percorra a estrutura de dados e verifique qual foi o produto que teve mais baixa, ou seja,
que foi mais vendido. Ao final, mostre o nome e quantas unidades deste produto foram
vendidas. A estrutura deve conter: código, nome, preço, baixa como uma matriz 4X6,
onde o 4 representa as semanas e o 6 cada dia da semana (segunda a sábado)
*/

#include <stdio.h>
#include <string.h>

typedef struct produtos{
	char nome[500];
	int cod, baixa[4][6]; 
	float preco;
}produtos;

int main(){
	
	produtos p;
	int num;
    int i, m1, m2;
    float somal = 0, somac = 0;

    printf("-------------------------------------");
	printf("\nQuantos produtos deseja adicionar? \n");
    scanf("%d", &num);
    printf("-------------------------------------\n\n");
    
    system("cls");
    
    printf("^^^^^^^^^^PRODUTOS^^^^^^^^^^");
    printf("\n");
    
    for (i = 0; i < num; i++)
    {
        printf("Digite o nome do produto: ");
        scanf("%s", &p.nome);
        printf("Informe o codigo do produto: ");
        scanf("%d", &p.cod);
        printf("Digite o preco do produto: ");
        scanf("%f", &p.preco);

        for(m1 = 0; m1 < 4; m1++){
            for(m2 = 0; m2 < 6; m2++){  
                printf("Forneca a quantidade de produtos vendidos no dia |%d|: ", m2+1);
                scanf("%d", &p.baixa[m1][m2]); 
            }
        }
        fflush(stdin);
    }
    
    system("cls");
    
    for(i = 0; i < 1; i++){

    for(m1 = 0; m1 < 4; m1++){

        for(m2 = 0; m2 < 6; m2++){
            somac = p.baixa[m1][m2]; }
            somal = somac;
        }
    }
    
    printf("********\n");  
    printf("%d", somal);
    printf("\n********\n"); 

    return 0;
}

/*__________________________________________________________________________________*/

/*                --------------Questão 02-------------
Desenvolva uma estrutura em C conforme o modelo abaixo e após crie as funções
solicitadas:
a) Cadastrar os dados.
b) Apresentar todos os dados.
c) Exibir a porcentagem de alunos aprovados e reprovados por turma, totalizados por
série.
d) Exibir a porcentagem de alunos do sexo masculino e do sexo feminino por turma,
totalizados por série.
e) Apresentar a média das idades de cada uma das séries.
*/

#include <stdio.h>
#include <string.h>

typedef struct cadastro{
	int matricula, serie, nascimento;
	char nome[500], turma, sexo, aprovado, naturalidade[100];
	float media;
}cadastro;

cadastro cadA[2];

void Cadastrar(){

	int i;
    printf("------------CADASTRO------------\n");
    
    for(i = 0; i < 2; i++){
    	printf("Numero da matricula: "); 
    	scanf("%d", &cadA[i].matricula);            
    	
		printf("Nome: ");  
    	scanf("%s", &cadA[i].nome);
    	
		printf("Série: ");
    	scanf("%d", &cadA[i].serie);
    	
		printf("Turma: ");
    	scanf("%s", &cadA[i].turma);
    	
		printf("Sexo |F = feminino| ou |M = masculino|: ");
    	scanf("%s", &cadA[i].sexo);
    	
		printf("Media: ");
    	scanf("%f", &cadA[i].media);
    	
		printf("Aprovado: ");
    	scanf("%s", &cadA[i].aprovado);
    	
		printf("Ano do nascimento: ");
    	scanf("%d", &cadA[i].nascimento);
    	
		printf("Naturalidade: ");
    	scanf("%s", &cadA[i].naturalidade);
	}
    
}

void Amarzenar(){
	
	int i;
	
	for (i = 0; i < 2; i++){
		
	printf("Numero da matricula |%d|", cadA[i].matricula);
	printf("Nome-----------> %s", cadA[i].nome);
	printf("Série-----------> %d", cadA[i].serie);
	printf("Turma-----------> %s", cadA[i].turma);
	printf("Sexo-----------> %s", cadA[i].sexo);
	printf("Media-----------> %.1f", cadA[i].media);
	printf("Aprovado---------> %s", cadA[i].aprovado);
	printf("Ano do nascimento-----------> %d", &cadA[i].nascimento);
	printf("Naturalidade-----------> %s", cadA[i].naturalidade);
}
	
}

void Aprovados(){

    float count_a = 0, count_r = 0;
    int i;

    for(i = 0; i < 2; i++){

        if (cadA[i].aprovado == 's'){
            
            count_a++; 

        }  else{
            count_r++;
        }
    }

    printf("Porcentagem de APROVADOS %.1f\n", (count_a / i) * 100);
   
}

void porcemFouM(){

    float count_f = 0, count_m = 0;
    int i;

    for(i = 0; i < 2; i++){

        if (cadA[i].sexo == 'f' || 'F'){
            
            count_f++; }  
            
        if (cadA[i].sexo == 'm' || 'M'){
            
            count_m++; } 
            
    printf("Porcentagem de MULHERES %.1f\n", (count_f / i) * 100);
    printf("Porcentagem de HOMENS %.1f\n", (count_m / i) * 100);

    }

    printf("Porcentagem de APROVADOS %.1f\n", (count_a / i) * 100);
   
}

void Medias(){
	
	int i;
	for(i = 0; i < 2; i++){
}
}

int main(){

    int option;

    do{
        printf("*********MENU*********\n");
        printf("[1] CADASTRAR ALUNOS\n");
        printf("[2] APRESETAR DADOS DOS ALUNOS\n");
        printf("[3] PORCENTAGEM DE ALUNOS APROVADOS E REPROVADOS\n");
        printf("[4] PORCENTAGEM DE ALUNOS DO SEXO MACULINO E FEMININO\n");
        printf("[5] MEDIA DAS IDADES\n");
        printf("[6] FINALIZAR\n");
        printf("\n*******************\n");
        printf("\nDigite a opcao desejada: ")
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            Cadastar();
            break;
        
        case 2:
            Amarzenar();
            break;
        
        case 3:
            Aprovados();
            break;
        
        case 4:
            porcemFouM();
            break;

        case 5:
            Medias();
            break;
            
        case 6:
            printf("Obrigado(a)!\n");
            break;
        
        default:
        	printf("Opcao invalida!\nTente novamente:\n");
            break;
        }
    }
	while (option < 6 && option > 0);
    
    return 0;
}

/*__________________________________________________________________________________*/

/*                --------------Questão 03-------------
Crie uma estrutura para descrever restaurantes. Os membros devem armazenar o
nome, o endereço, o preço médio e o tipo de comida. Crie uma matriz de estruturas e
escreva um programa que utilize uma função para solicitar os dados de um elemento da
matriz e outra para listar todos os dados.
*/

#include<stdio.h>
#include<string.h>

typedef struct enderecoP{
	char cep[25], estado[2], cidade[100], endereco[500];
}enderecoP;
typedef struct restaurantes{
	char nome[500], type_food[200];
	float preco_medio;
	enderecoP endp;
}restaurantes;

restaurantes rest [3][3];

void amarzenar(){
	
	int l, c;
	
	printf("\n\n------INSIRA DADOS DO RESTAURANTE------");
	printf("\nNome do restaurante: ");
	scanf("%s", &rest[l][c].nome);
	fflush(stdin);
	printf("Preco medio: ");
	scanf("%f", &rest[l][c].preco_medio);
	fflush(stdin);
	printf("Tipo de comida: ");
	scanf("%s", &rest[l][c].type_food);
	fflush(stdin);
	     printf("\n\n");
	printf("------ENDERECO------\n");
	printf("CEP: ");
	scanf("%s", &rest[l][c].endp.cep);
	fflush(stdin);
	printf("Endereco, Casa e Bairro: ");
	scanf("%s", &rest[l][c].endp.endereco);
	fflush(stdin);
	printf("Cidade: ");
	scanf("%s", &rest[l][c].endp.cidade);
	fflush(stdin);
	printf("Estado |Singlas, por exemplo: SP = São Paulo|: ");
	scanf("%s", &rest[l][c].endp.cep);
	fflush(stdin);
}

void mostrar(){
	
	int m1, m2;
	
		printf("-----DADOS DOS RESTAURANTES----");
		printf("\n\n");
		
	for(m1 = 0; m1 < 3; m1++){
		for(m2 = 0; m2 < 3; m2++){
			
			printf("Nome do Restaurante:  %s",rest[m1][m2].nome);
			printf("Endereco:  %s",rest[m1][m2].endp);
			printf("Preco medio:  %.1f",rest[m1][m2].preco_medio);
			printf("Tipo de comida:  %s",rest[m1][m2].type_food);
			
		}
	}
	
}

int main(){

    int l, c, option;

    do{
        printf("[1] INSERIR DADOS\n");
        printf("[2] MOSTRAR DADOS\n");
        printf("[3] FINALIZAR");
        printf("\n*******************\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &option);
        fflush(stdin);

        switch(option){

        case 1:
            amarzenar(l, c);

            break;

        case 2:
            mostrar();

            break;
        
       case 3:
            printf("Obrigado(a)!\n");
            break;
        
        default:
        	printf("Opcao invalida!\nTente novamente:\n");
            break;
        }
        }
       while (option < 3 && option > 3);
    
 return 0;
    }

/*__________________________________________________________________________________*/

/*                --------------Questão 04-------------
Crie uma estrutura, com o nome Dieta, para armazenar o nome de uma comida, o
peso de uma porção e o número de calorias. Escreva um programa semelhante a questão
3.
*/

#include <stdio.h>
#include<string.h>

typedef struct dieta{
	
	char nome_comida[500];
	float peso_porcao, num_calorias;
}dieta;

dieta diet[2][2];

void amarzenar(){
	
	int l, c;
	
	for(l = 0; l < 2; l++){
		for(c = 0; c < 2; c++){
	
	printf("\n\n------INSIRA DADOS DA DIETA------");
	printf("\nInforme o nome da comida: ");
	scanf("%s", &diet[l][c].nome_comida);
	fflush(stdin);
	printf("\nPeso de uma porcao: ");
	scanf("%f", &diet[l][c].peso_porcao);
	fflush(stdin);
	printf("\nNumero de calorias (em gramas): ");
	scanf("%f", &diet[l][c].num_calorias);
	fflush(stdin);
}
}

void mostrar(){
	
	int m1, m2;
	
		printf("-----DADOS DOS RESTAURANTES----");
		printf("\n\n");
		
	for(m1 = 0; m1 < 3; m1++){
		for(m2 = 0; m2 < 3; m2++){
			
			printf("Comida:  %s",diet[m1][m2].nome_comida);
			printf("Peso por porcao:  %.1f",diet[m1][m2].peso_porcao);
			printf("Numero de calorias:  %.1f",diet[m1][m2].num_calorias);
			
		}
	}
	
}

int main(){

    int l, c, option;

    do{
        printf("[1] INSERIR DADOS\n");
        printf("[2] MOSTRAR DADOS\n");
        printf("[3] FINALIZAR");
        printf("\n*******************\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &option);
        fflush(stdin);

        switch(option){

        case 1:
            amarzenar();
            break;

        case 2:
            mostrar();
            break;
        
       case 3:
            printf("Obrigado(a)!\n");
            break;
        
        default:
        	printf("Opcao invalida!\nTente novamente:\n");
            break;
        }
        }
       while (option < 3 && option > 3);
    
 return 0;
}

/*__________________________________________________________________________________*/

/*                --------------Questão 05-------------
Para o controle dos veículos que circulam em uma determinada cidade, a Secretaria
dos Transportes criou o seguinte registro padrão:
Proprietário:__________________________ Combustível:____________________
Modelo: _____________________________ Cor: __________________________
Nº chassi: _________________________ Ano: __________ Placa: ____________
Em que:
• Combustível pode ser álcool, diesel ou gasolina;
• Placa possui os três primeiros valores alfabéticos e os quatro restantes
valores numéricos.
Sabendo que o número máximo de veículos da cidade é de 5.000 unidades e que os
valores não precisam ser lidos.
a. Construa uma função que liste todos os proprietários cujos carros são do
ano de 2010 ou posterior e que sejam movidos a diesel.
b. Escreva uma função que liste todas as placas que comecem com a letra J e
terminem com 0, 2, 4 ou 7 e seus respectivos proprietários.
c. Elabore uma função que liste o modelo e a cor dos veículos cujas placas
possuem como segunda letra uma vogal e cuja soma dos valores
numéricos fornece um número par.
d. Construa uma função que permita a troca de proprietário com o
fornecimento do número do chassi apenas para carros com placas que não
possuam nenhum dígito igual a zero.
*/

#include <stdio.h>
#inlcude<string.h>
#define quant 1 //pode mudar

typedef struct veiculos{
	char proprietario[100], combustivel[25], modelo[100], cor[50] placa[10];
	int ano, num_chassi;
}veiculos;

void armazenar(){
	
	int i;
	veiculos car[quant];

	for(i = 0; i < quant; i++){
	printf("Informe o nome do proprietario: ");    //car[i]
	scanf("%s", &car[i].proprietario);
	
	printf("Informe o combustivel utilizado (alcool, diesel ou gasolina): ");
	scanf("%s", &car[i].combustivel);
	
	printf("Informe o modelo do carro: ");
    scanf("%s", &car[i].modelo);
	
	printf("Informe a cor do carro: ");
	scanf("%s", &car[i].cor);
	
	printf("Digite o numero do chassi: ");
	scanf("%d", &car[i].num_chassi);

	printf("Digite o ano do veiculo: ");
	scanf("%d", &car[i].ano);

	printf("Digite a placa do veiculo |tres letras e quatro numeros, por exemplo: ABC-0123|: ");
	gets(car[i].placa);

	}
}
	
	void quest_a(){
	
	int i;
	
	printf("\nPropietarios cujos carros são do ano de 2010 ou posterior e que sejam movidos a diesel\n");
	for(i = 0; i < quant; i++){

		if(car[i].ano >= 2010 && car[i].combustivel == "Diesel")	
		{
		printf("Nome do Proprietario: %s \n", car[i].proprietario);
		}
	printf("\n\n");	
	}
}
	
	void quest_b(){
		
	int i, soma = 0;
	
	printf("\nPlacas que comecem com a letra J e terminem com 0, 2, 4 ou 7\n ");
	for(i = 0; i < quant; i++){
		if(car[i].placa[0] == 'J' || 'j' && car[i].placa[6] == '0' || '2' || '4' || '7'){
			
		printf("\nPlaca: %s ", car[i].placa);
		
		}
	}
	printf("\n\n");
}
/*c. Elabore uma função que liste o modelo e a cor dos veículos cujas placas
possuem como segunda letra uma vogal e cuja soma dos valores
numéricos fornece um número par.*/
	void quest_c(){
		
	int i;,
	
	printff("Modelo do veiculo----> %s", car.modelo);
	printf("\nPlaca do veiculo----> %s ", car.placa);
	
	for(i = 0; i < quant; i++){
		
	}
	}
	
return 0;		
}