//
// Created by osipo on 18.02.2021.
//

#ifndef KODASS_CONSOLEAPI_H
#define KODASS_CONSOLEAPI_H

#include <iostream>

/*
 * Набор функций для тонкой настройки и взаимодействия
 * с консолью вне зависимости от операционной системы
 */

namespace kds {

    using Color = unsigned short;

    enum class ParamClearDSPSTR {
        toEnd = 0,
        toCursor = 1,
        toAll = 2
    };

    void clearStyle(std::ostream &out = std::cout);

    void setBackColor(Color color, std::ostream &outColor = std::cout);

    void setFrontColor(Color color, std::ostream &outColor = std::cout);

    void setBoldText(bool set, std::ostream &outColor = std::cout);

    void setDimText(bool set, std::ostream &outColor = std::cout);

    void setUnderlinedText(bool set, std::ostream &outColor = std::cout);

    void setBlinkText(bool set, std::ostream &outColor = std::cout);

    void setInvertedText(bool set, std::ostream &outColor = std::cout);

    void setHiddenText(bool set, std::ostream &outColor = std::cout);

    void moveCursorUp(size_t n = 1, std::ostream &outColor = std::cout);

    void moveCursorDown(size_t n = 1, std::ostream &outColor = std::cout);

    void moveCursorRight(size_t n = 1, std::ostream &outColor = std::cout);

    void moveCursorLeft(size_t n = 1, std::ostream &outColor = std::cout);

    void moveCursorDownByString(size_t n = 1, std::ostream &outColor = std::cout);

    void moveCursorUpByString(size_t n = 1, std::ostream &outColor = std::cout);

    void moveCursorHorizontalAbsolutely(size_t n = 0, std::ostream &outColor = std::cout);

    void moveCursorVerticalAbsolutely(size_t n = 0, std::ostream &outColor = std::cout);

    void moveCursorByXY(size_t x = 0, size_t y = 0, std::ostream &outColor = std::cout);

    void moveCursorByXYHVP(size_t x = 0, size_t y = 0, std::ostream &outColor = std::cout);

    void savePosCursor(std::ostream &outColor = std::cout);

    void restorePosCursor(std::ostream &outColor = std::cout);

    void setBlinkCursor(bool set, std::ostream &outColor = std::cout);

    void setVisibleCursor(bool set, std::ostream &outColor = std::cout);

    void scrollUp(size_t n = 1, std::ostream &outColor = std::cout);

    void scrollDown(size_t n = 1, std::ostream &outColor = std::cout);

    void pasteSpaceCursorLeft(size_t n = 1, std::ostream &outColor = std::cout);

    void delSymbolRight(size_t n = 1, std::ostream &outColor = std::cout);

    void clearSymbolCursor(size_t n = 1, std::ostream &outColor = std::cout);

    void pasteCursorInBuffer(size_t n = 1, std::ostream &outColor = std::cout);

    void delString(size_t n = 1, std::ostream &outColor = std::cout);

    void clearDSP(ParamClearDSPSTR param, std::ostream &outColor = std::cout);

    void clearStr(ParamClearDSPSTR param, std::ostream &outColor = std::cout);

    void turnHorizontalTab(std::ostream &outColor = std::cout);

    void moveCursorNext(size_t n = 1, std::ostream &outColor = std::cout);

    void moveCursorBack(size_t n = 1, std::ostream &outColor = std::cout);

    void clearTab(std::ostream &outColor = std::cout);

    void clearAllTab(std::ostream &outColor = std::cout);

    void turnDec(std::ostream &outColor = std::cout);

    void turnAscii(std::ostream &outColor = std::cout);

    void resetCmd(std::ostream &outColor = std::cout);

    void setWidth_132(std::ostream &outColor = std::cout);

    void setWidth_80(std::ostream &outColor = std::cout);

    void setTitleCmd(const std::string &str, std::ostream &outColor = std::cout);

    void drawBottomRightCorner(std::ostream &outColor = std::cout);

    void drawUpperRightCorner(std::ostream &outColor = std::cout);

    void drawUpperLeftCorner(std::ostream &outColor = std::cout);

    void drawLowerLeftCorner(std::ostream &outColor = std::cout);

    void drawLineTransfer(std::ostream &outColor = std::cout);

    void drawHorizontalLine(size_t len = 1, std::ostream &outColor = std::cout);

