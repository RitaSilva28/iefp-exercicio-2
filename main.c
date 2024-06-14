#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{

    
    // -------------------------------------------Exercicio 1------------------------------------------------//


    //Faça um Programa que peça dois números e imprima o maior deles.

    int n1;
    int n2;

    printf("Por favor indique o primeiro número: \n");
    scanf("%i",&n1);
    printf("Por favor indique o segundo número: \n");
    scanf("%i",&n2);

    if(n1>n2){
        printf("O número maior é: %i", n1);
    }else if(n1<n2){
        printf("O número maior é: %i",n2);
    };

    // -------------------------------------------Exercicio 2------------------------------------------------//

   // Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

    int n1;

    printf("Por favor indique um número: \n");
    scanf("%i", &n1);

    if (n1 > 0)
    {
        printf("O número é positivo");
    }
    else if (n1 < 0)
    {
        printf("O número é negativo");
    };

     // -------------------------------------------Exercicio 3------------------------------------------------//

   // Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.

    char genero;

    printf("Por indique se o seu género é M (Masculino) ou F (Feminino)? \n");
    scanf(" %c", &genero);

    if(genero=='F'){
        printf("O sexo é Feminino");
    } else if(genero=='M'){
        printf("O sexo é Masculino");
    }else{
        printf("Sexo inválido");
    }

  -------------------------------------------Exercicio 4------------------------------------------------//

   // Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

        char letra;

        printf("Por favor digite uma letra:\n");
        scanf("%c", &letra);

     letra=toupper(letra);

        switch (letra)
        {
        case 'A':
            printf("'%c' é uma vogal", letra);
            break;

        case 'E':
            printf("'%c' é uma vogal", letra);
            break;
        case 'I':
            printf("'%c' é uma vogal", letra);
            break;
        case 'O':
            printf("'%c' é uma vogal", letra);
            break;
        case 'U':
            printf("'%c' é uma vogal", letra);
            break;

        default:
        printf("'%c' não é uma vogal é uma consoante.\n", letra);
            break;
        }

   -------------------------------------------Exercicio 5------------------------------------------------//

    // Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar:
    // A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
    // A mensagem "Reprovado", se a média for menor do que sete;
    // A mensagem "Aprovado com Distinção", se a média for igual a dez.

    int nota1, nota2, media;

      printf("Por favor introduza a primeira nota:\n");
    scanf("%i", &nota1);
    printf("Por favor introduza a segunda nota:\n");
    scanf("%i", &nota2);

     media = (nota1 + nota2) / 2;
     printf(" A média é:%i \n", media);

     if(media==10){
      printf("O aluno foi APROVADO com DISTINÇÃO");
    }else if(media>=7){
       printf("O aluno foi APROVADO");
    }else if(media<7){
         printf("O aluno foi REPROVADO");
           };

//    -------------------------------------------Exercicio 6------------------------------------------------//

//     Faça um Programa que leia três números e mostre o maior deles.

    int n1, n2, n3;

    printf("Por favor introduza 3 números:\n");
    printf("1º número:");
    scanf("%i", &n1);
    printf("2º número:");
    scanf("%i", &n2);
    printf("3º número:");
    scanf("%i", &n3);

    if(n1>n2 && n1>n3){
        printf("O 1º número é o maior: %i", n1);
    }else if(n2>n1 && n2>n3){
         printf("O 2º número é o maior: %i", n2);
    }else{
        printf("O 3º número é o maior: %i", n3);
    };

//  -------------------------------------------Exercicio 7------------------------------------------------//

