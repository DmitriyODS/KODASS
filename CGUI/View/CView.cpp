//
// Created by osipo on 17.02.2021.
//

#include <Theme.h>

#include "CView.h"


namespace kds {


    CView::CView(Context &context) : m_context(context) {
        init();
    }

    void CView::setWidth(size_t width) {
        m_width = width;
    }

    void CView::setHeight(size_t height) {
        m_height = height;
    }

    size_t CView::getWidth() const {
        return m_width;
    }

    size_t CView::getHeight() const {
        return m_height;
    }

    void CView::setBackgroundColor(CView::Color color) {
        m_background_color = color;
    }

    void CView::setFrontColor(CView::Color color) {
        m_front_color = color;
    }

    CView::Color CView::getBackgroundColor() const {
        return m_background_color;
    }

    Color CView::getFrontColor() const {
        return m_front_color;
    }

    void CView::setStrokeCharacter(std::string symbol) {
        m_stroke_character = symbol;
    }

    std::string CView::getStrokeCharacter() const {
        return m_stroke_character;
    }

    void CView::setPadding(size_t padding) {
        m_padding = padding;
    }

    size_t CView::getPadding() const {
        return m_padding;
    }

    void CView::setScreenPadding(size_t padding) {
        m_screen_padding = padding;
    }

    size_t CView::getScreenPadding() const {
        return m_screen_padding;
    }

    void CView::setPositionX(size_t x) {
        m_position_x = x;
    }

    void CView::setPositionY(size_t y) {
        m_position_y = y;
    }

    size_t CView::getPositionX() const {
        return m_position_x;
    }

    size_t CView::getPositionY() const {
        return m_position_y;
    }

    void CView::render() const{

    }

    Context &CView::getContext() const {
        return m_context;
    }
}