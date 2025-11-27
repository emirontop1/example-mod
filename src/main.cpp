#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

// Oyunun Ana Menüsüne (MenuLayer) müdahale ediyoruz
class $modify(MenuLayer) {
	
        // Menü başladığında çalışacak fonksiyon
        	bool init() {
                    // Orijinal menüyü yükle, hata varsa dur
                    		if (!MenuLayer::init()) {
                            			return false;
                                        		}

                                                        // Ekrana bir uyarı kutusu (Alert) çıkar
                                                        		FLAlertLayer::create(
                                                                			"Tebrikler!",      // Başlık
                                                                            			"Mobilden ilk modunu basariyla yaptin.", // Mesaj
                                                                                        			"Tamam"            // Buton yazısı
                                                                                                    		)->show();

                                                                                                            		return true;
                                                                                                                    	}
                                                                                                                        };
                                                                                                                        