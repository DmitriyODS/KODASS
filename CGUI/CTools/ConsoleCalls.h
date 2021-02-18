//
// Created by osipo on 18.02.2021.
//

#ifndef KODASS_CONSOLECALLS_H
#define KODASS_CONSOLECALLS_H

// Ввод ANSI последовательности
#define EXEC_ "\1xB"

// Очистка стилей
#define CLEAR_ "[0m"

// Установка заднего фона
#define COLOR_BACK_S(color) [48;5;(color)m

// Установка переднего фона
#define COLOR_FRONT_S(color) [38;5;(color)m

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
#define CUR_UP_S(n) [(n)A

// Перемещение курсора вниз
#define CUR_DOWN_S(n) [(n)B

// Перемещение курсора вправо
#define CUR_RIGHT_S(n) [(n)C

// Перемещение курсора влево
#define CUR_LEFT_S(n) [(n)D

// Перемещение курсора вниз по строкам
#define CUR_NXT_STR_S(n) [(n)E

// Перемещение курсора вверх по строкам
#define CUR_BCK_STR_S(n) [(n)F

// Перемещение курсора горизонтально по абсолютной позиции
#define CUR_JMP_POS_X_S(n) [(n)G

// Перемещение курсора вертикально по абсолютной позиции
#define CUR_JMP_POS_Y_S(n) [(n)d

// Перемещение курсора по координатам
#define CUR_JMP_POS_XY_S(x, y) [(x);(y)H

// Перемещение курсора по координатам
#define CUR_JMP_POS_XY_HVP_S(x, y) [(x);(y)f

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
#define TXT_UP_S(n) [(n)S

// Прокрутить текст вниз
#define TXT_DOWN_S(n) [(n)T

// Открывающий блок
#define START_ "["

// Завершающий блок
#define END_ "m"

#endif //KODASS_CONSOLECALLS_H
