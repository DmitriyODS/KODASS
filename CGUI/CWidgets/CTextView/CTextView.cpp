//
// Created by osipo on 17.02.2021.
//

#include "CTextView.h"


namespace kds {


    CTextView::CTextView(CScreen &view) : CView(view.getContext()), m_container(view) {
    }

    CTextView::CTextView(CScreen &view, const std::string &text) : CView(view.getContext()), m_container(view) {
        m_text.str(text);
    }

    void CTextView::setText(std::string text) {
        m_text.clear();
        m_text.str(text);
    }

    void CTextView::addText(std::string text) {
        m_text << text;
    }

    std::string CTextView::getText() const {
        return m_text.str();
    }

    void CTextView::setTextSize(size_t size) {
        m_text_size = size;
    }

    size_t CTextView::getTextSize() const {
        return m_text_size;
    }

    CScreen &CTextView::getContainer() const {
        return m_container;
    }

//    void CTextView::setTextColor(Color color) {
//        setFrontColor(color);
//    }

//    Color CTextView::getTextColor() const {
//        return getFrontColor();
//    }

    void CTextView::render() const {
        CManager &cm = m_context.getCManager();

        cm.savePosCursor();
        cm.moveCursorByXY(m_position_x, m_position_y);
        cm.setBackColor(m_background_color);
        cm.setFrontColor(m_front_color);

        std::cout << m_text.str();

        cm.clearStyle();
        cm.restorePosCursor();
    }
}