#include "CManager.h"


int main() {

    kds::ColorScheme colorScheme{
            4, 255
    };

    kds::CManager cm(std::cout, std::cin, kds::SizeArea{64, 64}, colorScheme);

    cm.drawPolygonSolid(kds::Coordinates{ 0, 0 }, kds::SizeArea{ 64, 64 });

    return 0;
}
