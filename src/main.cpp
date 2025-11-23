#include <Geode/Geode.hpp>
using namespace geode::prelude;

#include <Geode/modify/MenuLayer.hpp>

// Ana Menüyü (MenuLayer) değiştiriyoruz
class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        // Mod yüklendiğinde ekrana bir uyarı kutusu çıkart
        FLAlertLayer::create(
            "Basarili!",
            "Merhaba emirontop1, modun calisiyor!",
            "Tamam"
        )->show();

        return true;
    }
};
