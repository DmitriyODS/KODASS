//
// Created by osipo on 17.02.2021.
//

/*
 * Класс консольного глобального виджета
 */

#ifndef KODASS_CVIEW_H
#define KODASS_CVIEW_H

#include "AView.h"


namespace kds {

    class CView : public AView {
    protected:
        // Размеры элемента 1 позиция = одному символу
        size_t m_width{};
        size_t m_height{};
    };

}


#endif //KODASS_CVIEW_H