//     Faça um Programa que leia três números e mostre o maior e o menor deles.

    int n1, n2, n3;

    printf("Por favor introduza 3 números:\n");
    printf("1º número:");
    scanf("%i", &n1);
    printf("2º número:");
    scanf("%i", &n2);
    printf("3º número:");
    scanf("%i", &n3);

     if(n1>n2 && n1>n3 && n2<n3){
         printf("O 1º número (%i) é o maior e o 2º número(%i) é o menor", n1, n2);
        }else if(n2>n1 && n2>n3 && n3<n1){
           printf("O 2º número (%i) é o maior e o 3º número(%i) é o menor", n2, n3);
        }else if(n3>n1 && n3>n2 && n1<n2){
          printf("O 3º número (%i) é o maior e o 1º número(%i) é o menor", n3,n1);
        }else{
            printf("Os números não podem ser iguais. Por favor repita com números diferentes");
        }

    //  -------------------------------------------Exercicio 8------------------------------------------------//

    // Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.

    int preco_1, preco_2, preco_3;

    printf("Por favor introduza os 3 preços:\n");
    printf("1º preço:");
    scanf("%i", &preco_1);
    printf("2º preço:");
    scanf("%i", &preco_2);
    printf("3º preço:");
    scanf("%i", &preco_3);

     if(preco_1<preco_2 && preco_1<preco_3){
     printf("Deve comprar o 1º artigo (%i) que é o mais barato", preco_1);
      }else if(preco_2<preco_1 && preco_2<preco_3  ){
       printf("Deve comprar o 2º artigo (%i) que é o mais barato", preco_2);
      }else{
       printf("Deve comprar o 3º artigo (%i) que é o mais barato", preco_3);
     }

    //  -------------------------------------------Exercicio 9------------------------------------------------//

    // Faça um Programa que leia três números e mostre-os em ordem decrescente.

    int n1, n2, n3;

    printf("Por favor introduza 3 números:\n");
    printf("1º número:");
    scanf("%i", &n1);
    printf("2º número:");
    scanf("%i", &n2);
    printf("3º número:");
    scanf("%i", &n3);

    if (n1 > n2 && n1 > n3)
    {

        if (n2 > n3)
        {
            printf("%i,%i,%i", n1, n2, n3);
        }
        else if (n3 > n2)
        {
            printf("%i,%i,%i", n1, n3, n2);
        }
    }
    else if (n2 > n1 && n2 > n3)
    {
        if (n1 > n3)
        {
            printf("%i,%i,%i", n2, n1, n3);
        }
        else if (n3 > n1)
        {
            printf("%i,%i,%i", n2, n3, n1);
        }
    }
    else if (n3 > n1 && n3 > n2)
    {
        if (n1 > n2)
        {
            printf("%i,%i,%i", n3, n1, n2);
        }
        else if (n2 > n1)
        {
            printf("%i,%i,%i", n3, n2, n1);
        }
    }

    //  -------------------------------------------Exercicio 10------------------------------------------------//

    // Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.

       char turno;
    
    printf("Por favor indique o turno em que estuda: M-Manhã, T-Tarde ou N-Noturno \n");
    scanf("%c", &turno );
    
    turno=toupper(turno);
    
       switch (turno)
          {
           case 'M':
               printf("Bom dia!\n", turno);
               break;
    
          case 'T':
              printf("Boa tarde!\n", turno);
               break;
           case 'N':
              printf("Boa noite!\n", turno);
               break;
    
           default:
                  printf("Valor Inválido!\n");
           }

//   -------------------------------------------Exercicio 11------------------------------------------------//

//     As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contraram para desenvolver o programa que calculará os reajustes. Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
//      salários até R$ 280,00 (incluindo) : aumento de 20%
//      salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
//      salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
//      salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
//      o salário antes do reajuste;
//      o percentual de aumento aplicado;
//      o valor do aumento;
//      o novo salário, após o aumento.

    float salario, percentagem, valor_Aumento, salario_Actualizado;

    printf("Por favor insira o salário \n");
    scanf("%f", &salario);

    if(salario <= 280){
        percentagem=0.20;
        valor_Aumento= salario* percentagem;
        salario_Actualizado=salario+valor_Aumento;

        printf("O seu salário atual são: %.2f€\n", salario);
        printf("A percentagem a aplicar ao seu sálario é: 20%%\n");
        printf("O valor do seu aumento são: %.2f€\n", valor_Aumento);
        printf("O seu salário atualizado são: %.2f€\n", salario_Actualizado);

    } else if(salario > 280 && salario<=700){
        percentagem=0.15;
        valor_Aumento= salario* percentagem;
        salario_Actualizado=salario+valor_Aumento;

        printf("O seu salário atual são: %.2f€\n", salario);
        printf("A percentagem a aplicar ao seu sálario é: 15%%\n");
        printf("O valor do seu aumento são: %.2f€\n", valor_Aumento);
        printf("O seu salário atualizado são: %.2f€\n", salario_Actualizado);

    }else if(salario > 700 && salario<=1500){
        percentagem=0.10;
        valor_Aumento= salario* percentagem;
        salario_Actualizado=salario+valor_Aumento;

        printf("O seu salário atual são: %.2f€\n", salario);
        printf("A percentagem a aplicar ao seu sálario é: 10%%\n");
        printf("O valor do seu aumento são: %.2f€\n", valor_Aumento);
        printf("O seu salário atualizado são: %.2f€\n", salario_Actualizado);

    }else{
        percentagem=0.05;
        valor_Aumento= salario* percentagem;
        salario_Actualizado=salario+valor_Aumento;

        printf("O seu salário atual são: %.2f€\n", salario);
        printf("A percentagem a aplicar ao seu sálario é: 5%%\n");
        printf("O valor do seu aumento são: %.2f€\n", valor_Aumento);
        printf("O seu salário atualizado são: %.2f€\n", salario_Actualizado);

    }

//   -------------------------------------------Exercicio 12------------------------------------------------//

//     Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do Imposto de Renda, que depende do salário bruto (conforme tabela abaixo) e 3% para o Sindicato e que o FGTS corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita). O Salário Líquido corresponde ao Salário Bruto menos os descontos. O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.
//      Desconto do IR:
//      Salário Bruto até 900 (inclusive) - isento
//     Salário Bruto até 1500 (inclusive) - desconto de 5%
//     Salário Bruto até 2500 (inclusive) - desconto de 10%
//     Salário Bruto acima de 2500 - desconto de 20%

