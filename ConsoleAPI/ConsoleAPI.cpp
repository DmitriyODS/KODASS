//
// Created by osipo on 18.02.2021.
//

#include "ConsoleAPI.h"


namespace CAPI {

    void clearStyle(std::ostream &out) {
        out << EXEC_ << CLEAR_;
    }

    void setBackColor(Color color, std::ostream &out) {
        out << EXEC_ << COLOR_BACK_ET_ << color << END_TAG_;
    }

    void setFrontColor(Color color, std::ostream &out) {
        out << EXEC_ << COLOR_FRONT_ET_ << color << END_TAG_;
    }

    void setBoldText(bool set, std::ostream &out) {
        out << EXEC_ << (set ? ON_BOLD_ : OFF_BOLD_);
    }

    void setDimText(bool set, std::ostream &out) {
        out << EXEC_ << (set ? ON_DIM_ : OFF_DIM_);
    }

    void setUnderlinedText(bool set, std::ostream &out) {
        out << EXEC_ << (set ? ON_UNDERLINED_ : OFF_UNDERLINED_);
    }

    void setBlinkText(bool set, std::ostream &out) {
        out << EXEC_ << (set ? ON_BLINK_ : OFF_BLINK_);
    }

    void setInvertedText(bool set, std::ostream &out) {
        out << EXEC_ << (set ? ON_INVERTED_ : OFF_INVERTED_);
    }

    void setHiddenText(bool set, std::ostream &out) {
        out << EXEC_ << (set ? ON_HIDDEN_ : OFF_HIDDEN_);
    }

    void moveCursorUp(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << CUR_UP_VL_;
    }

    void moveCursorDown(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << CUR_DOWN_VL_;
    }

    void moveCursorRight(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << CUR_RIGHT_VL_;
    }

    void moveCursorLeft(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << CUR_LEFT_VL_;
    }

    void moveCursorDownByString(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << CUR_NXT_STR_VL_;
    }

    void moveCursorUpByString(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << CUR_BCK_STR_VL_;
    }

    void moveCursorHorizontalAbsolutely(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << CUR_JMP_POS_X_VL_;
    }

    void moveCursorVerticalAbsolutely(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << CUR_JMP_POS_Y_VL_;
    }

    void moveCursorByXY(size_t x, size_t y, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << y << ";" << x << CUR_JMP_POS_XY_VL_;
    }

    void moveCursorByXYHVP(size_t x, size_t y, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << y << ";" << x << CUR_JMP_POS_XY_HVP_VL_;
    }

    void savePosCursor(std::ostream &out) {
        out << EXEC_ << CUR_SVE_POS_;
    }

    void restorePosCursor(std::ostream &out) {
        out << EXEC_ << CUR_RES_POS_;
    }

    void setBlinkCursor(bool set, std::ostream &out) {
        out << EXEC_ << (set ? ON_CUR_BLINK_ : OFF_CUR_BLINK_);
    }

    void setVisibleCursor(bool set, std::ostream &out) {
        out << EXEC_ << (set ? ON_CUR_VISI_ : OFF_CUR_VISI_);
    }

    void scrollUp(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << TXT_UP_VL_;
    }

    void scrollDown(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << TXT_DOWN_VL_;
    }

    void pasteSpaceCursorLeft(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << PASTE_SPC_CUR_VL_;
    }

    void delSymbolRight(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << DEL_SYM_RGH_VL_;
    }

    void clearSymbolCursor(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << CLR_SYM_CUR_VL_;
    }

    void pasteCursorInBuffer(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << PASTE_CUR_VL_;
    }

    void delString(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << DEL_STR_VL_;
    }

    void clearDSP(ParamClearDSPSTR param, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << static_cast<int>(param) << CLEAR_DSP_VL_;
    }

    void clearStr(ParamClearDSPSTR param, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << static_cast<int>(param) << CLEAR_STR_VL_;
    }

    void moveCursorNext(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << MOVE_CUR_NXT_VL_;
    }

    void turnHorizontalTab(std::ostream &out) {
        out << EXEC_ << SET_POS_TAB_;
    }

    void moveCursorBack(size_t n, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << n << MOVE_CUR_BCK_VL_;
    }

    void clearTab(std::ostream &out) {
        out << EXEC_ << CLR_TAB_;
    }

    void clearAllTab(std::ostream &out) {
        out << EXEC_ << CLR_ALL_TAB_;
    }

    void turnDec(std::ostream &out) {
        out << EXEC_ << SET_DEC_;
    }

    void turnAscii(std::ostream &out) {
        out << EXEC_ << SET_ASCII_;
    }

    void resetCmd(std::ostream &out) {
        out << EXEC_ << RESET_CMD_;
    }

    void setWidth_132(std::ostream &out) {
        out << EXEC_ << SET_WIDTH_132_;
    }

    void setWidth_80(std::ostream &out) {
        out << EXEC_ << SET_WIDTH_80_;
    }

    void setTitleCmd(const std::string &str, std::ostream &out) {
        out << EXEC_ << SET_TITLE_STR_TAG_ << str << SET_TITLE_END_TAG_;
    }

    void drawBottomRightCorner(std::ostream &out) {
        turnDec(out);
        out << BOTTOM_RIGHT_CORNER_;
        turnAscii(out);
    }

    void drawUpperRightCorner(std::ostream &out) {
        turnDec(out);
        out << UPPER_RIGHT_CORNER_;
        turnAscii(out);
    }

    void drawUpperLeftCorner(std::ostream &out) {
        turnDec(out);
        out << UPPER_LEFT_CORNER_;
        turnAscii(out);
    }

    void drawLowerLeftCorner(std::ostream &out) {
        turnDec(out);
        out << LOWER_LEFT_CORNER_;
        turnAscii(out);
    }

    void drawLineTransfer(std::ostream &out) {
        turnDec(out);
        out << LINE_TRANSFER_;
        turnAscii(out);
    }

    void drawHorizontalLine(size_t len, std::ostream &out) {
        turnDec(out);
        for (size_t i{}; i < len; ++i) {
            out << HORIZONTAL_LINE_;
        }
        turnAscii(out);
    }

    void drawVerticalLine(std::ostream &out) {
        turnDec(out);
        out << VERTICAL_LINE_;
        turnAscii(out);
    }

    void drawLeftConnector(std::ostream &out) {
        turnDec(out);
        out << LEFT_CONNECTOR_;
        turnAscii(out);
    }

    void drawRightConnector(std::ostream &out) {
        turnDec(out);
        out << RIGHT_CONNECTOR_;
        turnAscii(out);
    }

    void drawBottomConnector(std::ostream &out) {
        turnDec(out);
        out << BOTTOM_CONNECTOR_;
        turnAscii(out);
    }

    void drawUpperConnector(std::ostream &out) {
        turnDec(out);
        out << UPPER_CONNECTOR_;
        turnAscii(out);
    }

    void setAreaScroll(size_t first_str, size_t end_str, std::ostream &out) {
        out << EXEC_ << OPEN_TAG_ << first_str << ";" << end_str << SET_AREA_SCROLL_XY_;
    }
}
