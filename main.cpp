#include <CTextView/CTextView.h>

#include <iostream>
#include <sstream>

#include <CScreen.h>
#include <CTextView/CTextView.h>
#include "CGUI/CManager/ConsoleAPI.h"

#include <Context.h>
#include <Theme.h>

using namespace kds;


int main() {

    CManager cManager(std::cout, std::cin);

    Theme theme{};

    Context context(cManager, theme);

    CScreen cScreen(context);

    CTextView cTextView(cScreen, "My text!");

    cTextView.render();

    return 0;
}