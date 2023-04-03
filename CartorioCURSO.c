#include <stdio.h> //biblioteca de comunicaçao com o usuario
#include <stdlib.h> //biblioteca de alocaçao de espaço em memoria
#include <locale.h> //biblioteca de alocaçao de texto por região
#include <string.h> //biblioteca responsavel pelas strings
    
	int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("digite o CPF para cadastro: " );
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //responsavel por copiar os valores das strings
	
	FILE *file; //cria o arquivo 
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file,cpf); //salva o valor da variavel
	fclose(file); //fehcha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o seu nome para cadastro: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o sobrenome para cadastro: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo para cadastro> ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");	
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
}

    int consulta()

{   
    setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
{
	printf("Não foi possivel abrir o arquivo, nao localizado!. ");
}
	
    while(fgets(conteudo, 200, file) != NULL)
{
	printf("\nEssas são as informações do usuário: ");
	printf("%s", conteudo);
	printf("\n\n");
} 	

    system("pause");
}
	
    int deletar()
{
	char cpf[40];
	
	printf ("Digite o CPF para ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL);
{
	printf("O usuario nao se encontra no sistema!.\n");
	system("pause");
}

} 
    int main()
{
    int opcao=0; //definindo as variaveis
	int x=1;
	
	for(x=1;x=1;)
{
    	
	system("cls");
	 
	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	
	printf("### Cartório da EBAC ###\n\n"); //inicio do menu
	printf("Escolha a opção desejada do menu:\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n"); //final do menu
	printf("\t4 - Sair do sistema\n");
	printf("Opcao: "); //fim do menu
	
	scanf("%d", &opcao); //armazenando a escolha do usuario
	
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
		
		case 4:
		printf("Obrigado por utilizar o sistema!\n");
		return 0;
		break;
		
		default:
	    printf("Essa opcao nao esta disponivel\n");
	    system("pause");
	    break;
	
	
}
}
}
	
	
