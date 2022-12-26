#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cardapioL[10];

struct lanches{
    
    char nome[30];
    float preco;
    int quantidade;
    int codigo;
    int ativade;
    float pago;
};
struct lanches lanche[10];

struct clientes{
        char nome[20];
        int ordem;
		float total;
}cliente[10], acumulo;

void inicializador(){
	
int z=0;
	
	for(z=0;z<10;z++){
		
	cardapioL[z] = -1;
	lanche[z].codigo = -1;
	lanche[z].quantidade = -1;
	lanche[z].ativade = -1;
}
}

int localizarPosicaoLanche(int cSet){
    int s=0;
    while (lanche[s].codigo != cSet && s<10){
        s++;
    }
    if (lanche[s].codigo == cSet ){
        return s; //retorna a posição do setor
    }

    return -9; //retorna -9 para indicar que o setor não foi localizado
}

void incluir(){

int a, controle=0;
char back;
int contador=0, pLivre;

do{

        system("cls");

        contador++;

	pLivre = localizarPosicaoLanche(-1);

	if(pLivre == -9){
	
	printf("Sem vagas para inclusao de lanches!!\n\n");
        back='n';
				
	}else{
		
		
  	printf("Codigo do lanche: %i\n", pLivre);

        lanche[pLivre].codigo = pLivre;
        
        
        
        printf("Lanche numero %i\n", contador);

        printf("Digite o nome do lanche: ");
        gets(lanche[pLivre].nome);
        fflush(stdin);

        printf("Digite o valor do lanche: ");
        scanf("%f", &lanche[pLivre].preco);
        fflush(stdin);

        printf("Digite a quantia: ");
        scanf("%i", &lanche[pLivre].quantidade);
        fflush(stdin);


        printf("Deseja continuar ( S/N )? \nR:");
        scanf("%c", &back);
        fflush(stdin);
        
  
	
		}//else
	

    }while(back != 'n' && back != 'N'); 


printf("Inclusoes realizada com sucesso!!\n\n");

system("pause");
}

void consultar(){


        system("cls");

		printf("---------------------\n");
		printf("=== E S T O Q U E ===\n");
		printf("---------------------\n\n");




if(lanche[0].codigo == -1){
}else{			
		printf("Lanche: ");puts(lanche[0].nome);
        printf("Codigo: %i\n", lanche[0].codigo);       
        printf("Preco: %.2f\n", lanche[0].preco);
        printf("Quantidade: %i\n\n", lanche[0].quantidade);   
}

if(lanche[1].codigo == -1){
}else{	
        printf("Lanche: ");puts(lanche[1].nome);
        printf("Codigo: %i\n", lanche[1].codigo);       
        printf("Preco: %.2f\n", lanche[1].preco);
        printf("Quantidade: %i\n\n", lanche[1].quantidade); 
}

if(lanche[2].codigo == -1){
}else{
        printf("Lanche: ");puts(lanche[2].nome);
        printf("Codigo: %i\n", lanche[2].codigo);       
        printf("Preco: %.2f\n", lanche[2].preco);
        printf("Quantidade: %i\n\n", lanche[2].quantidade); 
}

if(lanche[3].codigo == -1){
}else{
        printf("Lanche: ");puts(lanche[3].nome);
        printf("Codigo: %i\n", lanche[3].codigo);       
        printf("Preco: %.3f\n", lanche[3].preco);
        printf("Quantidade: %i\n\n", lanche[3].quantidade); 
}

if(lanche[4].codigo == -1){
}else{
        printf("Lanche: ");puts(lanche[4].nome);
        printf("Codigo: %i\n", lanche[4].codigo);       
        printf("Preco: %.4f\n", lanche[4].preco);
        printf("Quantidade: %i\n\n", lanche[4].quantidade); 
}

if(lanche[5].codigo == -1){
}else{
        printf("Lanche: ");puts(lanche[5].nome);
        printf("Codigo: %i\n", lanche[5].codigo);       
        printf("Preco: %.5f\n", lanche[5].preco);
        printf("Quantidade: %i\n\n", lanche[5].quantidade); 
}    

if(lanche[6].codigo == -1){
}else{
        printf("Lanche: ");puts(lanche[6].nome);
        printf("Codigo: %i\n", lanche[6].codigo);       
        printf("Preco: %.6f\n", lanche[6].preco);
        printf("Quantidade: %i\n\n", lanche[6].quantidade); 
 }

if(lanche[7].codigo == -1){
}else{
        printf("Lanche: ");puts(lanche[7].nome);
        printf("Codigo: %i\n", lanche[7].codigo);       
        printf("Preco: %.5f\n", lanche[7].preco);
        printf("Quantidade: %i\n\n", lanche[7].quantidade); 
}

if(lanche[8].codigo == -1){
}else{
        printf("Lanche: ");puts(lanche[8].nome);
        printf("Codigo: %i\n", lanche[8].codigo);       
        printf("Preco: %.8f\n", lanche[8].preco);
        printf("Quantidade: %i\n\n", lanche[8].quantidade); 


if(lanche[9].codigo == -1){
}else
        printf("Lanche: ");puts(lanche[9].nome);
        printf("Codigo: %i\n", lanche[9].codigo);       
        printf("Preco: %.9f\n", lanche[9].preco);
        printf("Quantidade: %i\n\n", lanche[9].quantidade); 
}


        system("pause");
}

