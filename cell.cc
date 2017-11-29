#include "cell.h"
#include "info.h"
#include "subject.h"
#include <iostream>

using namespace std;

Cell::Cell(int r, int c, char data): r{r}, c{c}, data{data} {}

void Cell::notify(Subject &whoFrom) {

}

Info Cell::getInfo() const {
    Info info;
    info.row = r;
    info.col = c;
    info.data = data;
    return info;
}

void Cell::setData(char d) {
  data = d;
}
