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

        virtual std::string getNameType() const;

        Id getId() const;

        virtual void setNameType(std::string name_type);

        virtual void render() const = 0;

    protected:
        // Уникальный идентификатор объекта
        Id m_id{};

        // Название типа отображения
        std::string m_name_type{};

        // Функция инициализации объекта
        void init();
    };

}


#endif //KODASS_AVIEW_H
