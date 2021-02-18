#include <CTextView.h>

#include <iostream>
#include <sstream>

#include <CScreen.h>
#include <CTextView.h>

using namespace kds;


int main() {

    CScreen cScreen;
    CTextView cTextView(&cScreen, "My text!");

    cTextView.render();

//    std::cout << "\x1B[38;5;227mIn color" << std::endl;
//    std::cout << "\x1B[0mIn color" << std::endl;
//
//    std::cout << "\x1B[?25l";
//    std::cout << "\x1B[s";
//    while (true) {
//        std::cout << "\x1B[u";
//        for (int i{16}; i < 48; ++i) {
//            std::cout << "\x1B[38;5;" << i << "m>";
//            for (int i{}; i < 100000; ++i);
//        }
//
//        std::cout << "\x1B[u";
//
//        for (int i{48}; i > 16; --i) {
//            std::cout << "\x1B[38;5;" << i << "m>";
//            for (int i{}; i < 100000; ++i);
//        }
//    }
//

//    std::cout << "Что - то важное!" << '\n';
//    std::cout << "Что - то важное!" << '\n';
//    std::cout << "Что - то важное!" << '\n';
//    std::cout << "Что - то важное!" << '\n';
//    std::cout << "Что - то важное!" << '\n';
//    std::cout << "\x1B[4A";
//    std::cout << "Не очень!" << '\n';
//    std::cin.get();


//    for (int i{}; i < 256; ++i) {
//        for (int j{}; j < 64; ++j) {
//            std::cout << "\x1B[48;5;" << i << "m \x1B[0m";
//        }
//
//        std::cout << '\n';
//    }

//    for (int i{0}; i < 256; ++i) {
//        std::cout << "\x1B[48;5;" << i << "m \x1B[0m";
//    }

    return 0;
}