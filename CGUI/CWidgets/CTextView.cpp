//
// Created by osipo on 17.02.2021.
//

#include "CTextView.h"


namespace kds {


    CTextView::CTextView(CScreen *view) : m_container(view) {
    }

    CTextView::CTextView(CScreen *view, const std::string &text) : m_container(view) {
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

    void CTextView::setContainer(CScreen *view) {
        m_container = view;
    }

    CScreen *CTextView::getContainer() const {
        return m_container;
    }

    void CTextView::setTextColor(CView::Color color) {
        setFrontColor(color);
    }

    CView::Color CTextView::getTextColor() const {
        return getFrontColor();
    }

    void CTextView::render() {
        CView::render();


    }
}