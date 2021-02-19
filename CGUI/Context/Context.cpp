//
// Created by osipo on 18.02.2021.
//

#include "Context.h"


namespace kds {

    Theme &Context::getTheme() const {
        return m_theme;
    }

    Context::Context(CManager &c_manager, Theme &theme)
            : m_c_manager(c_manager), m_theme(theme) {
    }

    CManager &Context::getCManager() const {
        return m_c_manager;
    }
}