#pragma once
#include "IO.h"


struct options
{
public:
	options(int argc, char** argv);
	void print_rare_details();
	//~options();

	//vars
  string input = "";
  string output = "";
  string mode  = "";
  string referenceDir = "";
  string referenceFile = "";
  string map = "";
  double depth = 0.95;
  uint repeats = 10;
  uint write = 0;
  uint threads = 1;
  bool writeSwap = true;
  bool verbose = false;

  string modDB;
  int modRedund;
  float modEnzCompl;
  float modModCompl;
  bool modWrXtraInfo;
  bool modCollapse;
  bool calcCoverage;

  string xtra;
};
