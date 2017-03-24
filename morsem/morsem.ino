#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
#define kreska 10
#define kropka 11
#define enter 12
#define del 13
String zmienna = "";
boolean jeden = false;
 
void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.cursor();
  
  pinMode(kreska, INPUT_PULLUP);
  pinMode(kropka, INPUT_PULLUP);
  pinMode(enter, INPUT_PULLUP);
  pinMode(del, INPUT_PULLUP);

}
 
void loop() {
  if ((digitalRead(kropka) == HIGH)&&(digitalRead(kreska)==HIGH)&&(jeden==true)){
    jeden = false;
  } 
  
  if (digitalRead(del) == LOW) { 
    zmienna = "";
    lcd.clear();
    lcd.setCursor(0, 0);
  }

  if (digitalRead(kreska) == LOW) { 
    if(jeden == false){
      zmienna = zmienna + "1";
      jeden = true;
      lcd.print("-");
    }
  }

  if (digitalRead(kropka) == LOW) { 
    if(jeden == false){
      zmienna = zmienna + "0";
      jeden = true;
      lcd.print("*");
    }
  }

  if (digitalRead(enter) == LOW) { 
    lcd.setCursor(0,1);
      
      if(zmienna == "0"){
        lcd.print("E");
      }
      
      if(zmienna == "00"){
        lcd.print("I");
      }
      
      if(zmienna == "000"){
        lcd.print("S");
      }
      
      if(zmienna == "0000"){
        lcd.print("H");
      }
      
      if(zmienna == "0001"){
        lcd.print("V");
      }

      if(zmienna == "001"){
        lcd.print("U");
      }
      
      if(zmienna == "0010"){
        lcd.print("F");
      }

      if(zmienna == "01"){
        lcd.print("A");
      }

      if(zmienna == "010"){
        lcd.print("R");
      }

      if(zmienna == "0100"){
        lcd.print("L");
      }

      if(zmienna == "011"){
        lcd.print("W");
      }

      if(zmienna == "0110"){
        lcd.print("P");
      }

      if(zmienna == "0111"){
        lcd.print("J");
      }
    
      if(zmienna == "1"){
        lcd.print("T");
      }

      if(zmienna == "10"){
        lcd.print("N");
      }

      if(zmienna == "100"){
        lcd.print("D");
      }

      if(zmienna == "1000"){
        lcd.print("B");
      }

      if(zmienna == "1001"){
        lcd.print("X");
      }

      if(zmienna == "101"){
        lcd.print("K");
      }

      if(zmienna == "1010"){
        lcd.print("C");
      }

      if(zmienna == "1011"){
        lcd.print("Y");
      }

      if(zmienna == "11"){
        lcd.print("M");
      }

      if(zmienna == "110"){
        lcd.print("G");
      }

      if(zmienna == "1100"){
        lcd.print("Z");
      }

      if(zmienna == "1101"){
        lcd.print("Q");
      }

      if(zmienna == "111"){
        lcd.print("O");
      }

      if(zmienna == "01111"){
        lcd.print("1");
      }
    
      if(zmienna == "0011"){
        lcd.print("2");
      }

      if(zmienna == "00011"){
        lcd.print("3");
      }

      if(zmienna == "0001"){
        lcd.print("4");
      }

      if(zmienna == "00000"){
        lcd.print("5");
      }

      if(zmienna == "10000"){
        lcd.print("6");
      }

      if(zmienna == "11000"){
        lcd.print("7");
      }

      if(zmienna == "11100"){
        lcd.print("8");
      }

      if(zmienna == "11110"){
        lcd.print("9");
      }

      if(zmienna == "11111"){
        lcd.print("0");
      }
  }
}