void excluir(){

int ex;
char xe;

        system("cls");
	printf("Digite o codigo que deseja excluir\nR: ");
	scanf("%i", &ex);
	fflush(stdin);
	
	printf("----------------------------------------\n\n");
	printf("Lanche: %s\nValor: %.2f\nQuantidade: %i\n\n", lanche[ex].nome, lanche[ex].preco, lanche[ex].quantidade);
	printf("----------------------------------------\n\n");
		
	printf("Deseja Realmente deletar o lanche?( s / n )\nR: ");
	scanf("%c", &xe);
	
	if(xe == 's' && 'S'){
	system("cls");
	lanche[ex].codigo = -1;
	lanche[ex].preco = -1; // tirar
	lanche[ex].quantidade = -1;	// tirar
	printf("Lanche deletado com sucesso !!!!\n");
} else {
	
	printf("Lanche nao deletado !!\n");
}
	
	
system("pause");	
}

void alterar(){

int b;
char voltar;
        system("cls");

    	printf("----------------------------\n");
		printf("== A L T E R A R  I T E M ==\n");
		printf("----------------------------\n\n");
			
		printf("Informe o codigo do lanche que deseja alterar\n");
		printf("R: ");
		scanf("%i", &b); 
	

		printf("Lanche: ");puts(lanche[b].nome);
		printf("Codigo: %i\n", lanche[b].codigo);
		printf("Preco: %.2f\n", lanche[b].preco);
		printf("Quantidade: %i\n", lanche[b].quantidade);
		
        printf("Digite um novo preco: ");
        scanf("%f", &lanche[b].preco);

        printf("Digite uma nova quantidade: ");
        scanf("%i", &lanche[b].quantidade);

        printf("Alteracao concluida!!\n\n");


        system("pause");

}

void cadastroItem(){

int cadastroitem;

    
do{
    
    system("cls");
    printf("------------------\n");
    printf("C A D A S T R A R\n");
    printf("    I T E N S    \n");
    printf("------------------\n");
    printf("1 - Incluir\n");
    printf("2 - Consultar\n");
    printf("3 - alterar\n");
    printf("4 - Deletar\n");
    printf("5 - Sair\n");
    printf("R: ");
    scanf("%i", &cadastroitem);
    fflush(stdin);

    switch(cadastroitem){

    case 1: incluir();   break;
    case 2: consultar(); break;		
    case 3: alterar();   break;  
    case 4: excluir();   break;
    default: printf("Opcao Invalida, tente novamente !");

}

    }while(cadastroitem != 5);
}

