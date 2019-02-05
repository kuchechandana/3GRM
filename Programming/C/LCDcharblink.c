#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
int Blink_pos[6][2]={
  {
    5,0  }
  ,
  {
    8,0  }
  ,
  {
    11,0  }
  ,
  { 
    5,1  }
  ,
  { 
    8,1  } 
  , 
  {
    11,1  }                          
}; 
enum _Screen_edit_item
{ 
  EDIT_DAY,
  EDIT_MONTH,
  EDIT_YEAR, 
  EDIT_HOUR,
  EDIT_MINUTE, 
  EDIT_SEC
};
typedef enum _Screen_edit_item EDIT_SCREEN_ITEM;
static int local_day=1;
static int local_month=3;
static int local_year=2014;
int local_s=12;
static int local_h=23;
static int local_m=1;
void setup(){ 
  lcd.begin(16,2); 
  lcd.clear(); 
} 

void loop()
{   
  Blink_LCD(); 
}  
void Blink_LCD(){ 
  int j=0;
  for(int j=0; j<6;j++)
  {
    digitalClockDisplay(); 
    lcd.setCursor(Blink_pos[j][0],Blink_pos[j][1]);
    Serial.print(Blink_pos[j][0]); 
    Serial.print(" ");
    Serial.println(Blink_pos[j][1]); 

    delay(300); 
    switch(j)
{
case EDIT_DAY: 
  lcd.print(local_day); goto LABEL;
  break;
case EDIT_MONTH:
  lcd.print(local_month); goto LABEL; 
  break;
case EDIT_YEAR:
  lcd.print(local_year); goto LABEL; 
  break;
case EDIT_HOUR:
  lcd.print(local_h);  goto LABEL;
  break;
case EDIT_MINUTE:
  lcd.print(local_m); goto LABEL; 
  break;
case EDIT_SEC:
  lcd.print(local_s);  goto LABEL;
  break;

}
LABEL: lcd.setCursor(Blink_pos[j][0],Blink_pos[j][1]);
      lcd.print("_");
      delay(300);
      }

}
void digitalClockDisplay()
{ 
  Serial.print(local_s);

  lcd.begin(16,2);
  lcd.setCursor(0,0); 
  lcd.print("Date:");
  if((local_day>0) &&(local_day<10) )
  {  
    lcd.print("0");  
    lcd.print(local_day);
  }
  else{ 
    lcd.print(local_day);
  }  
  lcd.print("/");
  if((local_month>0) &&(local_month<10) )
  {   
    lcd.print("0");  
    lcd.print(local_month);
  }
  else{   
    lcd.print("0");  
    lcd.print(local_month);
  }  
  lcd.print("/"); 
  lcd.print(local_year);
  lcd.print("    ");  
  lcd.setCursor(0,1);   
  lcd.print("Time:");
  if((local_h>0) &&(local_h<10) ){   
    lcd.print("0");  
    lcd.print(local_h);
  }
  else{ 
    lcd.print(local_h); 
  }  
  lcd.print(":"); 
  if((local_m>0) &&(local_m<10) ){   
    lcd.print("0");  
    lcd.print(local_m);
  }
  else{ 
    lcd.print(local_m); 
  }  
  lcd.print(":");
  if((local_s>0) &&(local_s<10) ){   
    lcd.print("0");  
    lcd.print(local_s);
  }
  else{ 
    lcd.print(local_s); 
  } 
  lcd.print("    ");
}
 
