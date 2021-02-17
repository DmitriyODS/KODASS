//
// Created by osipo on 17.02.2021.
//

/*
 * Консольный виджет для вывода текста
 */

#ifndef KODASS_CTEXTVIEW_H
#define KODASS_CTEXTVIEW_H

#include <iostream>
#include <string>
#include <sstream>

#include "../View/CView.h"


namespace kds {

    class CTextView : public CView {
    protected:
        // текст
        std::stringstream m_text{};

        // цвет текста

    };

}


#endif //KODASS_CTEXTVIEW_H
