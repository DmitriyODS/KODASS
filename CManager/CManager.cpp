//
// Created by osipo on 19.02.2021.
//

#include "CManager.h"

namespace kds {

    CManager::CManager(std::ostream &out, std::istream &in, SizeArea sizeArea)
            : m_console_out(out), m_console_in(in), m_console_size(sizeArea) {
        initConsole();
    }

    void CManager::setTitleConsole(std::string title) {
        m_title_console = title;
        CAPI::setTitleCmd(m_title_console, m_console_out);
    }
}