//     Imprima na tela as informações, dispostas conforme o exemplo abaixo. No exemplo o valor da hora é 5 e a quantidade de hora é 220.

    float valor_Hora, horas_Trabalhadas, salario_Bruto, desconto_IR, desconto_Fgts, desconto_Sindicato, salario_Liquido, total_Descontos;

    printf("Por favor indique qual é o valor da sua hora de trabalho:\n");
    scanf("%f", &valor_Hora);
    printf("Por favor indique quantas horas trabalhou no mês:\n");
    scanf("%f", &horas_Trabalhadas);

    salario_Bruto=valor_Hora*horas_Trabalhadas;
    desconto_Sindicato=salario_Bruto*0.03;
    desconto_Fgts=salario_Bruto*0.11;

    if(salario_Bruto<=900){

    desconto_IR=0;

    salario_Liquido=salario_Bruto-desconto_IR-desconto_Sindicato;
    total_Descontos= desconto_Sindicato+desconto_IR;
    salario_Liquido=salario_Bruto-total_Descontos;

    printf("Salário Bruto (%.2f * %.2f): %.2f€\n", horas_Trabalhadas, valor_Hora, salario_Bruto);
    printf("(-) Imposto Renda (isento): 0€\n");
    printf("(-) Desconto Sindicato (3%%): %.2f€\n",desconto_Sindicato);
    printf("FGTS (11%%): %.2f€\n",desconto_Fgts);
    printf("Total de descontos: %.2f€\n",total_Descontos);
    printf("Salário a receber: %.2f€", salario_Liquido);

    }else if(salario_Bruto>900 && salario_Bruto<=1500){

    desconto_IR=salario_Bruto*0.05;

    salario_Liquido=salario_Bruto-desconto_IR-desconto_Sindicato;
    total_Descontos= desconto_Sindicato+desconto_IR;
    salario_Liquido=salario_Bruto-total_Descontos;

    printf("Salário Bruto (%.2f * %.2f): %.2f€\n", horas_Trabalhadas, valor_Hora, salario_Bruto);
    printf("(-) Imposto Renda (5%%): %.2f€\n", desconto_IR);
    printf("(-) Desconto Sindicato (3%%): %.2f€\n",desconto_Sindicato);
    printf("FGTS (11%%): %.2f€\n",desconto_Fgts);
    printf("Total de descontos: %.2f€\n",total_Descontos);
    printf("Salário a receber: %.2f€", salario_Liquido);

    }else if(salario_Bruto>1500 && salario_Bruto<=2500){

    desconto_IR=salario_Bruto*0.10;

    salario_Liquido=salario_Bruto-desconto_IR-desconto_Sindicato;
    total_Descontos= desconto_Sindicato+desconto_IR;
    salario_Liquido=salario_Bruto-total_Descontos;

    printf("Salário Bruto (%.2f * %.2f): %.2f€\n", horas_Trabalhadas, valor_Hora, salario_Bruto);
    printf("(-) Imposto Renda (10%%): %.2f€\n", desconto_IR);
    printf("(-) Desconto Sindicato (3%%): %.2f€\n",desconto_Sindicato);
    printf("FGTS (11%%): %.2f€\n",desconto_Fgts);
    printf("Total de descontos: %.2f€\n",total_Descontos);
    printf("Salário a receber: %.2f€", salario_Liquido);

    }else{

    desconto_IR=salario_Bruto*0.20;

    salario_Liquido=salario_Bruto-desconto_IR-desconto_Sindicato;
    total_Descontos= desconto_Sindicato+desconto_IR;
    salario_Liquido=salario_Bruto-total_Descontos;

    printf("Salário Bruto (%.2f * %.2f): %.2f€\n", horas_Trabalhadas, valor_Hora, salario_Bruto);
    printf("(-) Imposto Renda (20%%): %.2f€\n", desconto_IR);
    printf("(-) Desconto Sindicato (3%%): %.2f€\n",desconto_Sindicato);
    printf("FGTS (11%%): %.2f€\n",desconto_Fgts);
    printf("Total de descontos: %.2f€\n",total_Descontos);
    printf("Salário a receber: %.2f€", salario_Liquido);

    }

    // -------------------------------------------Exercicio 13 ------------------------------------------------//


    // Faça um Programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.

    int num;

    printf("Por favor insira um número de 1 a 6 para gerar uma correspondência com um dia de semana:\n");
    scanf("%i", &num);

    switch (num)
    {
    case 1:
        printf("Domingo\n");
        break;
        case 2:
        printf("Segunda\n");
        break;
        case 3:
        printf("Terça\n");
        break;
        case 4:
        printf("Quarta\n");
        break;
        case 5:
        printf("Quinta\n");
        break;
        case 6:
        printf("Sexta\n");
        break;
        case 7:
        printf("Sábado\n");
        break;

    default:
    printf("Número inválido");
        break;
    }

    //  -------------------------------------------Exercicio 14------------------------------------------------//

    // Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:
    //    Média de Aproveitamento  Conceito
    //    Entre 9.0 e 10.0        A
    //    Entre 7.5 e 9.0         B
    //    Entre 6.0 e 7.5         C
    //    Entre 4.0 e 6.0         D
    //    Entre 4.0 e zero        E

    float nota_1, nota_2, media;

    printf("Por favor indique as suas notas:\n");
    printf("Nota 1: \n");
    scanf("%f", &nota_1);
    printf("Nota 2: \n");
    scanf("%f", &nota_2);

    media = (nota_1 + nota_2) / 2;

    if (media >= 9 && media <= 10)
    {
        printf("Nota 1: %.2f\nNota 2: %.2f\n", nota_1, nota_2);
        printf("A sua média é %.2f \nAPROVADO com a nota A", media);
    }
    else if (media >= 7.5 && media < 9)
    {
        printf("Nota 1: %.2f\nNota 2: %.2f\n", nota_1, nota_2);

        printf("A sua média é %.2f \nAPROVADO com a nota B", media);
    }
    else if (media >= 6 && media < 7.5)
    {
        printf("Nota 1: %.2f\nNota 2: %.2f\n", nota_1, nota_2);

        printf("A sua média é %.2f \nAPROVADO com a nota C", media);
    }
    else if (media >= 4 && media < 6)
    {
        printf("Nota 1: %.2f\nNota 2: %.2f\n", nota_1, nota_2);

        printf("A sua média é %.2f \nREPROVADO com a nota D", media);
    }
    else if (media >= 0 && media < 4)
    {
        printf("Nota 1: %.2f\nNota 2: %.2f\n", nota_1, nota_2);

        printf("A sua média é %.2f \nREPROVADO com a nota E", media);
    }

    //  -------------------------------------------Exercicio 15------------------------------------------------//

    // Faça um Programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
    // Dicas:
    // Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro;
    // Triângulo Equilátero: três lados iguais;
    // Triângulo Isósceles: quaisquer dois lados iguais;
    // Triângulo Escaleno: três lados diferentes;

    float lado_1, lado_2, lado_3;

    printf("Por favor indique as medidas dos 3 lados:\n");
    printf("Lado 1:\n");
    scanf("%f", &lado_1);
    printf("Lado 2:\n");
    scanf("%f", &lado_2);
    printf("Lado 3:\n");
    scanf("%f", &lado_3);

    if (lado_1 + lado_2 > lado_3 && lado_2 + lado_3 > lado_1 && lado_1 + lado_3 > lado_2)
    {
        printf("É um triângulo");

        if (lado_1 == lado_2 && lado_2 == lado_3 && lado_3 == lado_1)
        {
            printf(" Equilátero");
        }
        else if (lado_1 == lado_2 || lado_1 == lado_3 || lado_3 == lado_2)
        {
            printf(" Isósceles");
        }
        else
        {
            printf(" Escaleno");
        }
    }
    else
    {
        printf("Não é um triângulo");
    }

    //  -------------------------------------------Exercicio 16------------------------------------------------//

    //     Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c. O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes situações:
    // Se o usuário informar o valor de A igual a zero, a equação não é do segundo grau e o programa não deve fazer pedir os demais valores, sendo encerrado;
    // Se o delta calculado for negativo, a equação não possui raizes reais. Informe ao usuário e encerre o programa;
    // Se o delta calculado for igual a zero a equação possui apenas uma raiz real; informe-a ao usuário;
    // Se o delta for positivo, a equação possui duas raiz reais; informe-as ao usuário;
    // b2 – 4ac

    float valor_a, valor_b, valor_c, delta, raiz_Real, raiz_1, raiz_2;

    printf("Por favor indique 3 valores:\n");
    printf("Valor A:");
    scanf("%f", &valor_a);

    if (valor_a == 0)
    {

        printf("Esta equação não é de 2º Grau. Fim de programa.");
    }
    else
    {
        printf("Valor B:");
        scanf("%f", &valor_b);
        printf("Valor C:");
        scanf("%f", &valor_c);

        delta = (valor_b * valor_b) - (4 * valor_a * valor_c);

        if (delta < 0)
        {
            printf("O Delta desta equação é negativo e não tem raízes reais. Fim de programa.");
        }
        else if (delta == 0)
        {

            // −b/(2a)

            raiz_Real = -valor_b / (2 * valor_a);

            printf("A Equação tem uma raíz real: %f", raiz_Real);
        }
        else
        {

            raiz_1 = (-valor_b + sqrt(delta)) / (2 * valor_a);
            raiz_2 = (-valor_b - sqrt(delta)) / (2 * valor_a);

            printf("A Equação tem duas raízes:\n Raiz 1: %.3f\nRaiz 2: %.3f", raiz_1, raiz_2);
        }
    }

