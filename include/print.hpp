#include <string>
#include <fstream>
#include <iostream>
//!string output function to output stream
/*!
      \param text an argument of type std::string
      \param out an argument of type std::ostream, the default is std::cout
     */
void print(const std::string& text, std::ostream& out = std::cout);
//!string output function to a file stream
/*!
      \param text an argument of type std::string
      \param out an argument of type std::ofstream
     */
void print(const std::string& text, std::ofstream& out);
