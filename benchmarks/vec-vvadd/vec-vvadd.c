// See LICENSE for license details.

//**************************************************************************
// Vector-vector add benchmark
//--------------------------------------------------------------------------
//
// This benchmark uses adds to vectors and writes the results to a
// third vector. The input data (and reference data) should be
// generated using the vvadd_gendata.pl perl script and dumped
// to a file named dataset1.h.
 
#include "util.h"

//--------------------------------------------------------------------------
// Input/Reference Data

#include "dataset1.h"

//--------------------------------------------------------------------------
// vvadd function

void vec_vvadd( int n, int a[], int b[], int c[] );

//--------------------------------------------------------------------------
// Main

int main( int argc, char* argv[] )
{
  int results_data[DATA_SIZE];

  // Do the vvadd
  setStats(1);
  vec_vvadd( DATA_SIZE, input1_data, input2_data, results_data );
  setStats(0);

  // Check the results
  return verify( DATA_SIZE, results_data, verify_data );
}
