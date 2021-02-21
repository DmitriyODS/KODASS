//
// Created by osipo on 19.02.2021.
//

#include "CManager.h"

#include <utility>

namespace kds {

    CManager::CManager(std::ostream &out, std::istream &in, SizeArea sizeArea, ColorScheme colorScheme)
            : m_console_out(out), m_console_in(in),
              m_console_size(sizeArea), m_color_background(colorScheme.color_background),
              m_color_front(colorScheme.color_front) {
        initConsole();
    }

    void CManager::setTitleConsole(std::string title) {
        m_title_console = std::move(title);
        CAPI::setTitleCmd(m_title_console, m_console_out);
    }

    std::string CManager::getTitleConsole() const {
        return m_title_console;
    }

    void CManager::drawHorizLine(size_t len) {
        if (len <= m_console_size.width) {
            CAPI::drawHorizontalLine(len);
            m_cursor_pos.x += len;
        }
    }

    void CManager::drawVerticalLine(size_t len) {
        if (len <= m_console_size.height) {
            for (size_t i{}; i < len; ++i) {
                CAPI::drawVerticalLine(m_console_out);
                ++m_cursor_pos.y;
                CAPI::moveCursorByXY(m_cursor_pos.x, m_cursor_pos.y, m_console_out);
            }
        }

        if (m_cursor_pos.y > m_console_size.height) {
            m_cursor_pos.y = m_console_size.height;
            CAPI::moveCursorByXY(m_cursor_pos.x, m_cursor_pos.y, m_console_out);
        }
    }

    void CManager::drawUpperConnector() {
        if ((m_cursor_pos.x + 1) <= m_console_size.width) {
            ++m_cursor_pos.x;
            CAPI::drawUpperConnector(m_console_out);
        }
    }

    void CManager::drawBottomConnector() {
        if ((m_cursor_pos.x + 1) <= m_console_size.width) {
            ++m_cursor_pos.x;
            CAPI::drawBottomConnector(m_console_out);
        }
    }

    void CManager::drawRightConnector() {
        if ((m_cursor_pos.x + 1) <= m_console_size.width) {
            ++m_cursor_pos.x;
            CAPI::drawRightConnector(m_console_out);
        }
    }

    void CManager::drawLeftConnector() {
        if ((m_cursor_pos.x + 1) <= m_console_size.width) {
            ++m_cursor_pos.x;
            CAPI::drawLeftConnector(m_console_out);
        }
    }

    void CManager::drawLineTransfer() {
        if ((m_cursor_pos.x + 1) <= m_console_size.width) {
            ++m_cursor_pos.x;
            CAPI::drawLineTransfer(m_console_out);
        }
    }

    void CManager::drawLowerLeftCorner() {
        if ((m_cursor_pos.x + 1) <= m_console_size.width) {
            ++m_cursor_pos.x;
            CAPI::drawLowerLeftCorner(m_console_out);
        }
    }

    void CManager::drawUpperLeftCorner() {
        if ((m_cursor_pos.x + 1) <= m_console_size.width) {
            ++m_cursor_pos.x;
            CAPI::drawUpperLeftCorner(m_console_out);
        }
    }

    void CManager::drawUpperRightCorner() {
        if ((m_cursor_pos.x + 1) <= m_console_size.width) {
            ++m_cursor_pos.x;
            CAPI::drawUpperRightCorner(m_console_out);
        }
    }

    void CManager::drawBottomRightCorner() {
        if ((m_cursor_pos.x + 1) <= m_console_size.width) {
            ++m_cursor_pos.x;
            CAPI::drawBottomRightCorner(m_console_out);
        }
    }

    void CManager::drawUpLineRec(size_t len) {
        if (len <= m_console_size.width) {
            CAPI::drawUpperLeftCorner(m_console_out);
            CAPI::drawHorizontalLine(len - 2, m_console_out);
            CAPI::drawUpperRightCorner(m_console_out);
            m_cursor_pos.x += (len);
        }
    }

    void CManager::drawDownLineRec(size_t len) {
        if (len <= m_console_size.width) {
            CAPI::drawLowerLeftCorner(m_console_out);
            CAPI::drawHorizontalLine(len - 2, m_console_out);
            CAPI::drawBottomRightCorner(m_console_out);
            m_cursor_pos.x += (len);
        }
    }

    void CManager::drawLeftLineRec(size_t len) {
        if (len <= m_console_size.height) {
            CAPI::drawUpperLeftCorner(m_console_out);
            drawHorizLine(len - 2);
            CAPI::drawLowerLeftCorner(m_console_out);
            m_cursor_pos.y += 2;
        }
    }

