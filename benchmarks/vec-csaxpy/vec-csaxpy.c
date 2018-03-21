// See LICENSE for license details.

//**************************************************************************
// Vector SAXPY benchmark for the RISC-V Vector ISA
//--------------------------------------------------------------------------
//

#include "util.h"

//--------------------------------------------------------------------------
// Input/Reference Data

#include "dataset1.h"

void vec_csaxpy( int n, char cond[], float a, float X[], float Y[] );

//--------------------------------------------------------------------------
// Main

int main( int argc, char* argv[] )
{
  // Do the saxpy
  setStats(1);
  vec_csaxpy(DATA_SIZE, conditions, input_data_a, input_data_X, input_data_Y);
  setStats(0);

  // Check the results
  return verifyFloat(DATA_SIZE, input_data_Y, verify_data);
}
