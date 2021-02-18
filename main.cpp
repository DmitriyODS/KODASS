#include <CTextView.h>

#include <iostream>
#include <sstream>

#include <CScreen.h>
#include <CTextView.h>
#include "CGUI/CManager/CManager.h"

using namespace kds;


int main() {

//    CScreen cScreen;
//    CTextView cTextView(&cScreen, "My text!");
//
//    cTextView.render();

    CManager cManager(std::cout, std::cin);

    cManager.setBackColor(21);

    std::cout << "Test Color!" << std::endl;

    cManager.clearStyle();

    std::cout << "Test two!" << std::endl;

    cManager.turnDec();

    cManager.drawHorizontalLine(25);

    std::cout << std::endl;

    cManager.drawVerticalLine(25);

    cManager.turnAscii();

    return 0;
}