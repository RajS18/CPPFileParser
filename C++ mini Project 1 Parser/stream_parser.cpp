#include "stream_parser.h"

StreamParser::StreamParser(const std::string& filename) : filename_(filename) {}

void StreamParser::parse() {
  std::ifstream file(filename_);
  if (!file.is_open()) {
    std::cerr << "Error opening file: " << filename_ << std::endl;
    return;
  }
  //std::cout<<"In stream parser body\n";
  int number;
  while (file >> number) {
    if ((number & 1) == 0) {
      std::cout << number << std::endl;
    }
  }

  file.close();
}
