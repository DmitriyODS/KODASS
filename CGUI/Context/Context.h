//
// Created by osipo on 18.02.2021.
//

/*
 * Класс контекста всего приложения, который должен быть унаследован
 */

#ifndef KODASS_CONTEXT_H
#define KODASS_CONTEXT_H

#include <Theme.h>
#include "../CManager/ConsoleAPI.h"


namespace kds {

    class Context {
    public:

        explicit Context(CManager &c_manager, Theme &theme);

        [[nodiscard]] Theme &getTheme() const;

        [[nodiscard]] CManager &getCManager() const;

    protected:
        Theme &m_theme;
        CManager &m_c_manager;
    };

}


#endif //KODASS_CONTEXT_H
