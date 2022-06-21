/*
 *   Yağmur Algılama No I2C örneği,
 *
 *   Sensörden gelen yağmur durumu ve yağmur değerini okumaktadır. Bu değerleri seri monitöre yazdırmaktadır.
 *   Yağmur algılayınca Yağmur Algılayıcı kartındaki yeşil led yanmaktadır. 
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *   Bu örnek I2C haberleşme protokolü kullanılmadan yazılmıştır.
 *
 *   Bu örnek Deneyap Yağmur Algılayıcı için oluşturulmuştur
 *      ------>  www.....com <------ //docs
 *      ------>  https://github.com/deneyapkart/deneyap-yagmur-algilayici-arduino-library  <------ 
 *
*/
#define AOUTPIN A0                                            // Yagmur Algılayıcı kartındaki AO pininin A0 pinine baglanmalıdır
#define DOUTPIN D0                                            // Yagmur Algılayıcı kartındaki DO pininin D0 pinine baglanmalıdır

void setup() {
    Serial.begin(115200);                                     // Seri haberlesme baslatılması
}

void loop() {
    /* digitalRead(DOUTPIN) = 0 ise "YAGMUR ALGILANDI"
                              1 ise "YAGMUR ALGILANMADI" */
    bool yagmurDurum = digitalRead(DOUTPIN);                  // Yagmur durumu okunması
    Serial.print("Yagmur Durumu: ");
    Serial.print(yagmurDurum);                                // Yagmur durumu seri monitore yazdırılması
    
    uint16_t yagmurDeger = analogRead(AOUTPIN);               // Yagmur degerinin okunması
    Serial.print("\tYagmur Degeri: ");
    Serial.println(yagmurDeger);                              // Yagmur verisi seri monitore yazdırılması
}
