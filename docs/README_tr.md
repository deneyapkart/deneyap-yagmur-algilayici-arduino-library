# Deneyap Yağmur Algılayıcı Arduino Kütüphanesi

***** Fotoğraf eklenecek ****

Deneyap Yağmur Algılayıcı için Arduino kütüphanesidir.

## :mag_right:Özellikler 
- `Ürün ID` **M32**, **mpv1.0**
- `MCU` STM8S003F3
- `Ağırlık`
- `Modul Boyutları`
- `I2C Adres` 0x2E, 0x49, 0x33, 0x34

| Adres |  | 
| :---  | :---     |
| 0x2E | varsayılan adres |
| 0x49 | ADR1 kısa devre yapıldığındaki adres |
| 0x33 | ADR2 kısa devre yapıldığındaki adres |
| 0x34 | ADR1 ve ADR2 kısa devre yapıldığındaki adres |

## :closed_book:Dokümanlar
Deneyap Yağmur Algılayıcı

Arduino Kütüphanesi Nasıl İndirilir

## :pushpin:Deneyap Yağmur Algılayıcı
Bu Arduino kütüphanesi Deneyap Yağmur Algılayıcının I2C çevre birimi ile kullanılmasını sağlar. Arduino ile uyumlu, I2C çevre birimine sahip herhangi bir geliştirme kartı ile bu kütüphaneyi projelerinizde kullanabilirsiniz.

## :globe_with_meridians:Repo İçeriği
- `/docs` README_tr.md ve ürün fotoğrafları
- `/examples` .ino uzantılı örnek uygulamalar
- `/src` kütüphane için .cpp ve .h uzantılı dosyalar
- `keywords.txt` Arduino IDE'de vurgulanacak anahtar kelimeler
- `library.properties` Arduino yöneticisi için genel kütüphane özellikleri

## Sürüm Geçmişi
1.0.0 - ilk sürüm

## :rocket:Donanım Bağlantıları
- Deneyap Yağmur Algılayıcı ile kullanılan geliştirme kartı I2C kablosu ile bağlanabilir
- veya jumper kablolar ile 3V3, GND, SDA ve SCL bağlantıları yapılabilir.

|Yağmur Algılayıcı | Fonksiyon| Kart pinleri | 
| :---      | :---       |   :---  |
|3.3V       | Güç   	| 3.3V      | 
|GND        | Toprak  	| GND       | 
|SDA       	| I2C Data  | SDA pini | 
|SCL       	| I2C Clock | SCL pini | 
|SWIM		| Debug 	| bağlantı yok | 
|RES 		| Debug 	| bağlantı yok | 
|AO 		| Analog Output  |herhangi Analog pini|
|DO 		| Dijital Output |herhangi GPIO pini|

## :bookmark_tabs:Lisans Bilgisi
Lisans bilgileri için [LICENSE](https://github.com/deneyapkart/deneyap-yagmur-algilayici-arduino-library/blob/master/LICENSE) dosyasını inceleyin.