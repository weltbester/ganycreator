/** 
 * File: filename.cpp
 * Author: Georg Pohl
 * Date of creation: 1st of January 2021
 * Version: 1.0
 * Last change: 1st of January 2021
 * -------------------------------------
 * Description:
 *  Insert description here...
 *  ....
 *
 * Copyright (C) Jan. 2021: Georg Pohl, 70174 Stuttgart
 */

#ifdef MACOS
Commands ...
#endif /* MACOS */

#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;

/* CONSTANTS */

/* STRUCTS, CLASSES */

/* PROTOTYPES */
void greeting();

int main(int argc, const char **argv) {
  FILE *fp = NULL;
  // Send greeting opener
  greeting();

  // Read Config-Template name from CLI
  std::string configTemplateName;
  cout << "Please enter the Config-Template filename: ";
  cin >> configTemplateName;

  // Extract Placeholders from Config-Template and save them in a Set
  // Open file
  std:: ifstream cfgFile(configTemplateName);
  if (!cfgFile) {
    cout << "Cannot open file..." << endl;
    return EXIT_FAILURE;
  }
  cfgFile.close();

  // Read file

  // Write extracted Placeholder into new created file

  // Print Inforamtion about # and name of Placeholders 


  // Ask user how to handle Placeholders

  // Identify and initialize constant Placeholders

  // Identify and identify(?) variable Placeholders

  // ...

  // Request # of Devices to create a Config-File for


  // Create new CPP File for User to compile


  // Do the compilation(?)

  // Outro summary

  return EXIT_SUCCESS;
} /* filename.c */

/* FUNCTIONS */
void greeting() {
  const char *text =
    "#########################################################\n"
    "# Diese Program erstell ein weiteres Programm!          #\n"
    "#########################################################\n";
  cout << text << endl;
}
/* End of filename.cpp */
