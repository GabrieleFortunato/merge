/*
 ============================================================================
 Name        : fusionn_array_test.c
 Author      : Gabriele Fortunato
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <CUnit/basic.h>
#include "merge.h"

int init_suite_default(){
	return ZERO;
}

int clear_suite_default(){
	return ZERO;
}

void test_length(){
}

void test_ordered_array(){}

void test_bubble_sort(){}

void test_get_ordered_array(){}

void test_merge(){}

int main(void) {
	CU_initialize_registry();
	CU_pSuite pSuite_A = CU_add_suite("SUITE LENGTH",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_A,"test of get_length()",test_length);
	CU_pSuite pSuite_B = CU_add_suite("SUITE ORDERED ARRAY",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_B,"test of ordered_array()",test_ordered_array);
	CU_pSuite pSuite_C = CU_add_suite("SUITE BUBBLE_SORT",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_C,"test of bubble_sort()",test_bubble_sort);
	CU_pSuite pSuite_D = CU_add_suite("SUITE FUSION ARRAY",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_D,"test of merge()",test_merge);
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}