//    -------------------------------------------Exercicio 17------------------------------------------------//

//     Faça um Programa que peça um número correspondente a um determinado ano e em seguida informe se este ano é ou não bissexto.

    int ano=0;

    printf("Por favor indique o ano que quer analisar:\n");
    scanf("%i", &ano);

        if((ano%4==0 && ano%100!=0)) || ano%400==0){
        printf("%i é um ano bissexto.\n", ano);

    }else{
            printf("%i não é um ano bissexto.\n", ano);
    }

    //  -------------------------------------------Exercicio 18------------------------------------------------//

    // Faça um Programa que peça uma data no formato dd/mm/aaaa e determine se a mesma é uma data válida.

    int dia, mes, ano;

    printf("Por favor indique a data no formato dd/mm/aaa:\n");
    printf("Indique a data:");
    scanf("%i/%i/%i", &dia, &mes, &ano);
    printf("%i/%i/%i", dia, mes, ano);

    if (dia < 0 || dia > 31 || mes < 0 || mes > 12 || ano < 0)
    {
        printf("Data inválida.\n");
    }
    else if ((dia > 0 && dia <= 31) && (mes > 0 && mes <= 12) && (ano > 0))
    {
        if ((dia == 30 || dia == 31) && mes == 2)
        {
            printf("Data Inválida");
        }
        else if ((dia == 29) && (mes == 2) && ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)))
        {

            printf("Data Inválida");
        }
        else if ((dia == 31) && (mes == 4 || mes == 6 || mes == 9 || mes == 11))
        {
            printf("Data Inválida");
        }
        else
        {
            printf("Data válida");
        }
    }

    //  -------------------------------------------Exercicio 19------------------------------------------------//

    // Faça um Programa que leia um número inteiro menor que 1000 e imprima a quantidade de centenas, dezenas e unidades do mesmo.
    // Observando os termos no plural a colocação do "e", da vírgula entre outros. Exemplo:
    // 326 = 3 centenas, 2 dezenas e 6 unidades
    // 12 = 1 dezena e 2 unidades Testar com: 326, 300, 100, 320, 310,305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16

    int numero, dezenas, centenas, unidades;

    char texto_Unidade[10];
    char texto_Dezena[10];
    char texto_Centena[10];

    printf("Por favor indique um número inteiro positivo inferior a 1000\n");
    scanf("%i", &numero);

    if (numero < 10)
    {

        unidades = numero / 1;

        switch (unidades)
        {
        case 1:
           strcpy(texto_Unidade , "unidade");
            break;

        default:
         strcpy(texto_Unidade , "unidades");
            break;
        }

        printf("%i = %i %s", numero, unidades, texto_Unidade);
    }
    else if (numero >= 10 && numero < 100)
    {

        dezenas = numero / 10;
        unidades = (numero - (dezenas * 10) / 1);

        switch (unidades)
        {
        case 1:
           strcpy(texto_Unidade , "unidade");
            break;

        default:
         strcpy(texto_Unidade , "unidades");
            break;
        }

         switch (dezenas)
        {
        case 1:
           strcpy(texto_Dezena , "dezena");
            break;

        default:
         strcpy(texto_Dezena , "dezenas");
            break;
        }

       printf("%i = %i %s e %i %s", numero, dezenas, texto_Dezena, unidades, texto_Unidade);
    }
    else if (numero >= 100 && numero < 999)
    {

        centenas = numero / 100;
        dezenas = (numero - (centenas * 100)) / 10;
        unidades = (numero - (centenas * 100) - (dezenas * 10)) / 1;

        switch (unidades)
        {
        case 1:
           strcpy(texto_Unidade , "unidade");
            break;

        default:
         strcpy(texto_Unidade , "unidades");
            break;
        }

         switch (dezenas)
        {
        case 1:
           strcpy(texto_Dezena , "dezena");
            break;

        default:
         strcpy(texto_Dezena , "dezenas");
            break;
        }

         switch (centenas)
        {
        case 1:
           strcpy(texto_Centena , "centena");
            break;

        default:
         strcpy(texto_Centena , "centenas");
            break;
        }

        printf("%i = %i %s, %i %s e %i %s", numero, centenas, texto_Centena, dezenas, texto_Dezena, unidades, texto_Unidade);
    }
    else if (numero == 1000)
    {

        printf("1 milhar, 0 centenas , 0 dezenas, 0 unidades");

    }

    // -------------------------------------------Exercicio 20------------------------------------------------//

    //   Faça um Programa para leitura de três notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e presentar:
    // A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva média alcançada;
    // A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada;
    // A mensagem "Aprovado com Distinção", se a média for igual a 10.

    float nota_1, nota_2, nota_3, media;

    printf("Por favor insira as duas 3 notas (0-10):\n");
    printf("Nota 1:");
    scanf("%f", &nota_1);
    printf("Nota 2:");
    scanf("%f", &nota_2);
    printf("Nota 3:");
    scanf("%f", &nota_3);

    media= (nota_1+nota_2+nota_3)/3.00;

    printf("A sua média é: %.2f ", media);

    if (media<7.00){
        printf("Está REPROVADO.");
    }else if(media>=7.00){
        printf("Está APROVADO.");
    }else if(media==10.00){
        printf("Está APROVADO com DISTINÇÃO.");
    }

    //  -------------------------------------------Exercicio 21------------------------------------------------//

    // Faça um Programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do saque e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais. O programa não deve se preocupar com a quantidade de notas existentes na máquina.
    //  Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 50, uma nota de 5 e uma nota de 1;
    //  Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.

        int valor, valor_atualizado, notas_100, notas_50, notas_10, notas_5, notas_1;

        char texto_Notas_100[10], texto_Notas_50[10], texto_Notas_10[10],texto_Notas_5[10],texto_Notas_1[10];

        printf("Indique o valor a levantar:\n");

        scanf("%i", &valor);

        printf("%i\n", valor);

        if (valor >= 10 && valor <= 600)
        {

            notas_100 = valor / 100;

            valor_atualizado = valor % 100;

            notas_50 = valor_atualizado / 50;

            valor_atualizado = valor_atualizado % 50;

            notas_10 = valor_atualizado / 10;
            valor_atualizado = valor_atualizado % 10;

            notas_5 = valor_atualizado / 5;
            valor_atualizado = valor_atualizado % 5;

            notas_1 = valor_atualizado / 1;
            valor_atualizado = valor_atualizado % 1;

     switch (notas_100)
            {
            case 1:
              strcpy(texto_Notas_100 , "nota");
               break;

           default:
        strcpy(texto_Notas_100 , "notas");
               break;
      }

       switch (notas_50)
            {
            case 1:
              strcpy(texto_Notas_50 , "nota");
               break;

           default:
        strcpy(texto_Notas_50 , "notas");
               break;
      }

         switch (notas_10)
            {
            case 1:
              strcpy(texto_Notas_10 , "nota");
               break;

           default:
        strcpy(texto_Notas_10 , "notas");
               break;
      }

         switch (notas_5)
            {
            case 1:
              strcpy(texto_Notas_5 , "nota");
               break;

           default:
        strcpy(texto_Notas_5 , "notas");
               break;
      }

       switch (notas_1)
            {
            case 1:
              strcpy(texto_Notas_1 , "nota");
               break;

           default:
        strcpy(texto_Notas_1 , "notas");
               break;
      }

            printf("Para levantar %i€ são precisas:\n%i %s de 100€\n%i %s de 50€\n%i %s de 10€\n%i %s de 5€\n%i %s de 1€", valor, notas_100, texto_Notas_100, notas_50, texto_Notas_50, notas_10, texto_Notas_10, notas_5, texto_Notas_5, notas_1,texto_Notas_1);

        }
        else
        {
            printf("Valor Inválido\n");
        }

