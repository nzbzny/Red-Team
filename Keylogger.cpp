#include "Keylogger.h"

Keylogger::Keylogger() {
  input = "";
}

void Keylogger::log() {
  //getch test
  int inputChar = 0;
  for (int i = 0; i < 10; i++) {
    inputChar = std::getc();
    input += std::to_string(inputChar); input += ", ";
  }
}

void Keylogger::print() {
  std::cout << input;
}

int main() {
  Keylogger logger;
  logger.log();
  logger.print();
}
