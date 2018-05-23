#include "simple_algo_flow.h"
#include <cmath>
#include <cassert>
#ifndef __SYNTHESIS__
#include <cstdio>
#endif

void node(mytype input1[3], mytype input2, mytype output[3], int index){
    
    for(int i=0; i<3; i++){
	output[i] = input1[i]/input2;
    }

    //input1[index] = input1[index]*5;
}


void merge(mytype input1[3], mytype input2[3], mytype output[6]){

    /*
    output[0] = in1;
    output[1] = in2;
    output[2] = in3;
    */
    for(int i=0; i<3; i++){
	output[i] = input1[i];
	output[3+i] = input2[i];
    }

}

void simple_algo_flow_hw(mytype input[3], mytype dummy, mytype output[6]){
    
    #pragma HLS ARRAY_PARTITION variable=input complete 
    #pragma HLS ARRAY_PARTITION variable=output complete 
    
    #pragma HLS PIPELINE
    
    /*
    mytype A1 = input[0];
    mytype B1 = input[1];
    mytype C1 = input[2];
    mytype A1_out = 0;
    mytype B1_out = 0;
    mytype C1_out = 0;
    */

    mytype output1[3];
    #pragma HLS ARRAY_PARTITION variable=output1 complete 
    mytype output2[3];
    #pragma HLS ARRAY_PARTITION variable=output2 complete 

    node(input, dummy, output1, 0);
    node(input, dummy, output2, 1);

    //node(input, dummy, C1_out, 2);

    //merge(A1_out, B1_out, C1_out, output);
    merge(output1, output2, output);

/*
    output1[0] = A1_out;
    output1[1] = B1_out;
    output1[2] = C1_out;    

    output2[0] = A1_out*dummy;
    output2[1] = B1_out*dummy;
    output2[2] = C1_out*dummy;    
*/

}