void incluirCard(){
	
char repeti;
int x=0;


do{
system("cls");



printf("Digite o CODIGO dos lanches que vai para o cardapio\n\n");

if(lanche[0].codigo != -1){	
printf("1-Lanche:%s\n", lanche[0].nome);  
printf("|-Codigo:%i \n", lanche[0].codigo);
printf("|Preco:%.2f \n", lanche[0].preco);
printf("|Quantidade:%i \n\n", lanche[0].quantidade );
}

if(lanche[1].codigo != -1){
printf("2-Lanche:%s\n", lanche[1].nome);  
printf("|-Codigo:%i \n", lanche[1].codigo);
printf("|-Preco:%.2f \n", lanche[1].preco);
printf("|-Quantidade:%i \n\n", lanche[1].quantidade );
}

if(lanche[2].codigo != -1){
printf("3-Lanche:%s\n", lanche[2].nome);  
printf("|-Codigo:%i \n", lanche[2].codigo);
printf("|-Preco:%.2f \n", lanche[2].preco);
printf("|-Quantidade:%i \n\n", lanche[2].quantidade );
}

if(lanche[3].codigo != -1){
printf("4-Lanche:%s\n", lanche[3].nome);  
printf("|-Codigo:%i \n", lanche[3].codigo);
printf("|-Preco:%.2f \n", lanche[3].preco);
printf("|-Quantidade:%i \n\n", lanche[3].quantidade );
}

if(lanche[4].codigo != -1){
printf("5-Lanche:%s\n", lanche[4].nome);  
printf("|-Codigo:%i \n", lanche[4].codigo);
printf("|-Preco:%.2f \n", lanche[4].preco);
printf("|-Quantidade:%i \n\n", lanche[4].quantidade );
}

if(lanche[5].codigo != -1){
printf("6-Lanche:%s\n", lanche[5].nome);  
printf("|-Codigo:%i \n", lanche[5].codigo);
printf("|-Preco:%.2f \n", lanche[5].preco);
printf("|-Quantidade:%i \n\n", lanche[5].quantidade );
}

if(lanche[6].codigo!= -1){
printf("7-Lanche:%s\n", lanche[6].nome);  
printf("|-Codigo:%i \n", lanche[6].codigo);
printf("|-Preco:%.2f \n", lanche[6].preco);
printf("|-Quantidade:%i \n\n", lanche[6].quantidade );
}

if(lanche[7].codigo != -1){
printf("8-Lanche:%s\n", lanche[7].nome);  
printf("|-Codigo:%i \n", lanche[7].codigo);
printf("|-Preco:%.2f \n", lanche[7].preco);
printf("|-Quantidade:%i \n\n", lanche[7].quantidade );
}

if(lanche[8].codigo != -1){
printf("9-Lanche:%s\n", lanche[8].nome);  
printf("|-Codigo:%i \n", lanche[8].codigo);
printf("|-Preco:%.2f \n", lanche[8].preco);
printf("|-Quantidade:%i \n\n", lanche[8].quantidade );
}

if(lanche[9].codigo != -1){
printf("9-Lanche:%s\n", lanche[9].nome);  
printf("|-Codigo:%i \n", lanche[9].codigo);
printf("|-Preco:%.2f \n", lanche[9].preco);
printf("|-Quantidade:%i \n\n", lanche[9].quantidade );
}

printf("Digite o codigo do lanche\n");
printf("R: ");	
scanf("%i", &x);
cardapioL[x] = x;
fflush(stdin);

printf("Deseja continuar ? ( s / n )\n");
scanf("%c", &repeti);


}while(repeti != 'n');

}

