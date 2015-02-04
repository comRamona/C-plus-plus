/*
 * hei.cpp
 *
 *  Created on: 29 Jan 2015
 *      Author: ramona
 */


#include <fstream>


using std::ofstream;

using std::ifstream;

using std::endl;


int

main(void)

{

  char line[1024];

  ofstream out;


  ifstream in("infile.txt");

  out.open("outfile.txt");


  while (in.getline(line, 1024))

  {

      out << line << endl;

  }


  return 0;

}

