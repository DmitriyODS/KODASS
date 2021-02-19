//
// Created by osipo on 17.02.2021.
//

/*
 * Абстрактный класс виджета
 */


#ifndef KODASS_AVIEW_H
#define KODASS_AVIEW_H

#include <string>


namespace kds {

    class AView {
    public:
        using Id = unsigned long int;

        [[nodiscard]] Id getId() const;

        virtual void render() const = 0;

    protected:
        // Уникальный идентификатор объекта
        Id m_id{};

        // Функция инициализации объекта
        void init();
    };

}


#endif //KODASS_AVIEW_H
