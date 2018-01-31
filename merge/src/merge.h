/*
 * fusion_array.h
 *
 *  Created on:
 *      Author:
 */

#ifndef FUSION_ARRAY_H_
#define FUSION_ARRAY_H_

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ZERO                0
#define ONE  		        1
#define MAX_LENGTH          20
#define MAX_ELEMENT    		100
#define PRINT_FIRST_ARRAY   "\nPrimo array creato: "
#define PRINT_SECOND_ARRAY  "\nSecondo array creato: "
#define PRINT_FONDED_ARRAY  "\nArray risultante dalla fusione: "
#define PRINT_ELEMENT  		"%d"
#define LINE_SEPARATOR  	"-"
#define FILE_NAME  			"fusion_array.txt"
#define FILE_MODE  			"w"

/**
 * Assicura che ad ogni lancio il programma generi
 * in modo casuale numeroi sempre diversi
 */
void srand_time();

/**
 * Genera in modo casuale la lunghezza dell'array
 * @post il numero generato deve essere un numero intero maggiore di 0
 * @return
 */
int get_length();

/**
 * Verifica che gli elementi dell'array di dimensione
 * stabilita dal parametro length sono ordinati in maniera crescente
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @param array
 * @param length
 * @return
 */
bool ordered_array(int* array, int length);

/**
 * Ordina in maniera crescente gli elementi dell'array
 * di dimensione stabilita dal parametro length
 * @pre il parametro length è un numero intero maggiore di 0
 * @pre gli elementi dell'array non sono ordinati in maniera crescente
 * @post gli elementi dell'array sono ordinati in maniera crescente
 * @param array
 * @param length
 */
void bubble_sort(int* array, int length);

/**
 * Crea in modo casuale gli elementi dell'array di dimensione stabilita
 * dal parametro length e poi li ordina in maniera crescente
 * @param length
 * @return
 */
int* get_ordered_array(int length);

/**
 * Stampa su file gli elementi dell'array di dimensione
 * stabilita dal parametro length
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @pre il file deve essere aperto
 * @param file
 * @param array
 * @param length
 */
void print_array(FILE* file, char* string_array, int* array, int length);

/**
 * Fonde in un unico array i due array passati come parametro
 * @pre gli elementi dei due array passati come parametro devono essere
 * 		ordinati in maniera crescente
 * @pre i parametri length_a e length_b devono essere maggiori di 0
 * @post gli elementi dell'array finale sono ordinati in maniera crescente
 * @param array_a
 * @param array_b
 * @param length_a
 * @param length_b
 * @return
 */
int* merge(int* array_a, int* array_b, int length_a, int length_b);

#endif /* FUSION_ARRAY_H_ */