void consultarCard(){

int a=0;

system("cls");

printf("_____________\n");
printf("L A N C H E S\n\n");


if(cardapioL[0] == 0){

printf("|-Lanche:%s\n", lanche[0].nome);  
printf("|-Codigo:%i \n", lanche[0].codigo);
printf("|Preco:%.2f \n", lanche[0].preco);
printf("|Quantidade:%i \n\n", lanche[0].quantidade );	
}


if(cardapioL[1] == 1){
printf("|-Lanche:%s\n", lanche[1].nome);  
printf("|-Codigo:%i \n", lanche[1].codigo);
printf("|-Preco:%.2f \n", lanche[1].preco);
printf("|-Quantidade:%i \n\n", lanche[1].quantidade );
}


if(cardapioL[2] == 2){
printf("|-Lanche:%s\n", lanche[2].nome);  
printf("|-Codigo:%i \n", lanche[2].codigo);
printf("|-Preco:%.2f \n", lanche[2].preco);
printf("|-Quantidade:%i \n\n", lanche[2].quantidade );
}

if(cardapioL[3] == 3){
printf("|-Lanche:%s\n", lanche[3].nome);  
printf("|-Codigo:%i \n", lanche[3].codigo);
printf("|-Preco:%.2f \n", lanche[3].preco);
printf("|-Quantidade:%i \n\n", lanche[3].quantidade );
}

if(cardapioL[4] == 4){
printf("|-Lanche:%s\n", lanche[4].nome);  
printf("|-Codigo:%i \n", lanche[4].codigo);
printf("|-Preco:%.2f \n", lanche[4].preco);
printf("|-Quantidade:%i \n\n", lanche[4].quantidade );
}

if(cardapioL[5] == 5){
printf("6-Lanche:%s\n", lanche[5].nome);  
printf("|-Codigo:%i \n", lanche[5].codigo);
printf("|-Preco:%.2f \n", lanche[5].preco);
printf("|-Quantidade:%i \n\n", lanche[5].quantidade );
}

if(cardapioL[6] == 6){
printf("|-Lanche:%s\n", lanche[6].nome);  
printf("|-Codigo:%i \n", lanche[6].codigo);
printf("|-Preco:%.2f \n", lanche[6].preco);
printf("|-Quantidade:%i \n\n", lanche[6].quantidade );
}

if(cardapioL[7] == 7){
printf("|-Lanche:%s\n", lanche[7].nome);  
printf("|-Codigo:%i \n", lanche[7].codigo);
printf("|-Preco:%.2f \n", lanche[7].preco);
}

if(cardapioL[8] == 8){
printf("|-Lanche:%s\n", lanche[8].nome);  
printf("|-Codigo:%i \n", lanche[8].codigo);
printf("|-Preco:%.2f \n", lanche[8].preco);
printf("|-Quantidade:%i \n\n", lanche[8].quantidade );
}

if(cardapioL[9] == 9){
printf("|Lanche:%s\n", lanche[9].nome);  
printf("|-Codigo:%i \n", lanche[9].codigo);
printf("|-Preco:%.2f \n", lanche[9].preco);
printf("|-Quantidade:%i \n\n", lanche[9].quantidade );
}


system("pause");	
}

void alterarCard(){

int cod;

system("cls");

printf("_____________\n");
printf("A l t e r a r\n\n");

printf("Digite o codigo do lanche\n");
printf("R: ");
scanf("%i", &cod);
fflush(stdin);

printf("Lanche: %s\n", lanche[cod].nome);
printf("Codigo: %i\n", cod);
printf("Preco: %.2f\n", lanche[cod].preco);
printf("Quantidade: %i\n", lanche[cod].quantidade);

printf("Digite um novo preco: ");
scanf("%f", &lanche[cod].preco);
printf("Digite uma nova quantidade: ");
scanf("%i", &lanche[cod].quantidade);

printf("Valor e Quantia atualizado com sucesso!!\n");
printf("Preco: %.2f\n", lanche[cod].preco);
printf("Quantidade: %i\n", lanche[cod].quantidade);


system("Pause");
}