//    -------------------------------------------Exercicio 22------------------------------------------------//

//     Faça um Programa que peça um número inteiro e determine se ele é par ou impar. Dica: utilize o operador módulo (resto da divisão).

    int num;

    printf("Por favor indique um valor inteiro:\n");
    scanf("%i", &num);

    if(num%2==0){
        printf("Número par");
    }else if(num%2!=0){
        printf("Número ímpar");
    }

    //  -------------------------------------------Exercicio 23------------------------------------------------//

    // Faça um Programa que peça um número e informe se o número é inteiro ou decimal. Dica: utilize uma função de arredondamento.

    float num;

    printf("Por favor indique um número:\n");
    scanf("%f", &num);

    if(num==trunc(num)){
        printf("%.f é um número inteiro", num);

    }else{
        printf("%.1f é um número decimal", num);
    }

    // -------------------------------------------Exercicio 24------------------------------------------------//

    // Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja realizar. O resultado da operação deve ser acompanhado de uma frase que diga se o número é:
    // par ou ímpar;
    // positivo ou negativo;
    // inteiro ou decimal.

    int num1, num2;
    float resultado;
    char operacao;

     printf("Indique dois números:\n");
        printf("Número 1:\n");
        scanf("%i", &num1);
        printf("Número 2:\n");
        scanf("%i", &num2);
        printf("Que tipo de operação quer realizar? (+,-,/,*) ");
        scanf(" %c", &operacao);

       if(operacao == '+'){
            resultado = num1 + num2;
        } else if (operacao == '-') {
            resultado = num1 - num2;
        } else if (operacao == '*') {
            resultado = num1 * num2;
        } else if (operacao == '/') {
            if (num2 != 0) {
                resultado = (float)num1 / num2;
            } else {
                printf("Erro: Divisão por zero\n");

            }
        } else {
            printf("Operação inválida\n");

        }

        printf("%.2f é:\n", resultado);

        if ((int)resultado % 2 == 0) {
            printf("Número par\n");
        } else {
            printf("Número ímpar\n");
        }

        if (resultado >= 0) {
            printf("Número positivo\n");
        } else {
            printf("Número negativo\n");
        }

        if (resultado == trunc(resultado)) {
            printf("Número inteiro\n");
        } else {
            printf("Número decimal\n");
        }

    //  -------------------------------------------Exercicio 25------------------------------------------------//

    // Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
    //  "Telefonou para a vítima?"
    //  "Esteve no local do crime?"
    //  "Mora perto da vítima?"
    //  "Devia para a vítima?"
    //  "Já trabalhou com a vítima?" O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".

    char pergunta_1[5], pergunta_2[5], pergunta_3[5], pergunta_4[5], pergunta_5[5];
    int respostas_Positivas = 0;

    printf("Por favor responda às seguintes perguntas com 'Sim' ou 'Não'\n");

    printf("Telefonou para a vítima?\n");

    scanf(" %s", &pergunta_1);

    printf("Esteve no local do crime?\n");

    scanf(" %s", &pergunta_2);

    printf("Mora perto da vítima?\n");

    scanf(" %s", &pergunta_3);

    printf("Tinha alguma dívida com a vítima?\n");

    scanf(" %s", &pergunta_4);

    printf("Já trabalhou com a vítima?\n");
    scanf(" %s", &pergunta_5);

    if (strcmp(pergunta_1, "Sim") == 0 || strcmp(pergunta_1, "SIM") == 0 || strcmp(pergunta_1, "sim") == 0)
    {
        respostas_Positivas += 1;
    }

    if (strcmp(pergunta_2, "Sim") == 0 || strcmp(pergunta_2, "SIM") == 0 || strcmp(pergunta_2, "sim") == 0)
    {
        respostas_Positivas += 1;
    };

    if (strcmp(pergunta_3, "Sim") == 0 || strcmp(pergunta_3, "SIM") == 0 || strcmp(pergunta_3, "sim") == 0)
    {
        respostas_Positivas += 1;
    };

    if (strcmp(pergunta_4, "Sim") == 0 || strcmp(pergunta_4, "SIM") == 0 || strcmp(pergunta_4, "sim") == 0)
    {
        respostas_Positivas += 1;
    };

    if (strcmp(pergunta_5, "Sim") == 0 || strcmp(pergunta_5, "SIM") == 0 || strcmp(pergunta_5, "sim") == 0)
    {
        respostas_Positivas += 1;
    };

    printf("%i respostas positivas...\n", respostas_Positivas);

    if(respostas_Positivas==2){
        printf("É considerado SUSPEITO");
    }else if( respostas_Positivas==3 || respostas_Positivas==4){
         printf("É considerado CÚMPLICE");
    }else if(respostas_Positivas==5){
         printf("É considerado CULPADO");
    }else{
         printf("É considerado INOCENTE");
    }

    //  -------------------------------------------Exercicio 26------------------------------------------------//

    // Um posto está vendendo combustíveis com a seguinte tabela de descontos:

    // Álcool:
    // até 20 litros, desconto de 3% por litro
    // acima de 20 litros, desconto de 5% por litro

    // Gasolina:
    // até 20 litros, desconto de 4% por litro
    // acima de 20 litros, desconto de 6% por litro

    // Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,50 o preço do litro do álcool é R$ 1,90.

    float litros, preco_Total;
    char combustivel;

    printf("Por favor insira o tipo de combustível que pretende('A' - Álcool ou 'G'- Gasolina. Bem como os litros que pretende:\n");
    printf(" Que combustível pretende? 'A' ou 'G'?");
    scanf("%s", &combustivel);
    printf("Quantos litros?");
    scanf("%f", &litros);

    if(combustivel=='A'){

        if(litros<20){

            preco_Total=(litros*1.90)-((litros*1.90)*0.03);

            printf("O valor total a pagar são: %.2f€", preco_Total);

        }else if(litros>=20){

            preco_Total=(litros*1.90)-((litros*1.90)*0.05);
    printf("O valor total a pagar são: %.2f€", preco_Total);
        }

    }else if(combustivel=='G'){
    if(litros<20){

            preco_Total=(litros*2.50)-((litros*2.50)*0.04);

            printf("O valor total a pagar são: %.2f€", preco_Total);

        }else if(litros>=20){

            preco_Total=(litros*2.50)-((litros*2.50)*0.06);
    printf("O valor total a pagar são: %.2f€", preco_Total);
        }

    }

