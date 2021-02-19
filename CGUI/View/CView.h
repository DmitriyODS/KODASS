//
// Created by osipo on 17.02.2021.
//

/*
 * Класс консольного глобального виджета
 */

#ifndef KODASS_CVIEW_H
#define KODASS_CVIEW_H

#include <Context.h>
#include "AView.h"


namespace kds {

    class CView : public AView {
    public:
        explicit CView(Context &context);

        void setWidth(size_t width);

        void setHeight(size_t height);

        size_t getWidth() const;

        size_t getHeight() const;

        void setBackgroundColor(Color color);

        void setFrontColor(Color color);

        Color getBackgroundColor() const;

        Color getFrontColor() const;

        void setStrokeCharacter(std::string symbol);

        std::string getStrokeCharacter() const;

        void setPadding(size_t padding);

        size_t getPadding() const;

        void setScreenPadding(size_t padding);

        size_t getScreenPadding() const;

        void setPositionX(size_t x);

        void setPositionY(size_t y);

        size_t getPositionX() const;

        size_t getPositionY() const;

        Context &getContext() const;

        void render() const override;

    protected:
        // Размеры элемента 1 позиция = одному символу
        size_t m_width{};
        size_t m_height{};

        // цвета
        Color m_background_color{};
        Color m_front_color{};

        // Символ обводки
        std::string m_stroke_character{};

        // Размер внтруннего отступа
        size_t m_padding{};

        // Размер внешнего отступа
        size_t m_screen_padding{};

        // Положение
        size_t m_position_x{};
        size_t m_position_y{};

        // Контекст приложения
        Context &m_context;
    };

}

#endif //KODASS_CVIEW_H
