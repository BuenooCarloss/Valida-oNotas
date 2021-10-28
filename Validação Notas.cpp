#include <stdio.h>

int main(){
	
	
	float nota1, nota2, media, exame, media_final;
	int aluno, alunos_aprovados, alunos_reprovados, exame_aprovados, exame_reprovados;
	aluno= 10;
	alunos_aprovados= 0;
	alunos_reprovados = 0;
	exame_aprovados= 0;
	exame_reprovados= 0;
	
	while (aluno != 0){
	
	printf("digite a nota 1: ");
	scanf("%f", &nota1);
	if (!( nota1 >=0 && nota1 <=10)){
		
		printf("ERRO,");
		continue;
	}
	printf("digite nota 2: ");
	scanf("%f", &nota2);
	if(!(nota2 >=0 && nota2 <=10)){
		
		printf("ERRO,");
		continue;
	
	}
	media = (nota1 + nota2)/2;
	if (media >=7){
		printf("Aluno %d APROVADO %.2f\n",aluno, media);
		alunos_aprovados++;
	}
	else if(media < 4){
		
		printf("Aluno %d REPROVADO %.2f\n ",aluno, media);
		alunos_reprovados++;
	}
	if (media <= 6.9 && media >=4){
		
		printf("Digite a nota do exame: ");
		scanf("%f", &exame);
		if(exame >=0 && exame <=10){
			media_final= (media + exame)/2;
		
			if (media_final >= 5){
				printf("Aluno %d aprovado por exame %.2f\n",aluno, media_final);
				exame_aprovados++;
			}	
			else{
				printf("Aluno %d reprovado por exame %.2f\n",aluno, media_final);
				exame_reprovados++;
			}	
		}
		else{
			
			printf("digite uma nota valida\n");
			continue;
		}
		}
	aluno-=1;
	
	}

	printf("%d Alunos foram APROVADOS\n", alunos_aprovados);
	
	printf("%d Alunos foram REPROVADOS\n", alunos_reprovados);

	printf("%d Alunos foram Aprovados por exame\n", exame_aprovados);

	printf("%d Alunos foram reprovados por exame\n", exame_reprovados);

	}
	
