#ifndef SIMPLE_ALGO_SPARSE_H
#define SIMPLE_ALGO_SPARSE_H

#include "ap_fixed.h"
#include "ap_int.h"

//typedef ap_fixed<18,8> mytype;
typedef ap_uint<32> mytype;

//void node(mytype input1[3], mytype input2, mytype& output, int index);
void node(mytype input1[3], mytype input2, mytype output[3], int index);
//void merge(mytype in1, mytype in2, mytype in3, mytype output[3]);
void merge(mytype input1[3], mytype input2[3], mytype output[6]);

void simple_algo_flow_hw(mytype input[3], mytype dummy, mytype output[6]);

#endif
