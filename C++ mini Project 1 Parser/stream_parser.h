#ifndef STREAM_PARSER_H
#define STREAM_PARSER_H

#include <iostream>
#include <fstream>
#include <string>

class StreamParser {
public:
  StreamParser(const std::string& filename);
  void parse();
  
private:
  std::string filename_;
};

#endif // STREAM_PARSER_H