void delCard(){
        
        int j;

        system("cls");
        printf("---------------\n");
        printf(" D E L E T A R \n");
        printf("C A R D A P I O\n");
        printf("---------------\n\n");

        printf("Digite o codigo do lanche que deseja deletar\nR: ");
        scanf("%i", &j);
        cardapioL[j];

        printf("Lanche: %s\nCodigo: %i\nPreco: %.2f\nQuantidade: %i\n", lanche[j].nome, lanche[j].codigo, lanche[j].preco, lanche[j].quantidade);

        printf("Lanche deletado do cardapio com sucesso !!!!!");

        cardapioL[j]=-1;
        system("pause");
}

void cadastroCard(){

int cadastrocard;
   

do{

    system("cls");
    
printf("----------------\n");
printf("C A D S T R A R\n\n");
printf("C A R D A P I O\n");
printf("----------------\n\n");

    printf("1 - Incluir\n");
    printf("2 - Consultar\n");
    printf("3 - Alterar\n");
    printf("4 - Deletar\n");
    printf("5 - Sair\n");
    printf("R: ");
    scanf("%i", &cadastrocard);
    
    switch(cadastrocard){
    	
    	case 1: incluirCard(); break;
    	case 2: consultarCard(); break;
        case 3: alterarCard(); break;
    	case 4: delCard(); break;
	}

}while(cadastrocard != 5);
}

void adm(){

int cadastro;

do{
    system("cls");
    printf("--------------------\n");
    printf("   ADMINISTRATIVO   \n");
    printf("--------------------\n\n");
    printf("1 - Cadastrar lanche\n");
    printf("2 - Cadastrar cardapio\n");
    printf("3 - Sair\n");
    printf("R: ");
    scanf("%i", &cadastro);
    fflush(stdin);

    switch(cadastro){

    case 1: cadastroItem(); break;

    case 2: cadastroCard(); break;

    

    system("Pause");

}// switch

}while(cadastro < 3);

}

void cAtendimento(){

printf("---------------------\n");
printf("A T E N D I M E N T O\n");
printf("---------------------\n\n");


int a, c=0, d, h=1, p=1, k=0;
int exit, diminuir;
float total;
char b, j;



total=0;

for(a=0; a<10; a++){
system("cls");



printf("Cliente N.%i\n", h);
printf("Ordem: %i\n\n", c);
cliente[c].ordem = c;
fflush(stdin);


printf("Digite o nome do cliente\n");
printf("Nome: ");
gets(cliente[a].nome);
fflush(stdin);

do{


printf("Digite o CODIGO do lanche que o cliente deseja\n");
printf("R: ");
scanf("%i", &d);
fflush(stdin);

if(lanche[d].quantidade == -1){
	system("cls");
	printf("Codigo invalido tente novamente\n");
	system("pause");
}

if(lanche[d].quantidade == 0){
	system("cls");
	printf("Lanche em falta!\n\n");
	b = 'n';
	a = 10;
	exit = 1;

	system("pause");
}else{

if(lanche[d].quantidade != -1){
system("cls");
printf("Pedido:%i\n", p);
printf("Ordem: N.%i\n\n", c);

printf("|-Lanche:%s\n", lanche[d].nome);  
printf("|-Codigo: %i \n", lanche[d].codigo);
printf("|-Preco:%.2f \n", lanche[d].preco);
printf("|-Quantidade:%i \n\n", lanche[d].quantidade );
}

if(lanche[d].quantidade!= 0 && lanche[d].preco != 0){


acumulo.total = acumulo.total + lanche[d].preco;
total = total + lanche[d].preco;
printf("Total: %.2f\n\n", total);

}
lanche[d].quantidade--;	
p++;

//-----------------------------------------------------
printf("Deseja continuar ? ( s / n ) \n");
printf("R: ");
scanf("%c", &b);
fflush(stdin);
h++;

}
}while(b !='n');
c++;

system("cls");
printf("Digite 1 para sair do atendimento ou 0 para continuar !!\nR: ");
scanf("%i", &exit);

if(exit == 1){
	a=10;
}

} // FOR


printf("Pedido(s) Realizado com sucesso !!!!");
}

