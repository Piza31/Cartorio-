#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região 
#include <string.h> //biblioteca responsável por cuidar das strings %s

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //responsável por criar os valores das strings
	
	FILE *file; //cria o arquivo 
	file = fopen(arquivo, "w"); //cria o arquivo "w" escreve
	fprintf(file,cpf); //salvo o valor da variável
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //"a" atualiza o arquivo
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file= fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	

	
	system("pause");
	
	
	
}


int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser conultado");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Não foi possível abrir o arquivo, não localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as infirmações do usuário:");
		printf("%s", conteudo);
		printf("\n\n");
	 } 
	 
	 system("pause");
}


int deletar()
{
	printf("Você escolheu deletar nomes!\n");
    system("pause");
}



int main ()
{
	int opcao=0;//Definindo a linguagem
	int laco=1;
	
	for (laco=1;laco=1;)
	{
	
    	system("cls");
		
		setlocale(LC_ALL, "Portuguese");
	
    	printf("### Cartório EBAC ### \n\n ");//Início do menu
    	printf("Escolha a opção desejada do menu \n\n");
    	printf("\t1 - Registrar Nomes \n");
    	printf("\t2 - Consultar Nomes \n");
    	printf("\t3 - Deletar Nomes \n\n");
    	printf("Opção: ");//Fim do menu
	
        scanf("%d", &opcao); //armazenando escolha do usuário
    
        system("cls");
        
        
        switch(opcao)
        {
        	case 1:
        	registro();
        	break;
        	
        	case 2:
        	consulta();
            break;
            
            case 3:        
			deletar();
			break;
			
			default:
			printf("Essa opção não está disponível!\n");
        	system("pause");
        	break;
				
		}
    
    
	}//fim da seleção 

    } 

