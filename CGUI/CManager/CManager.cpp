//
// Created by osipo on 18.02.2021.
//

#include "CManager.h"


namespace kds {

    CManager::CManager(std::ostream &out, std::istream &in)
            : m_out(out), m_in(in) {
    }

    void CManager::clearStyle() {
        m_out << EXEC_ << CLEAR_;
    }

    void CManager::setBackColor(CManager::Color color) {
        m_out << EXEC_ << COLOR_BACK_ET_ << color << END_TAG_;
    }

    void CManager::setFrontColor(CManager::Color color) {
        m_out << EXEC_ << COLOR_FRONT_ET_ << color << END_TAG_;
    }

    void CManager::setBoldText(bool set) {
        m_out << EXEC_ << (set ? ON_BOLD_ : OFF_BOLD_);
    }

    void CManager::setDimText(bool set) {
        m_out << EXEC_ << (set ? ON_DIM_ : OFF_DIM_);
    }

    void CManager::setUnderlinedText(bool set) {
        m_out << EXEC_ << (set ? ON_UNDERLINED_ : OFF_UNDERLINED_);
    }

    void CManager::setBlinkText(bool set) {
        m_out << EXEC_ << (set ? ON_BLINK_ : OFF_BLINK_);
    }

    void CManager::setInvertedText(bool set) {
        m_out << EXEC_ << (set ? ON_INVERTED_ : OFF_INVERTED_);
    }

    void CManager::setHiddenText(bool set) {
        m_out << EXEC_ << (set ? ON_HIDDEN_ : OFF_HIDDEN_);
    }

    void CManager::moveCursorUp(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << CUR_UP_VL_;
    }

    void CManager::moveCursorDown(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << CUR_DOWN_VL_;
    }

    void CManager::moveCursorRight(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << CUR_RIGHT_VL_;
    }

    void CManager::moveCursorLeft(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << CUR_LEFT_VL_;
    }

    void CManager::moveCursorDownByString(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << CUR_NXT_STR_VL_;
    }

    void CManager::moveCursorUpByString(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << CUR_BCK_STR_VL_;
    }

    void CManager::moveCursorHorizontalAbsolutely(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << CUR_JMP_POS_X_VL_;
    }

    void CManager::moveCursorVerticalAbsolutely(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << CUR_JMP_POS_Y_VL_;
    }

    void CManager::moveCursorByXY(size_t x, size_t y) {
        m_out << EXEC_ << OPEN_TAG_ << x << ";" << y << CUR_JMP_POS_XY_VL_;
    }

    void CManager::moveCursorByXYHVP(size_t x, size_t y) {
        m_out << EXEC_ << OPEN_TAG_ << x << ";" << y << CUR_JMP_POS_XY_HVP_VL_;
    }

    void CManager::savePosCursor() {
        m_out << EXEC_ << CUR_SVE_POS_;
    }

    void CManager::restorePosCursor() {
        m_out << EXEC_ << CUR_RES_POS_;
    }

    void CManager::setBlinkCursor(bool set) {
        m_out << EXEC_ << (set ? ON_CUR_BLINK_ : OFF_CUR_BLINK_);
    }

    void CManager::setVisibleCursor(bool set) {
        m_out << EXEC_ << (set ? ON_CUR_VISI_ : OFF_CUR_VISI_);
    }

    void CManager::scrollUp(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << TXT_UP_VL_;
    }

    void CManager::scrollDown(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << TXT_DOWN_VL_;
    }

    void CManager::pasteSpaceCursorLeft(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << PASTE_SPC_CUR_VL_;
    }

    void CManager::delSymbolRight(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << DEL_SYM_RGH_VL_;
    }

    void CManager::clearSymbolCursor(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << CLR_SYM_CUR_VL_;
    }

    void CManager::pasteCursorInBuffer(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << PASTE_CUR_VL_;
    }

    void CManager::delString(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << DEL_STR_VL_;
    }

    void CManager::clearDSP(ParamClearDSPSTR param) {
        m_out << EXEC_ << OPEN_TAG_ << static_cast<int>(param) << CLEAR_DSP_VL_;
    }

    void CManager::clearStr(CManager::ParamClearDSPSTR param) {
        m_out << EXEC_ << OPEN_TAG_ << static_cast<int>(param) << CLEAR_STR_VL_;
    }

    void CManager::getPosCursor(size_t *pos) {
        m_out << EXEC_ << CUR_GET_POS_;
        std::string pos_str{};
        m_in >> pos_str;
        // TODO: Ещё не реализовано, должен выделять
        //  значения из строки и записывать в массив
    }

    void CManager::moveCursorNext(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << MOVE_CUR_NXT_VL_;
    }

    void CManager::turnHorizontalTab() {
        m_out << EXEC_ << SET_POS_TAB_;
    }

    void CManager::moveCursorBack(size_t n) {
        m_out << EXEC_ << OPEN_TAG_ << n << MOVE_CUR_BCK_VL_;
    }

    void CManager::clearTab() {
        m_out << EXEC_ << CLR_TAB_;
    }

    void CManager::clearAllTab() {
        m_out << EXEC_ << CLR_ALL_TAB_;
    }

    void CManager::turnDec() {
        m_out << EXEC_ << SET_DEC_;
    }

    void CManager::turnAscii() {
        m_out << EXEC_ << SET_ASCII_;
    }

    void CManager::resetCmd() {
        m_out << EXEC_ << RESET_CMD_;
    }

    void CManager::setWidth_132() {
        m_out << EXEC_ << SET_WIDTH_132_;
    }

    void CManager::setWidth_80() {
        m_out << EXEC_ << SET_WIDTH_80_;
    }

    void CManager::setTitleCmd(const std::string &str) {
        m_out << EXEC_ << SET_TITLE_STR_TAG_ << str << SET_TITLE_END_TAG_;
    }

    void CManager::drawBottomRightCorner() {
        m_out << BOTTOM_RIGHT_CORNER_;
    }

    void CManager::drawUpperRightCorner() {
        m_out << UPPER_RIGHT_CORNER_;
    }

    void CManager::drawUpperLeftCorner() {
        m_out << UPPER_LEFT_CORNER_;
    }

    void CManager::drawLowerLeftCorner() {
        m_out << LOWER_LEFT_CORNER_;
    }

    void CManager::drawLineTransfer() {
        m_out << LINE_TRANSFER_;
    }

    void CManager::drawHorizontalLine(size_t len) {
        for (size_t i{}; i < len; ++i) {
            m_out << HORIZONTAL_LINE_;
        }
    }

    void CManager::drawVerticalLine(size_t len) {
        for (size_t i{}; i < len; ++i) {
            m_out << VERTICAL_LINE_;
            moveCursorDownByString();
        }
    }

    void CManager::drawLeftConnector() {
        m_out << LEFT_CONNECTOR_;
    }

    void CManager::drawRightConnector() {
        m_out << RIGHT_CONNECTOR_;
    }

    void CManager::drawBottomConnector() {
        m_out << BOTTOM_CONNECTOR_;
    }

    void CManager::drawUpperConnector() {
        m_out << UPPER_CONNECTOR_;
    }
}
