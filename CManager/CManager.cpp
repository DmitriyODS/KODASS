//
// Created by osipo on 19.02.2021.
//

#include "CManager.h"

#include <utility>

namespace kds {

    CManager::CManager(std::ostream &out, std::istream &in, SizeArea sizeArea)
            : m_console_out(out), m_console_in(in), m_console_size(sizeArea) {
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

    }

    void CManager::drawVerticalLine(size_t len) {

    }

    void CManager::drawUpperConnector() {

    }

    void CManager::drawBottomConnector() {

    }

    void CManager::drawRightConnector() {

    }

    void CManager::drawLeftConnector() {

    }

    void CManager::drawLineTransfer() {

    }

    void CManager::drawLowerLeftCorner() {

    }

    void CManager::drawUpperLeftCorner() {

    }

    void CManager::drawUpperRightCorner() {

    }

    void CManager::drawBottomRightCorner() {

    }

    void CManager::drawUpLineRec(size_t len) {

    }

    void CManager::drawDownLineRec(size_t len) {

    }

    void CManager::drawLeftLineRec(size_t len) {

    }

    void CManager::drawRightLineRec(size_t len) {

    }

    void CManager::drawRectangleOutLine(Coordinates start_pos, SizeArea size_window) {

    }

    void CManager::drawScreenByMarkup(const std::vector<std::string> &markup, Coordinates start_pos) {

    }

    void CManager::drawRectangleSolid(Coordinates start_pos, SizeArea size_window) {

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

    }

    void CManager::restoreCursorPos() {

    }

    const SizeArea &CManager::getConsoleSize() const {
        return <#initializer#>;
    }

    void CManager::setConsoleSize(SizeArea console_size) {

    }

    const Coordinates &CManager::getCursorPos() const {
        return <#initializer#>;
    }

    void CManager::setCursorPos(Coordinates coordinates) {

    }

    Color CManager::getCurColorBackground() const {
        return 0;
    }

    void CManager::setCurColorBackground(Color color) {

    }

    Color CManager::getCurColorFront() const {
        return 0;
    }

    void CManager::setCurColorFront(bool set) {

    }

    bool CManager::isCurColorInverted() const {
        return false;
    }

    void CManager::setCurColorInverted(bool set) {

    }

    bool CManager::isCurTextBold() const {
        return false;
    }

    void CManager::setCurTextBold(bool set) {

    }

    bool CManager::isCurTextDim() const {
        return false;
    }

    void CManager::setCurTextDim(bool set) {

    }

    bool CManager::isCurTextUnderlined() const {
        return false;
    }

    void CManager::setCurTextUnderlined(bool set) {

    }

    bool CManager::isCurTextBlink() const {
        return false;
    }

    void CManager::setCurTextBlink(bool set) {

    }

    bool CManager::isCurTextHidden() const {
        return false;
    }

    void CManager::setCurTextHidden(bool set) {

    }

    bool CManager::isCurCursorBlink() const {
        return false;
    }

    void CManager::setCurCursorBlink(bool set) {

    }

    bool CManager::isCurCursorVisible() const {
        return false;
    }

    void CManager::setCurCursorVisible(bool set) {

    }

    bool CManager::isCurConsoleDec() const {
        return false;
    }

    void CManager::setCurConsoleDec(bool set) {

    }

    void CManager::setAreaScroll(size_t first_str, size_t end_str) {

    }

    void CManager::initConsole() {

    }
}
