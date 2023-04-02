#include <Servo.h>  // Servo kütüphanesini projeme ekledim.

Servo servom;  // Servo motorumun ismini tanımladım.
int aci = 0;    // açı değişkenini oluşturup 0’a eşitledim.

void setup() {
  servom.attach(10);  // Servoyu 10 nolu pin’e bağladığımı tanımladım.
}

void loop() // Döngüye aldım.
{
  for (aci = 0; aci <= 180; aci += 1) { // For döngüsü ile 0 ile 180 derece arası gitmesini sağladım.
                                        // her bir adımda 1 derece artacak şekilde ayarladım.
    servom.write(aci);              // Servo açı değeri olarak belirlediğim değişkeni servoya yazdırdım.
    delay(21600);                       // servonun hedeflenen açıya gidebilmesi için 21.600 sn bekleme süresi ekledim.
  }
  
  for (aci = 180; aci >= 0; aci -= 1) { // for döngüsü ile 180 ile 0 derece arası gitmesini sağladım.
    servom.write(aci);              // Servo açı değeri değişkenini servoya yazdırdım..
    delay(21600);                       // Servonun açı değerine gidebilmesi için 6 saat yani 21.600 sn bekleme süresi ekledim.
  }
  }
