#include <stdio.h>
#include <string.h>
#include <locale.h>


 int main(){
setlocale(LC_ALL, "Portuguese");
printf("In GitHub!?\n");
printf("Instruções: %s %s %s","\n1º: Digite apenas uma única letra por vez.","\n2º: Digite somente letras MAIÚSCULAS.", "\n3º: Não repita a mesma letra, pois isso acumulará um erro.\n");
printf("\nTenha um bom jogo!\n");
 	int a, b, c, d, e, i;
 	a=0;
 	b=0;
 	char p[12] = "MATHEMATICS";
 	e=strlen(p);
 	char r[e] = "___________";
 	char s[e];
 	char q[2];
 	
 	
 printf("\nQuantia de letras da palavra: %d\n", e);
strcpy(s, r);

printf("\nDigite uma letra: ");
 fgets(q, 2, stdin);
 fflush(stdin);

	
for(i=0; i<=e; i++)
{
 p[i];
 
if(q[0]==p[i])
{
s[i]=q[0];
}
}
puts(s);
	a=strcmp(s, r);
	if(a==0) b++;
	printf("Quantia de erros: %d %s\n", b, "(máx. 4)");
	
	// repetição:
	
for(c=1; c<=10; c++){
	
strcpy(r, s);

printf("\nDigite uma letra: ");
 fgets(q, 2, stdin);
 fflush(stdin);

	
for(i=0; i<=e; i++)
{
 p[i];
 
if(q[0]==p[i])
{
s[i]=q[0];
}
}
puts(s);
	a=strcmp(s, r);
	d=strcmp(s, p);
	if(a==0) b+=1;
	printf("Quantia de erros: %d %s\n", b, "(máx. 4)");
if(b==4) {
printf("\nYOU LOSE!\a"); break;}
if (d==0) {
 printf("\n YOU WIN\a!"); break;}
	
}








	

	
	


 }