    void drawVerticalLine(std::ostream &outColor = std::cout);

    void drawLeftConnector(std::ostream &outColor = std::cout);

    void drawRightConnector(std::ostream &outColor = std::cout);

    void drawBottomConnector(std::ostream &outColor = std::cout);

    void drawUpperConnector(std::ostream &outColor = std::cout);

    void setAreaScroll(size_t first_str, size_t end_str, std::ostream &outColor = std::cout);

}

// Ввод ANSI последовательности
#define EXEC_ "\x1B"

// Открывающий тег команды
#define OPEN_TAG_ "["

// Открывающий тег команды 2
#define CLOSE_TAG_ "]"

// Закрывающий тег оформления
#define END_TAG_ "m"

// Очистка стилей
#define CLEAR_ "[0m"

// Установка заднего фона
#define COLOR_BACK_ET_ "[48;5;"

// Установка переднего фона
#define COLOR_FRONT_ET_ "[38;5;"

// Сделать текст жирным
#define ON_BOLD_ "[1m"
#define OFF_BOLD_ "[21m"

// Сделать текст тусклым
#define ON_DIM_ "[2m"
#define OFF_DIM_ "[22m"

// Поддчеркнуть текст
#define ON_UNDERLINED_ "[4m"
#define OFF_UNDERLINED_ "[24m"

// Заставить мигать
#define ON_BLINK_ "[5m"
#define OFF_BLINK_ "[25m"

// Инверсия цветов текста
#define ON_INVERTED_ "[7m"
#define OFF_INVERTED_ "[27m"

// Скрыть текст
#define ON_HIDDEN_ "[8m"
#define OFF_HIDDEN_ "[28m"

// Перемещение курсора вверх
#define CUR_UP_VL_ "A"

// Перемещение курсора вниз
#define CUR_DOWN_VL_ "B"

// Перемещение курсора вправо
#define CUR_RIGHT_VL_ "C"

// Перемещение курсора влево
#define CUR_LEFT_VL_ "D"

// Перемещение курсора вниз по строкам
#define CUR_NXT_STR_VL_ "E"

// Перемещение курсора вверх по строкам
#define CUR_BCK_STR_VL_ "F"

// Перемещение курсора горизонтально по абсолютной позиции
#define CUR_JMP_POS_X_VL_ "G"

// Перемещение курсора вертикально по абсолютной позиции
#define CUR_JMP_POS_Y_VL_ "d"

// Перемещение курсора по координатам через ";"
#define CUR_JMP_POS_XY_VL_ "H"

// Перемещение курсора по координатам через ";"
#define CUR_JMP_POS_XY_HVP_VL_ "f"

// Сохранение позиции курсора
#define CUR_SVE_POS_ "[s"

// Восстановление позиции курсора
#define CUR_RES_POS_ "[u"

// Включить мигающий курсор
#define ON_CUR_BLINK_ "[?12h"

// Выключение мигающий курсор
#define OFF_CUR_BLINK_ "[?12l"

// Включить отображение курсора
#define ON_CUR_VISI_ "[?25h"

// Выключить отображение курсора
#define OFF_CUR_VISI_ "[?25l"

// Прокрутить текст вверх
#define TXT_UP_VL_ "S"

// Прокрутить текст вниз
#define TXT_DOWN_VL_ "T"

// Вставка n пробелов в текущую позицию
// курсора со сдвигом всего существующего
// текста вправо. Текст, который выходит
// за экран справа, удаляется.
#define PASTE_SPC_CUR_VL_ "@"

// Удаление n символов в текущей позиции курсора
// со сдвигом пробелов с правого края экрана.
#define DEL_SYM_RGH_VL_ "P"

// Очистка n символов из текущей позиции курсора
// с заменой их символом пробела.
#define CLR_SYM_CUR_VL_ "X"

// Вставка n строк в буфер в позицию курсора.
// Строка, на которой находится курсор, и строки
// под ней будут сдвинуты вниз.
#define PASTE_CUR_VL_ "L"

// Удаляет n строк из буфера, начиная со строки,
// в которой находится курсор.
#define DEL_STR_VL_ "M"

/*
  Для следующих команд параметр <n> имеет три допустимых значения:
    0 — очищает все данные с текущей позиции курсора (включительно) до конца строки или экрана;
    1 — очищает все данные с начала строки или экрана до текущей позиции курсора (включительно);
    2 — очищает всю строку или экран.
 */

