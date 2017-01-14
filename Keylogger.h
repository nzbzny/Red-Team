#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string.h>
#include <conio.h>

#ifndef KEYLOGGER_H
#define KEYLOGGER_H

class Keylogger {
  std::string input;

public:
  Keylogger();
  void log();
  void print();
};

#endif
