// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome: Tamires Pimenta Manhães
//  email: tamiresmanhaes4@gmail.com
//  Matrícula: 2016216026
//  Semestre: 4º

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 12/12/2017

// #################################################

#include <stdio.h>

#define SizeDia 3
#define SizeMes 3
#define SizeAno 5

typedef struct {
    int dia; 
    int mes; 
    int ano;
} Data;

int q1(char *data);
Data quebraData(char *data);
int ValidaData(int dia, int mes, int ano);
int q2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos);
int q3(char *texto, char c, int isCaseSensitive);
int q4(char *strTexto, char *strBusca, int posicoes[30]);
int q5(int num);
int q6(int numerobase, int numerobusca);
