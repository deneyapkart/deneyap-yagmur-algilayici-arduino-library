/*
 *   Yağmur Algılama örneği,
 *
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Sensörden gelen yağmur durumu ve yağmur değeri okumaktadır. Bu değerleri seri monitöre yazdırmaktadır.
 *   Yağmur algılayınca Yağmur Algılayıcı kartındaki yeşil led yanmaktadır. 
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır. 
 *
 *   Bu örnek Deneyap Yağmur Algılayıcı için oluşturulmuştur
 *      ------>  www.....com <------ //docs
 *      ------>  https://github.com/deneyapkart/deneyap-yagmur-algilayici-arduino-library  <------ 
 *
*/
#include <Deneyap_YagmurAlgilama.h>                          // Deneyap_YagmurAlgilama.h kutuphanesi eklenmesi

Rain YagmurSensor;                                           // Rain için class tanımlaması

void setup() {
    Serial.begin(115200);                                    // Seri haberlesme baslatılması
    if (!YagmurSensor.begin(0x2E)) {                         // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
        delay(3000);
        Serial.println("I2C bağlantısı başarısız ");         // I2C bağlantısı başarısız olursa seri monitore yazdırılması
        while (1);
    }
}

void loop() {
    /* ReadRainDigital() = 0 ise "YAGMUR ALGILANDI"
                           1 ise "YAGMUR ALGILANMADI" */
    bool yagmurDurum = YagmurSensor.ReadRainDigital();       // Yagmur durumu okunması
    Serial.print("Yagmur Durumu: ");
    Serial.print(yagmurDurum);                               // Yagmur durumu seri monitore yazdırılması

    uint16_t yagmurDeger = YagmurSensor.ReadRainAnalog();    // Yagmur degeri okunması
    Serial.print("\tYagmur Degeri: ");
    Serial.println(yagmurDeger);                             // Yagmur verisi seri monitore yazdırılması

    delay(10);
}
