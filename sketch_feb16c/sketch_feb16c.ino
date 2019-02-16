int volte;

void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT);//led rosso
pinMode(6,OUTPUT);//led giallo
pinMode(8,OUTPUT);//led bianco
pinMode(10,OUTPUT);//led verde
Serial.begin(9600);//attivo la seriale a 9600 bit/s
Serial.println("INSERISCI QUANTE VOLTE RIPETERE IL CICLO");
while(Serial.available() == 0){}
volte = Serial.readString().toInt();
Serial.println("Hai inserito:");
Serial.println(volte);
}
void a(){
  digitalWrite(12,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(10,LOW);
  }
void b(){
  digitalWrite(6,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(8,HIGH);
  }
void loop() {
  // put your main code here, to run repeatedly:
int f = random(500,5000);
int e = random(500,5000);
for(int i = 0; i < volte; i++){
  a();
delay(f);
b();
delay(e);
  }
  setup();
}
