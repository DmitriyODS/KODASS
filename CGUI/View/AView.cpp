//
// Created by osipo on 17.02.2021.
//

#include <ctime>

#include "AView.h"


namespace kds {

    void AView::init() {
        m_id = time(nullptr);
    }

    AView::Id AView::getId() const {
        return m_id;
    }
}
