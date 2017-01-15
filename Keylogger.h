#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string.h>
#include <ncurses.h>
#include <fstream>
#include <future>

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

//http://tldp.org/HOWTO/NCURSES-Programming-HOWTO/index.html
//http://www.cplusplus.com/forum/windows/67854/
//http://stackoverflow.com/questions/3104509/getting-input-if-the-window-is-not-active-windows - windows run in background
//http://stackoverflow.com/questions/6560553/linux-x11-global-keyboard-hook
