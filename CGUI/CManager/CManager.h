//
// Created by osipo on 19.02.2021.
//

#ifndef KODASS_CMANAGER_H
#define KODASS_CMANAGER_H

#include <iostream>
#include <stack>
#include <string>
#include <vector>

#include "ConsoleAPI.h"


namespace kds {

    struct Coordinates {
        size_t x{}, y{};
    };

    struct SizeArea {
        size_t width{}, height{};
    };

    class CManager {
    public:
        CManager(std::ostream &out, std::istream &in, SizeArea sizeArea);

        CManager(const CManager &cManager) = delete;

        CManager &operator=(CManager &other) = delete;

        void setTitleConsole(std::string title);

        std::string getTitleConsole() const;

        void drawHorizLine(size_t len);

        void drawVerticalLine(size_t len);

        void drawUpperConnector();

        void drawBottomConnector();

        void drawRightConnector();

        void drawLeftConnector();

        void drawLineTransfer();

        void drawLowerLeftCorner();

        void drawUpperLeftCorner();

        void drawUpperRightCorner();

        void drawBottomRightCorner();

        void drawUpLineRec(size_t len);

        void drawDownLineRec(size_t len);

        void drawLeftLineRec(size_t len);

        void drawRightLineRec(size_t len);

        void drawRectangleOutLine(Coordinates start_pos, SizeArea size_window);

        void drawScreenByMarkup(const std::vector <std::string> &markup, Coordinates start_pos);

        void drawRectangleSolid(Coordinates start_pos, SizeArea size_window);

        void resetParamCmd();

        void resetStyleCmd();

        void moveCursorUp(size_t n);

        void moveCursorDown(size_t n);

        void moveCursorLeft(size_t n);

        void moveCurosrRight(size_t n);

        void moveCursorDownByString(size_t n);

        void moveCursorUpByString(size_t n);

        void scrollTextUp(size_t n);

        void scrollTextDown(size_t n);

        void scrollTextRight(size_t n);

        void scrollTextLeft(size_t n);

        void clearString(size_t n);

        void pasteStringUp(size_t n);

        void deleteStringDown(size_t n);

        void eraseCmd(ParamClearDSPSTR paramClearDspstr);

        void eraseString(ParamClearDSPSTR paramClearDspstr);

        void setTabPositionCursor();

        void clearTabPositionCursor();

        void clearAllTabPositionCursor();

        void nextTabPositionCursor();

        void backTabPositionCursor();

        void saveCurCursorPos();

        void restoreCursorPos();

        const SizeArea &getConsoleSize() const;

        void &setConsoleSize(SizeArea console_size);

        const Coordinates &getCursorPos() const;

        void setCursorPos(Coordinates coordinates);

        Color getCurColorBackground() const;

        void setCurColorBackground(Color color);

        Color getCurColorFront() const;

        void setCurColorFront(bool set);

        bool isCurColorInverted() const;

        void setCurColorInverted(bool set);

        bool isCurTextBold() const;

        void setCurTextBold(bool set);

        bool isCurTextDim() const;

        void setCurTextDim(bool set);

        bool isCurTextUnderlined() const;

        void setCurTextUnderlined(bool set);

        bool isCurTextBlink() const;

        void setCurTextBlink(bool set);

        bool isCurTextHidden() const;

        void setCurTextHidden(bool set);

        bool isCurCursorBlink() const;

        void setCurCursorBlink(bool set);

        bool isCurCursorVisible() const;

        void setCurCursorVisible(bool set);

        bool isCurConsoleDec() const;

        void setCurConsoleDec(bool set);

        void setAreaScroll(size_t first_str, size_t end_str);

    private:
        void initConsole();

        // размеры поля консоли
        SizeArea m_console_size{};

        // координаты курсора
        Coordinates m_cursor_pos{};

        // ссылки на объекты ввода / вывода
        std::ostream &m_console_out;
        std::istream &m_console_in;

        // Текущие цвета консоли
        Color m_color_background{};
        Color m_color_front{};
        Bool m_color_inverted{};

        // Текущие свойства текста
        Bool m_text_is_bold{};
        Bool m_text_is_dim{};
        Bool m_text_is_underlined{};
        Bool m_text_is_blink{};
        Bool m_text_is_hidden{};

        // Текущее состояние курсора
        Bool m_cursor_is_blink{};
        Bool m_cursor_is_visible{};

        // Режим консоли
        Bool m_console_is_dec{};

        // Заголовок консоли
        std::string m_title_console{};

        // Стек позиций курсора
        std::stack <Coordinates> m_stack_pos_cursor{};
    };

}


#endif //KODASS_CMANAGER_H
