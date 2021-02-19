//
// Created by osipo on 18.02.2021.
//

/*
 * Структура палитры стилей приложения
 */

#ifndef KODASS_THEME_H
#define KODASS_THEME_H

#include <iostream>


namespace kds {

    using Color = unsigned short;

    struct Theme {
        // Набор цветов для светлой темы
        Color whitePrimaryColorBackground{};
        Color whitePrimaryColorFront{};
        Color whitePrimaryColorAccent{};
        Color whitePrimaryColorText{};

        Color whiteSecondColorBackground{};
        Color whiteSecondColorFrom{};
        Color whiteSecondColorAccent{};
        Color whiteSecondColorText{};

        Color whiteErrorColorBackground{};
        Color whiteErrorColorFront{};
        Color whiteErrorColorText{};

        // Набор цветов для тёмной темы
        Color darkPrimaryColorBackground{};
        Color darkPrimaryColorFront{};
        Color darkPrimaryColorAccent{};
        Color darkPrimaryColorText{};

        Color darkSecondColorBackground{};
        Color darkSecondColorFrom{};
        Color darkSecondColorAccent{};
        Color darkSecondColorText{};

        Color darkErrorColorBackground{};
        Color darkErrorColorFront{};
        Color darkErrorColorText{};

        // Размеры текста
        size_t sizeDefaultText{};
        size_t sizeMediumText{};
        size_t sizeBigText{};
    };

}


#endif //KODASS_THEME_H
