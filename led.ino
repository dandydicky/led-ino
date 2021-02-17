int led = 13;  //bagian deklarasi variabel dan langsung diinisialisasi pada pin 13 arduino menggunakan tipe data integer

void setup() {
 pinMode(led, OUTPUT);  //set variabel led sebagai output
}

void loop() {
  digitalWrite(led, HIGH);   //led nyala atau keadaan logika high or true (mendapat tegangan)
  delay(5000);             //waktu tunda selama 5 detik atau 5000 mili seconds
  digitalWrite(led, LOW);   //led mati atau keadaan logika false atau low (tidak mendapat tegangan)
}