    void CManager::drawRightLineRec(size_t len) {
        if (len <= m_console_size.height) {
            CAPI::drawUpperRightCorner(m_console_out);
            drawHorizLine(len - 2);
            CAPI::drawBottomRightCorner(m_console_out);
            m_cursor_pos.y += 2;
        }
    }

    void CManager::drawPolygon(Coordinates start_pos, SizeArea size_window) {
        if (start_pos.x + size_window.width <= size_window.width &&
            start_pos.y + size_window.height <= size_window.height) {
            m_cursor_pos = start_pos;
            CAPI::moveCursorByXY(m_cursor_pos.x, m_cursor_pos.y, m_console_out);
            drawUpLineRec(size_window.width);
            m_cursor_pos = start_pos;
            CAPI::moveCursorByXY(m_cursor_pos.x, m_cursor_pos.x, m_console_out);
            drawLeftLineRec(size_window.height);
            --m_cursor_pos.x;
            CAPI::moveCursorBack(1, m_console_out);
            drawDownLineRec(size_window.width);
            --m_cursor_pos.x;
            CAPI::moveCursorBack(1, m_console_out);
            drawRightLineRec(size_window.height);
            m_cursor_pos.x = size_window.width;
            m_cursor_pos.y = size_window.height;
            CAPI::moveCursorByXY(m_cursor_pos.x, m_cursor_pos.x, m_console_out);
        }
    }

    void CManager::drawScreenByMarkup(const std::vector<std::string> &markup, Coordinates start_pos) {
        if (start_pos.y + markup.size() <= m_console_size.height &&
            start_pos.x + markup.at(0).size() <= m_console_size.width) {
            m_cursor_pos = start_pos;
            for (const std::string &it : markup) {

            }
        }
    }

    void CManager::drawPolygonSolid(Coordinates start_pos, SizeArea size_window) {
        if (start_pos.x + size_window.width <= size_window.width &&
            start_pos.y + size_window.height <= size_window.height) {
            m_cursor_pos = start_pos;
            CAPI::moveCursorByXY(m_cursor_pos.x, m_cursor_pos.y, m_console_out);
            drawUpLineRec(size_window.width);
            m_cursor_pos = start_pos;

            //TODO: Долгая отрисовка всего окна

            CAPI::moveCursorByXY(m_cursor_pos.x, m_cursor_pos.x, m_console_out);
            drawLeftLineRec(size_window.height);
            --m_cursor_pos.x;
            CAPI::moveCursorBack(1, m_console_out);
            drawDownLineRec(size_window.width);
            --m_cursor_pos.x;
            CAPI::moveCursorBack(1, m_console_out);
            drawRightLineRec(size_window.height);
            m_cursor_pos.x = size_window.width;
            m_cursor_pos.y = size_window.height;
            CAPI::moveCursorByXY(m_cursor_pos.x, m_cursor_pos.x, m_console_out);
        }
    }

    void CManager::resetParamCmd() {

    }

    void CManager::resetStyleCmd() {

    }

    void CManager::moveCursorUp(size_t n) {

    }

    void CManager::moveCursorDown(size_t n) {

    }

    void CManager::moveCursorLeft(size_t n) {

    }

    void CManager::moveCurosrRight(size_t n) {

    }

    void CManager::moveCursorDownByString(size_t n) {

    }

    void CManager::moveCursorUpByString(size_t n) {

    }

    void CManager::scrollTextUp(size_t n) {

    }

    void CManager::scrollTextDown(size_t n) {

    }

    void CManager::scrollTextRight(size_t n) {

    }

    void CManager::scrollTextLeft(size_t n) {

    }

    void CManager::clearString(size_t n) {

    }

    void CManager::pasteStringUp(size_t n) {

    }

    void CManager::deleteStringDown(size_t n) {

    }

    void CManager::eraseCmd(ParamClearDSPSTR paramClearDspstr) {

    }

    void CManager::eraseString(ParamClearDSPSTR paramClearDspstr) {

    }

    void CManager::setTabPositionCursor() {

    }

    void CManager::clearTabPositionCursor() {

    }

    void CManager::clearAllTabPositionCursor() {

    }

    void CManager::nextTabPositionCursor() {

    }

    void CManager::backTabPositionCursor() {

    }

    void CManager::saveCurCursorPos() {
        m_stack_pos_cursor.push(m_cursor_pos);
    }

