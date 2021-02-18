//
// Created by osipo on 17.02.2021.
//

#include <ctime>
#include <utility>

#include "AView.h"


namespace kds {

    void AView::init() {
        m_id = time(nullptr);
    }

    AView::Id AView::getId() const {
        return m_id;
    }

    std::string AView::getNameType() const {
        return m_name_type;
    }

    void AView::setNameType(std::string name_type) {
        m_name_type = std::move(name_type);
    }
}
