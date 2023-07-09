#include "stream_parser.h"

int main(int argc, char** argv) {
  std::cout<<"Hello\n";
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
    return 1;
  }

  StreamParser parser(argv[1]);
  parser.parse();

  return 0;
}