//    -------------------------------------------Exercicio 27------------------------------------------------//

//     Uma fruteira está vendendo frutas com a seguinte tabela de preços:
//                           Até 5 Kg           Acima de 5 Kg
//     Morango         R$ 2,50 por Kg          R$ 2,20 por Kg
//     Maçã            R$ 1,80 por Kg          R$ 1,50 por Kg
//     Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.

    float kg_Morango, kg_Maca, preco_Morango, preco_Maca, preco_Total, quilos_Total;

    printf("Por favor indique em KG quantos quilos deseja de Morango e de Maçã:\n");
    printf("Kg de Morango:");
    scanf("%f", &kg_Morango);
    printf("Kg de Maçã:");
    scanf("%f", &kg_Maca);

    if (kg_Morango <= 5)
    {
        preco_Morango = kg_Morango * 2.50;

        printf("Preço por KG de Morango 2,50€\n");
    }
    else if (kg_Morango > 5)
    {
        preco_Morango = kg_Morango * 2.20;
        printf("Preço por KG de Morango 2,20€\n");
    }

    if (kg_Maca <= 5)
    {
        preco_Maca = kg_Maca * 1.80;
        printf("Preço por KG de Maçã 1,80€\n");
    }
    else if (kg_Maca > 5)
    {
        preco_Maca = kg_Maca * 1.50;
        printf("Preço por KG de Maçã 1,50€\n");
    }

    preco_Total = preco_Morango + preco_Maca;
    quilos_Total = kg_Morango + kg_Maca;

    if (quilos_Total > 8 || preco_Total > 25)
    {

        preco_Total = preco_Total - (preco_Total * 0.10);
        printf("Parabéns! Tem um desconto adicional de 10%%.");
    }

    printf(" O preço total são %.2f€", preco_Total);

