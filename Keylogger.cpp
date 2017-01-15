#include "Keylogger.h"

Keylogger::Keylogger() {
  input = "";

  initscr();
  clear();
  noecho();
  keypad(stdscr, true);
  refresh();
  cbreak();
}

void Keylogger::log() {
  //getch test

  int inputChar = 0;
  for (int i = 0; i < 10; i++) {
    inputChar = getch();
    switch (inputChar) {
      case KEY_DOWN: input += "\n_DOWN_\n"; break;
      case KEY_UP: input += "\n_UP_\n"; break;
      case KEY_LEFT: input += "\n_LEFT_\n"; break;
      case KEY_RIGHT: input += "\n_RIGHT_\n"; break;
      case KEY_HOME: input += "\n_HOME_\n"; break;
      case KEY_BACKSPACE: input += "\n_BACKSPACE\n"; break;
      case KEY_DC: input += "\n_DELETE_\n"; break;
      case KEY_IC: input += "\n_INSERT_\n"; break;
      case KEY_ENTER: input += "\n_ENTER_\n"; break;
      default: input += inputChar; break;
    }
  }
  print();
  endwin();
}

void Keylogger::print() {
  std::ofstream filestream;
  filestream.open("output.txt");
  filestream << input;
  filestream.close();
  std::cout << input;
}

int main() {
  Keylogger logger;
//  logger.log();
//  logger.print();
}