// Заменяет весь текст в текущем окне просмотра
// или на экране, указанный параметром n, пробелами.
#define CLEAR_DSP_VL_ "J"

// Заменить весь текст в строке с курсором, указанный
// параметром n, пробелами
#define CLEAR_STR_VL_ "K"

// Получение позиции курсора
#define CUR_GET_POS_ "[6n"

// Задает позицию табуляции в текущем столбце,
// в котором находится курсор.
#define SET_POS_TAB_ "H"

// Перемещение курсора к следующему столбцу (в той же строке)
// в соответствии с позицией табуляции.
// Если больше нет позиций табуляции,
// выполняется перемещение к последнему столбцу в строке.
// Если курсор находится в последнем столбце,
// выполняется перемещение к первому столбцу следующей строки.
#define MOVE_CUR_NXT_VL_ "I"

// Перемещение курсора к предыдущему столбцу (в той же строке)
// в соответствии с позицией табуляции.
// Если больше нет позиций табуляции,
// выполняется перемещение курсора к первому столбцу.
// Если курсор находится в первом столбце, то он не перемещается.
#define MOVE_CUR_BCK_VL_ "Z"

// Очищает позицию табуляции в текущем столбце, если она есть.
// В противном случае ничего не происходит.
#define CLR_TAB_ "[0g"

// Очищает все установленные позиции табуляции.
#define CLR_ALL_TAB_ "[3g"

// Включает режим рисования линии DEC
#define SET_DEC_ "(0"

// Включает режим ASCII (по умолчанию)
#define SET_ASCII_ "(B"

// Символы рисования интерфейса в режиме DEC
#define BOTTOM_RIGHT_CORNER_ 'j'
#define UPPER_RIGHT_CORNER_ 'k'
#define UPPER_LEFT_CORNER_ 'l'
#define LOWER_LEFT_CORNER_ 'm'
#define LINE_TRANSFER_ 'n'
#define HORIZONTAL_LINE_ 'q'
#define LEFT_CONNECTOR_ 't'
#define RIGHT_CONNECTOR_ 'u'
#define BOTTOM_CONNECTOR_ 'v'
#define UPPER_CONNECTOR_ 'w'
#define VERTICAL_LINE_ 'x'

// Сбрасывает некоторые параметры терминала к значениям по умолчанию.
#define RESET_CMD_ "[!p"

// Задает ширину консоли в 132 столбца.
#define SET_WIDTH_132_ "[?3h"

// Задает ширину консоли в 80 столбцов.
#define SET_WIDTH_80_ "[?3I"

// Установка значка и заголовка консоли
#define SET_TITLE_AND_ICON_START_TAG_ "]0;"
#define SET_TITLE_AND_ICON_END_TAG_ "BEL"

// Установка заголовка консоли
#define SET_TITLE_STR_TAG_ "]2;"
#define SET_TITLE_END_TAG_ "BEL"

/*
 * Следующие последовательности позволяют программе настроить область
 * прокрутки экрана, на которую влияют операции прокрутки.
 * Это подмножество строк, которые корректируются при
 * прокручивании экрана иным образом (например, в "\n" или RI).
 * Эти поля также влияют на строки, измененные при выполнении
 * операций вставки строки (IL), удаления строки (DL),
 * прокрутки вверх (SU) и прокрутки вниз (SD).
 * Поля прокрутки могут особенно пригодиться для отображения
 * части экрана, которая не прокручивается при заполнении
 * остальной части экрана. Например, заголовок окна вверху
 * или строка состояния в нижней части приложения.
 * Для DECSTBM есть два необязательных параметра: <t> и <b>.
 * Они используются для указания строк, представляющих
 * верхние и нижние строки области прокрутки (включительно).
 * Если параметры не указаны, <t> по умолчанию
 * равно 1, а <b> — текущей высоте окна просмотра.
 * Поля прокрутки задаются для каждого буфера, поэтому важно,
 * чтобы альтернативный и основной буфер поддерживали отдельные
 * параметры полей прокрутки (таким образом полноэкранное
 * приложение в альтернативном буфере не навредит полям основного
 *
 * Example:
 *  [ <t> ; <b> r
 */
#define SET_AREA_SCROLL_XY_ "r"

// https://docs.microsoft.com/ru-ru/windows/console/console-virtual-terminal-sequences

#endif //KODASS_CONSOLEAPI_H