//   -------------------------------------------Exercicio 28------------------------------------------------//

//         O Hipermercado Tabajara está com uma promoção de carnes que é imperdível. Confira:

//                           Até 5 Kg           Acima de 5 Kg
//     File Duplo      R$ 4,90 por Kg          R$ 5,80 por Kg
//     Alcatra         R$ 5,90 por Kg          R$ 6,80 por Kg
//     Picanha         R$ 6,90 por Kg          R$ 7,80 por Kg

//     Para atender a todos os clientes, cada cliente poderá levar apenas um dos tipos de carne da promoção, porém não há limites para a quantidade de carne por cliente. Se compra for feita no cartão Tabajara o cliente receberá ainda um desconto de 5% sobre o total da compra. Escreva um programa que peça o tipo e a quantidade de carne comprada pelo usuário e gere um cupom fiscal, contendo as informações da compra: tipo e quantidade de carne, preço total, tipo de pagamento, valor do desconto e valor a pagar.

    char tipoCarne[20], cartao[20];
    float quantidade, preco_Kg, desconto, preco_Total, valor_Pagar;

    printf("Por favor indique o tipo de carne (File, Alcatra, Picanha): ");
    scanf("%s", tipoCarne);
    printf("Por favor indique a quantidade de carne em Kg: ");
    scanf("%f", &quantidade);

    if (strcmp(tipoCarne, "File") == 0)
    {
        if (quantidade <= 5)
        {
            preco_Kg = 4.90;
        }
        else
        {
            preco_Kg = 5.80;
        }
    }
    else if (strcmp(tipoCarne, "Alcatra") == 0)
    {
        if (quantidade <= 5)
        {
            preco_Kg = 5.90;
        }
        else
        {
            preco_Kg = 6.80;
        }
    }
    else if (strcmp(tipoCarne, "Picanha") == 0)
    {
        if (quantidade <= 5)
        {
            preco_Kg = 6.90;
        }
        else
        {
            preco_Kg = 7.80;
        }
    }
    else
    {
        printf("Tipo de carne inválido.\n");
        return 1;
    }

    preco_Total = quantidade * preco_Kg;

    printf("Vai pagar com o cartão Trabajara? (S/N)\n");
    scanf("%s", &cartao);

    if (strcmp(cartao, "S") == 0)
    {

        desconto = preco_Total * 0.05;

        valor_Pagar = preco_Total - desconto;

          printf("Tipo de carne: %s\n", tipoCarne);
    printf("Quantidade: %.2f Kg\n", quantidade);
    printf("Preço total: € %.2f\n", preco_Total);
    printf("Pagamento Cartão: SIM\n");
    printf("Valor do desconto: € %.2f\n", desconto);
    printf("Valor a pagar: € %.2f\n", valor_Pagar);
    }
    else
    {

        desconto = 0;
        valor_Pagar = preco_Total - desconto;

              printf("Tipo de carne: %s\n", tipoCarne);
    printf("Quantidade: %.2f Kg\n", quantidade);
    printf("Preço total: € %.2f\n", preco_Total);
    printf("Pagamento Cartão: NÃO\n");
    printf("Valor do desconto: € %.2f\n", desconto);
    printf("Valor a pagar: € %.2f\n", valor_Pagar);
    }

  

    return 0;
}
