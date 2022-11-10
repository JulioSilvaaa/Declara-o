#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	FILE *midia;
	char texto[900] = "Obs: Se estiver em publico coloque um fone\n\nCole esse link no seu navegador:\nhttps://www.youtube.com/watch?v=wcKx6mAysk8";
	midia = fopen("Homenagem.txt", "a");
	
	if(midia == NULL)
	{
		printf("Por algum motivo não é possível continuar com a execução deste programa.\n");
		return 1;
	}
	else
	{
		fprintf(midia, "%s", texto);
		fclose(midia);
		
		printf("Foi gerado um arquivo .txt dentro da pasta.\nDedico o conteudo desse arquivo a ti.\n");
	}
	system("pause");
}
