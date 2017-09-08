#include <LiquidCrystal.h>
LiquidCrystal lcd(11,12,4,5,6,7);
void setup(){
Serial.begin(9600);
int i;

}
void loop(){
  int i;
  int count = 0;
  char othcod[4] = {'s','o','n','y'};
  if(Serial.available()>0){
    lcd.setCursor(0,0);
    lcd.print("paswrd plz......");
    char a[4];
    lcd.print('*');
    for(i=0;i<4;i++){
      a[i]=Serial.read();
    }
    for(i=0;i<4;i++){
      
      if(othcod[i]==a[i]){
        count++; 
      }
      if(count == 4){
        lcd.clear();
        lcd.setCursor(0,1);
        lcd.println("granted");
      }
      else{
        lcd.clear();
        lcd.setCursor(0,1);
        lcd.println("denined");
      }
    }
  }
}