void cardAtendimento(){

printf("---------------\n");
printf("C A R D A P I O\n");
printf("---------------\n\n");
system("cls");
if(cardapioL[0] == 0){
printf("1-Lanche:%s\n", lanche[0].nome);  
printf("|-Codigo:%i \n", lanche[0].codigo);
printf("|Preco:%.2f \n", lanche[0].preco);
printf("|Quantidade:%i \n\n", lanche[0].quantidade );
}


if(cardapioL[1] == 1){
printf("2-Lanche:%s\n", lanche[1].nome);  
printf("|-Codigo:%i \n", lanche[1].codigo);
printf("|-Preco:%.2f \n", lanche[1].preco);
printf("|-Quantidade:%i \n\n", lanche[1].quantidade );
}

if(cardapioL[2] == 2){
printf("3-Lanche:%s\n", lanche[2].nome);  
printf("|-Codigo:%i \n", lanche[2].codigo);
printf("|-Preco:%.2f \n", lanche[2].preco);
printf("|-Quantidade:%i \n\n", lanche[2].quantidade );
}

if(cardapioL[3] == 3){
printf("4-Lanche:%s\n", lanche[3].nome);  
printf("|-Codigo:%i \n", lanche[3].codigo);
printf("|-Preco:%.2f \n", lanche[3].preco);
printf("|-Quantidade:%i \n\n", lanche[3].quantidade );
}

if(cardapioL[4] == 4){
printf("5-Lanche:%s\n", lanche[4].nome);  
printf("|-Codigo:%i \n", lanche[4].codigo);
printf("|-Preco:%.2f \n", lanche[4].preco);
printf("|-Quantidade:%i \n\n", lanche[4].quantidade );
}

if(cardapioL[5] == 5){
printf("6-Lanche:%s\n", lanche[5].nome);  
printf("|-Codigo:%i \n", lanche[5].codigo);
printf("|-Preco:%.2f \n", lanche[5].preco);
printf("|-Quantidade:%i \n\n", lanche[5].quantidade );
}

if(cardapioL[6] == 6){
printf("7-Lanche:%s\n", lanche[6].nome);  
printf("|-Codigo:%i \n", lanche[6].codigo);
printf("|-Preco:%.2f \n", lanche[6].preco);
printf("|-Quantidade:%i \n\n", lanche[6].quantidade );
}

if(cardapioL[7] == 7){
printf("8-Lanche:%s\n", lanche[7].nome);  
printf("|-Codigo:%i \n", lanche[7].codigo);
printf("|-Preco:%.2f \n", lanche[7].preco);
}

if(cardapioL[8] == 8){
printf("9-Lanche:%s\n", lanche[8].nome);  
printf("|-Codigo:%i \n", lanche[8].codigo);
printf("|-Preco:%.2f \n", lanche[8].preco);
printf("|-Quantidade:%i \n\n", lanche[8].quantidade );
}

if(cardapioL[9] == 9){
printf("10Lanche:%s\n", lanche[9].nome);  
printf("|-Codigo:%i \n", lanche[9].codigo);
printf("|-Preco:%.2f \n", lanche[9].preco);
printf("|-Quantidade:%i \n\n", lanche[9].quantidade );
}

system("Pause");
}

void atendimento(){

int atd;

do{

system("cls");
printf("---------------------\n");
printf("A T E N D I M E N T O\n");
printf("---------------------\n\n");

printf("1 - Cardapio\n");
printf("2 - Atendimento\n");
printf("3 - Sair\n\n");
scanf("%i", &atd);

switch(atd){

        case 1: cardAtendimento(); break;
        case 2: cAtendimento(); break;
        

}
}while(atd != 3);
}

