/* 
 * File:   5110-lcd.h
 * Author: pandor
 *
 * Created on 13 septembre 2015, 16:30
 */

//init the LCD with PORTD pin
void LCDInit(void);

//send a charracter on the lcd given last position
void LCDCharacter(char character);

//send a string on the lcd given last position
void LCDString(char *characters);

//print a Bitmap on the screen
void LCDBitmap(char *my_array);

//clear all the screen
void LCDClear(void);

//go to specific position
void gotoXY(unsigned char x, unsigned char y);