    void CManager::restoreCursorPos() {
        if (m_stack_pos_cursor.empty()) {
            m_cursor_pos = m_stack_pos_cursor.top();
            m_stack_pos_cursor.pop();
        }
    }

    const SizeArea &CManager::getConsoleSize() const {
        return m_console_size;
    }

    void CManager::setConsoleSize(SizeArea console_size) {
        m_console_size = console_size;
    }

    const Coordinates &CManager::getCursorPos() const {
        return m_cursor_pos;
    }

    void CManager::setCursorPos(Coordinates coordinates) {
        if (coordinates.x <= m_console_size.width && coordinates.y <= m_console_size.height) {
            m_cursor_pos.x = coordinates.x;
            m_cursor_pos.y = coordinates.y;
            CAPI::moveCursorByXY(m_cursor_pos.x, m_cursor_pos.y, m_console_out);
        }
    }

    Color CManager::getCurColorBackground() const {
        return m_color_background;
    }

    void CManager::setCurColorBackground(Color color) {
        m_color_background = color;
        CAPI::setBackColor(m_color_front, m_console_out);
    }

    Color CManager::getCurColorFront() const {
        return m_color_front;
    }

    void CManager::setCurColorFront(Color color) {
        m_color_front = color;
        CAPI::setFrontColor(m_color_front, m_console_out);
    }

    bool CManager::isCurColorInverted() const {
        return m_color_inverted;
    }

    void CManager::setCurColorInverted(bool set) {
        m_color_inverted = set;
        CAPI::setInvertedText(m_color_inverted);
    }

    bool CManager::isCurTextBold() const {
        return m_text_is_bold;
    }

    void CManager::setCurTextBold(bool set) {
        m_text_is_bold = set;
        CAPI::setBoldText(m_text_is_bold, m_console_out);
    }

    bool CManager::isCurTextDim() const {
        return m_text_is_dim;
    }

    void CManager::setCurTextDim(bool set) {
        m_text_is_dim = set;
        CAPI::setDimText(m_text_is_dim, m_console_out);
    }

    bool CManager::isCurTextUnderlined() const {
        return m_text_is_underlined;
    }

    void CManager::setCurTextUnderlined(bool set) {
        m_text_is_underlined = set;
        CAPI::setUnderlinedText(m_text_is_underlined, m_console_out);
    }

    bool CManager::isCurTextBlink() const {
        return m_text_is_blink;
    }

    void CManager::setCurTextBlink(bool set) {
        m_text_is_blink = set;
        CAPI::setBlinkText(m_text_is_blink, m_console_out);
    }

    bool CManager::isCurTextHidden() const {
        return m_text_is_hidden;
    }

    void CManager::setCurTextHidden(bool set) {
        m_text_is_hidden = set;
        CAPI::setHiddenText(m_text_is_hidden, m_console_out);
    }

    bool CManager::isCurCursorBlink() const {
        return m_cursor_is_blink;
    }

    void CManager::setCurCursorBlink(bool set) {
        m_cursor_is_blink = set;
        CAPI::setBlinkCursor(m_cursor_is_blink, m_console_out);
    }

    bool CManager::isCurCursorVisible() const {
        return m_cursor_is_visible;
    }

    void CManager::setCurCursorVisible(bool set) {
        m_cursor_is_visible = set;
        CAPI::setVisibleCursor(m_cursor_is_visible, m_console_out);
    }

    bool CManager::isCurConsoleDec() const {
        return m_console_is_dec;
    }

    void CManager::setCurConsoleDec(bool set) {
        m_console_is_dec = set;

        if (m_console_is_dec) {
            CAPI::turnDec(m_console_out);
        } else {
            CAPI::turnAscii(m_console_out);
        }
    }

    void CManager::setAreaScroll(size_t first_str, size_t end_str) {
        if (first_str < end_str &&
            first_str <= m_console_size.height &&
            end_str <= m_console_size.height) {
            CAPI::setAreaScroll(first_str, end_str, m_console_out);
        }
    }

    void CManager::initConsole() {
        CAPI::resetCmd(m_console_out);
        CAPI::clearStyle(m_console_out);
        CAPI::clearAllTab(m_console_out);
        CAPI::clearDSP(ParamClearDSPSTR::toAll, m_console_out);
        CAPI::moveCursorByXY(m_cursor_pos.x, m_cursor_pos.y, m_console_out);
        m_cursor_is_visible = false;
        CAPI::setVisibleCursor(m_cursor_is_visible, m_console_out);
        CAPI::setBackColor(m_color_background, m_console_out);
        CAPI::setFrontColor(m_color_front, m_console_out);
    }
}
