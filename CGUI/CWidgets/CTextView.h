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

#include <CView.h>
#include <CScreen.h>


namespace kds {

    class CTextView : public CView {
    public:
        explicit CTextView(CScreen *view);

        CTextView(CScreen *view, const std::string& text);

        void setText(std::string text);

        void addText(std::string text);

        std::string getText() const;

        void setTextSize(size_t size);

        size_t getTextSize() const;

        void setContainer(CScreen *view);

        CScreen *getContainer() const;

        void setTextColor(Color color);

        Color getTextColor() const;

        void render() override;

    protected:
        // текст
        std::stringstream m_text{};

        // Размер текста
        size_t m_text_size{};

        // Контейнер
        CScreen *m_container{};
    };

}


#endif //KODASS_CTEXTVIEW_H
