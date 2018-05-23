#include <cstdio>
#include "src/simple_algo_flow.h"

using namespace std;

int main() {

    mytype dummy = 2;
    mytype output[6] = {0,0,0,0,0,0};

    mytype input[3] = {1, 2, 3};
    simple_algo_flow_hw(input, dummy, output);
    cout << "Out1: ";
    for(int i=0; i<6; i++){
	cout << output[i] << " ";
    }
    cout << endl;

    mytype input2[3] = {4, 5, 6};
    simple_algo_flow_hw(input2, dummy, output);
    cout << "Out2: ";
    for(int i=0; i<6; i++){
	cout << output[i] << " ";
    }
    cout << endl;

    mytype input3[3] = {7, 8, 9};
    simple_algo_flow_hw(input3, dummy, output);
    cout << "Out3: ";
    for(int i=0; i<6; i++){
	cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}