void relatorio(){

float totalpago;
int x;
system("cls");
printf("_________________\n");
printf("R E L A T O R I O\n\n");

	
totalpago = totalpago + acumulo.total;																					

printf("Valor total acumulado: %.2f\n\n", totalpago);


if(lanche[0].quantidade == 0 ){
	printf("Lanche: %s, em falta por favor alterar, remover ou repor o estoque !!!\n", lanche[0].nome);
}
if(lanche[1].quantidade == 0 ){
	printf("Lanche: %s, em falta por favor alterar, remover ou repor o estoque !!!\n", lanche[2].nome);
}
if(lanche[2].quantidade == 0 ){
	printf("Lanche: %s, em falta por favor alterar, remover ou repor o estoque !!!\n", lanche[3].nome);
}
if(lanche[3].quantidade == 0 ){
	printf("Lanche: %s, em falta por favor alterar, remover ou repor o estoque !!!\n", lanche[4].nome);
}
if(lanche[4].quantidade == 0 ){
	printf("Lanche: %s, em falta por favor alterar, remover ou repor o estoque !!!\n", lanche[5].nome);
}
if(lanche[5].quantidade == 0 ){
	printf("Lanche: %s, em falta por favor alterar, remover ou repor o estoque !!!\n", lanche[6].nome);
}
if(lanche[6].quantidade == 0 ){
	printf("Lanche: %s, em falta por favor alterar, remover ou repor o estoque !!!\n", lanche[7].nome);
}
if(lanche[7].quantidade == 0 ){
	printf("Lanche: %s, em falta por favor alterar, remover ou repor o estoque !!!\n", lanche[8].nome);
}
if(lanche[8].quantidade == 0 ){
	printf("Lanche: %s, em falta por favor alterar, remover ou repor o estoque !!!\n", lanche[9].nome);
}
if(lanche[9].quantidade == 0 ){
	printf("Lanche: %s, em falta por favor alterar, remover ou repor o estoque !!!\n", lanche[0].nome);
}

system("pause");

}

void members(){

        printf("-------------------------\n");
        printf("       A L U N O S       \n");
        printf("P A R T I C I P A N T E S\n\n");

        printf("     Andre Guilherme       \n");
        printf("     Arhur Cerqueira       \n");
        printf("    Gustavo Sacramento     \n");
        printf("     Vinicius Menezes    \n\n");

        printf("-------------------------\n");
}

void loginAdm(){

char login[10];
char password[10];

system("cls");


printf("Painel Login ADM v1.0\n\n");
printf("Login: ");
scanf("%s", &login);

printf("Senha: ");
scanf("%s", &password);

if(strcmp(login,"admin")==0){
	if(strcmp(password, "admin123")==0){
		adm();
	}
}
	
}

void loginRelatorio(){
	
char loginz[10];
char passwordz[10];

system("cls");


printf("Painel Login ADM v1.0\n\n");
printf("Login: ");
scanf("%s", &loginz);

printf("Senha: ");
scanf("%s", &passwordz);

if(strcmp(loginz,"admin")==0){
	if(strcmp(passwordz, "admin123")==0){
		relatorio();
	}
}	

}

void menu(){

int menu;
do{
system("cls");
printf("-----------------\n");
printf("     M E N U     \n");
printf("-----------------\n\n");
printf("1 - Administrativo\n");
printf("2 - Atendimentio\n");
printf("3 - Relatorio\n");
printf("4 - Sair\n");
printf("R: ");
scanf("%i", &menu);
fflush(stdin);
switch (menu){

case 1: loginAdm(); break;
case 2: atendimento(); break;
case 3: loginRelatorio(); break;
case 4: members(); break;
default: printf("Opcao Invalida!!\n");

}
}while(menu != 4);

}

int main(){
system("cls");
	
inicializador();

menu();

    return 0;

}
